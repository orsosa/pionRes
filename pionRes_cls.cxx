#define pionRes_cls_cxx
#include "pionRes_cls.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void pionRes_cls::Loop()
{
//   In a ROOT session, you can do:
//      root> .L pionRes_cls_sim.C
//      root> pionRes_cls_sim t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//
//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;

  if (!QUIET)std::cout<<"processing...\n";
  if (!QUIET)std::cout.fill('.');
  if (!QUIET)std::cout<<"# trees to be processed: "<<fChain->GetNtrees()<<std::endl;

  Long64_t nentries = fChain->GetEntries();
  if (options.Contains("nmax:")){
    TString sub=options("nmax:[0-9]*");
    sub=sub(":[0-9]*");
    sub.ReplaceAll(":","0");
    if (sub.IsDigit())
      nentries = sub.Atoll();
  }
  Long64_t nbytes = 0, nb = 0;
  Double_t mx21, mx22;
  TDirectory *d;
  for (Long64_t jentry = 0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    TH1D *h;
    TProfile *pf;
    DIR["kin"]->GetObject("hNpair_all",h);
    h->Fill(npart);
    if (options.Contains("sim")){
      DIR["kin_mc"]->GetObject("hNpair_all",h);
      h->Fill(mc_npart);
    }
    //if (mc_npart != 1) continue; // only one generated
    if (options.Contains("sim")){
      if ( DIS(kTRUE) ){
	fillEvHistos(kTRUE);
	//for (int k = 0; k<1; k++){ // only first pair
	for (int k = 0; k<mc_npart; k++){ // All particles.   
	  //if ( (MMCut(k,kTRUE) && rhoCut(k,kTRUE) && CF(k,kTRUE) && minEnergy(k,kTRUE) && pi0PID(k,kTRUE) && DZCut(k,kTRUE)&& !MCMother(k,310)) )
	  //if ( (MMCut(k,kTRUE) && rhoCut(k,kTRUE) && CF(k,kTRUE) && minEnergy(k,kTRUE) && pi0PID(k,kTRUE) && DZCut(k,kTRUE)) ){
	  if ( kTRUE ){
	    fillPartHistos(k,kTRUE);
	    Double_t mx21, mx22;
	    mx21 = (mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])*(mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])-(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])*(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])-(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])*(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])-(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2])*(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2]);
	    mx22 = (mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])*(mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])-(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])*(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])-(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])*(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])-(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2])*(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2]);
  	    TString hnameM = "hM_mc";
	    TString hnameMx1 = "hmx21";
	    TString hnameMx2 = "hmx22";
	    TString hnamedz = "hdz_mc";
	    TString hmpi0name = "hmpi0_mc";
	    TString hname;
	    TString infix = "";
	    TString suff = "";
	    TString ttlsuf = "";
	    Bool_t binFound;
	    for (auto& x: bedg){
	      binFound = kFALSE;
	      TString bn = x.first;
	      brv_mc[bn]->GetNdata();
	      infix += bn.Data();
	      for (int n=0;n<x.second.size()-1;n++){
		if (x.second[n] < brv_mc[bn]->EvalInstance(k) && brv_mc[bn]->EvalInstance(k)< x.second[n+1]){
		  hname = "mc_" + bn + "/" + hnameMx1 + "_" + n;
		  fillHist(hname,mx21);
		  hname = "mc_" + bn + "/" + hnameMx2 + "_" + n;
		  fillHist(hname,mx22);

		}
	      }
	    }
	  }
	}
      }
    }
    //if ( !(DIS() && eFID_ec() && eFID_dc() && ePID() && npart==1) ) continue;
    if ( !(DIS() && eFID_ec() && eFID_dc() && ePID()) ) continue;
    fillEvHistos();

    for (int k = 0; k<npart; k++){
    //for (int k = 0; k<1; k++){ // only first pair
      //if ( !(FWD(k) && MMCut(k) && rhoCut(k) && CF(k) && minEnergy(k) && piFID_ec(k) && pipFID_dc(k) && pimFID_dc(k) && pi0PID(k) && DZCut(k)&& !MCMother(k,310)) ) continue; // kin limits.
      //if ( !(FWD(k) && MMCut(k) && rhoCut(k) && CF(k) && minEnergy(k) && piFID_ec(k) && pipFID_dc(k) && pimFID_dc(k) && pi0PID(k) && DZCut(k)) ) continue; // kin limits.
      //if ( !(FWD(k) && CF(k) && minEnergy(k) && piFID_ec(k) && pipFID_dc(k) && pimFID_dc(k) && pi0PID(k)) ) continue; // kin limits.
      //     
      if ( !(FWD(k)) ) continue; // kin limits.
      fillPartHistos(k);
      mx21 = (Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])*(Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])-(-Pex-pdata_px[k][0]-pdata_px[k][2])*(-Pex-pdata_px[k][0]-pdata_px[k][2])-(-Pey-pdata_py[k][0]-pdata_py[k][2])*(-Pey-pdata_py[k][0]-pdata_py[k][2])-(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2])*(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2]);
      mx22 = (Nu+0.93827-pdata_e[k][0]-pdata_e[k][1])*(Nu+0.93827-pdata_e[k][0]-pdata_e[k][1])-(-Pex-pdata_px[k][0]-pdata_px[k][1])*(-Pex-pdata_px[k][0]-pdata_px[k][1])-(-Pey-pdata_py[k][0]-pdata_py[k][1])*(-Pey-pdata_py[k][0]-pdata_py[k][1])-(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][1])*(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][1]);

      TString hnameM = "hM";
      TString hnameMx1 = "hmx21";
      TString hnameMx2 = "hmx22";
      TString hnamedz = "hdz";
      TString hmpi0name = "hmpi0";
      TString infix = "";
      TString suff = "";
      TString ttlsuf = "";
      Bool_t binFound;
      TString hname;
      for (auto& x: bedg){
	binFound = kFALSE;
	TString bn = x.first;
	brv[bn]->GetNdata();
	infix += bn.Data();
	for (int n=0;n<x.second.size()-1;n++){
	  if (x.second[n] < brv[bn]->EvalInstance(k) && brv[bn]->EvalInstance(k)< x.second[n+1]){
	    hname = bn + "/" + hnameMx1 + "_" + n;
	    fillHist(hname,mx21);
	    hname = bn + "/" + hnameMx2 + "_" + n;
	    fillHist(hname,mx22);
	  }
	}
      }
    }

    if (!QUIET) std::cout<<std::setw(15)<<float(jentry+1)/nentries*100<<" %"<<"\r";
    if (!QUIET) std::cout.flush();

  }
  ofile->Write("",TObject::kOverwrite);
  ofile->Close();
  bm->Show("main");

}

Bool_t pionRes_cls::ePID()
{
  return  (vze<20) &&(-2.5<e_chi2pid&&e_chi2pid<2.5);
  //return  (vze<15);
}

Bool_t pionRes_cls::DIS(Bool_t onMC)
{
  if (onMC)
    return (mc_Q2>1)&&(mc_W>2)&&(mc_y<0.8);
  return (Q2>1)&&(W>2)&&(y<0.8);
}

Bool_t pionRes_cls::eFID_ec()
{
  return (20<e_pcal_lv)&&(20<e_pcal_lw);
}

Bool_t pionRes_cls::piFID_ec(int k)
{
  Bool_t fid1 = true;
  if (!options.Contains("piFID_ec")) return true;
  if (options.Contains("pi0")){
    fid1 = (20<det_pcal_lv[k][1])&&(20<det_pcal_lw[k][1])&&(20<det_pcal_lv[k][2])&&(20<det_pcal_lw[k][2]);;
  }
  else{
    fid1 = (20<det_pcal_lv[k][1])&&(20<det_pcal_lw[k][1]);
  }
  
  return (20<det_pcal_lv[k][0])&&(20<det_pcal_lw[k][0])&&fid1;
}

Bool_t pionRes_cls::eFID_dc()
{
  return true;
}

Bool_t pionRes_cls::pipFID_dc(int k)
{
  return true;
}

Bool_t pionRes_cls::pimFID_dc(int k)
{
  return true;
}

Bool_t pionRes_cls::MMCut(int k, Bool_t onMC)
{
  Bool_t ret;
  if (options.Contains("noMxCut"))
    ret = true;
  
  else if (onMC)
    ret = sqrt(mc_Mx2[k])>1.0;

  else if (options.Contains("rho-"))
    if (options.Contains("rgb"))
      ret = sqrt(Mx2[k])>1.33; 
    else 
      //ret = sqrt(Mx2[k])>1.68; // rga and rgaob, Delta--
      ret = sqrt(Mx2[k])>1.33; // rga and rgaob, for consistency.

  else if (options.Contains("rgaob"))
    ret = sqrt(Mx2[k])>1.16;
  else if (options.Contains("rgb"))
    ret = sqrt(Mx2[k])>1.13;

  else
    ret = sqrt(Mx2[k])>1.10;//rga and sim
  if (options.Contains("excl")) ret=!ret;
  return ret;
}

Bool_t pionRes_cls::rhoCut(int k, Bool_t onMC)
{
  Bool_t ret = false; 
  if (!options.Contains("rhoCut"))
    ret = true;
  else if (onMC)
    ret = 0.642<mc_M[k]&&mc_M[k]<0.887;
  else if (options.Contains("rgb"))
    ret = 0.624<M[k]&&M[k]<0.902;

  else if (options.Contains("rgaob"))
    ret = 0.634<M[k]&&M[k]<0.884;
  else
    ret = 0.628<M[k]&&M[k]<0.897; //rga

  if (options.Contains("rhoCutComp"))
    ret = !ret; 

  return ret;
}

Bool_t pionRes_cls::MCMother(int k, int pid)
{
  // ret = kFALSE;
  // for (int k=0; k<kMax_sec;k++){
  //   ret = ret || (mc_pdata_mpid[k][0]==pid)
  // }
  // return ret;
  return (mc_pdata_mpid[k][0]==pid) || (mc_pdata_mpid[k][1]==pid);
}


Bool_t pionRes_cls::FWD(int k)
{
  bool fwd2 = true;
  if (options.Contains("pi0")){
    fwd2 = ( ((int)det_statPart[k][2]%4000)/2000 >= 1 )&&( ((int)det_statPart[k][3]%4000)/2000 >= 1 );
  }
  else{
    fwd2 = ( ((int)det_statPart[k][2]%4000)/2000 >= 1 );
  }  
  return ( ((int)det_statPart[k][1]%4000)/2000 >= 1 ) && fwd2;
}

Bool_t pionRes_cls::ExclCut(int k)
{
  Double_t Ex;
  Ex = Nu + 0.93827 - pdata_e[k][1] - pdata_e[k][2];

  return (-0.003<Mx2[k]&&Mx2[k]<0.002)&&(-0.15<Ex&&Ex<0.19);
}

Bool_t pionRes_cls::MpiCut(int k, int pid)
{
  Double_t LL = -0.091;
  Double_t HL;
  if (pid==211)
    HL = 0.114;
  else if(pid==-211)
    HL = 0.127;
    
  return LL<Mx2[k]&&Mx2[k]<HL;
}


Bool_t pionRes_cls::CF(int k, Bool_t onMC)
{
  Float_t xF_1 = -1111;
  Float_t E_1 = -1111;
  
  if (options.Contains("pi0")){
    if (onMC) 
      xF_1 = getxF(mc_pdata_e[k][1] + mc_pdata_e[k][2], mc_pdata_px[k][1] + mc_pdata_px[k][2], mc_pdata_py[k][1] + mc_pdata_py[k][2], mc_pdata_pz[k][1] + mc_pdata_pz[k][2]);
    else 
      xF_1 = getxF(pdata_e[k][1] + pdata_e[k][2], pdata_px[k][1] + pdata_px[k][2], pdata_py[k][1] + pdata_py[k][2], pdata_pz[k][1] + pdata_pz[k][2]);
    if (onMC) 
      E_1 = (mc_pdata_e[k][1] + mc_pdata_e[k][2]);
    else
      E_1 = (pdata_e[k][1] + pdata_e[k][2]);
  }
  else{
    if (onMC){
      xF_1 = mc_xFm1[k];
      E_1 = mc_pdata_e[k][1];
    }
    else {
      xF_1 = xFm1[k];
      E_1 = pdata_e[k][1];
    }
  }
  Bool_t ret;

  if (onMC)
    ret = (mc_xFm0[k]>0) && (xF_1>0) && (mc_pdata_e[k][0]/mc_Nu>0.1) && (E_1/mc_Nu>0.1) && ((mc_pdata_e[k][0] + E_1)/mc_Nu<0.95);
  else 
    ret = (xFm0[k]>0) && (xF_1>0) && (pdata_e[k][0]/Nu>0.1) && (E_1/Nu>0.1) && ((pdata_e[k][0] + E_1)/Nu<0.95);

  return ret;
}

Bool_t pionRes_cls::minEnergy(int k, Bool_t onMC)
{
  Float_t E_1 = -1111;
  if (options.Contains("pi0")){
    if (onMC)
      E_1 = (mc_pdata_e[k][1] + mc_pdata_e[k][2]);
    else
      E_1 = (pdata_e[k][1] + pdata_e[k][2]);
  }
  else{
    if (onMC)
      E_1 = mc_pdata_e[k][1];
    else
      E_1 = pdata_e[k][1];
  }
  Bool_t ret;
  if (onMC)
    ret = (mc_pdata_e[k][0]>1.0) && (E_1>1.0);
  else
    ret = (pdata_e[k][0]>1.0) && (E_1>1.0);
  return ret;
}

Int_t pionRes_cls::fitMpi0Hist(TString hname){
  TH1D *h;
  gDirectory->GetObject(hname,h);
  if (h->GetEntries()==0) return 1;
  TF1 *ff = new TF1 (hname +"_ff","gaus+pol2(3)",MPI0_LL,MPI0_HL);
  ff->SetParNames("C","m_{#gamma#gamma}","#sigma_{#gamma#gamma}","a_{0}","a_{1}","a_{2}");
  ff->SetParLimits(0,0.,1e6);
  ff->SetParLimits(1,0.12,0.14);
  ff->SetParLimits(2,0.007,0.03);
  ff->SetParLimits(3,0.,1e4);
  ff->SetParLimits(5,-1e5,0);
  ff->SetParameters(800,0.135,0.013,392,409,-5447);
  ff->SetLineColor(kRed);
  h->Fit(ff,"RNB");
  h->GetListOfFunctions()->Add(ff);
  
  return 0;
}

Int_t pionRes_cls::fillMpi0Hist(TString hname, Int_t k, Bool_t onMC){
  TH1D *h;
  ofile->GetObject(hname,h);
  Float_t mpi0;
  if (onMC)
    mpi0 = sqrt(2*(mc_pdata_e[k][1]*mc_pdata_e[k][2] - mc_pdata_px[k][1]*mc_pdata_px[k][2] - mc_pdata_py[k][1]*mc_pdata_py[k][2] - mc_pdata_pz[k][1]*mc_pdata_pz[k][2]));
  else 
    mpi0 = sqrt(2*(pdata_e[k][1]*pdata_e[k][2] - pdata_px[k][1]*pdata_px[k][2] - pdata_py[k][1]*pdata_py[k][2] - pdata_pz[k][1]*pdata_pz[k][2]));

  h->Fill(mpi0);
  
  return 0;
}

Int_t pionRes_cls::fillProf(TString pname, Float_t x, Float_t value){
  TProfile *p;
  ofile->GetObject(pname,p);
  p->Fill(x,value);
  return 0;
}

Int_t pionRes_cls::fillHist(TString hname, Float_t value){
  TH1D *h;
  ofile->GetObject(hname,h);
  h->Fill(value);
  return 0;
}

Int_t pionRes_cls::fillHist2D(TString hname, Float_t x, Float_t y){
  TH2D *h;
  if (*helicity == -1) { // positive helicity, it is flipped!
    ofile->GetObject(hname + "_p",h);
    h->Fill(x,y);
  }
  else if(*helicity == 1){ // negative helicity, it is flipped!
    ofile->GetObject(hname + "_n",h);
    h->Fill(x,-y);
  }
  else
    return 1;
  
  return 0;
}

Int_t pionRes_cls::configHisto(TH1D *h, TString xtitle, TString ytitle, Color_t c, EMarkerStyle ms){

  h->GetXaxis()->SetTitle(xtitle);
  h->GetYaxis()->SetTitle(ytitle);
  h->SetLineColor(c);
  h->SetMarkerColor(c);
  h->SetMarkerStyle(ms);
  h->SetMarkerSize(1.3);
  
  return 0;
}

Int_t pionRes_cls::LoadElecFIDPar(){
  std::ifstream fpar("DC_elec_par.txt");

  char junk[100];
  fpar.getline(junk,100);
  fpar.getline(junk,100);
  fpar.getline(junk,100);
  fpar.getline(junk,100);
  fpar.getline(junk,100);
  fpar.getline(junk,100);

  for (int k=0;k<NSECTORS;k++)
  {
    fpar>>pl0_e[k]>>pl1_e[k]>>pl2_e[k]>>pl3_e[k]>>pr0_e[k]>>pr1_e[k]>>pr2_e[k]>>pr3_e[k];
  }
  fpar.close();
  return 0;
}


Int_t pionRes_cls::setStyle(){

  myStyle  = new TStyle("orsosaStyle","My Root Styles");
  myStyle->SetHistMinimumZero(0);
  myStyle->SetPalette(1,0);
  //myStyle->SetPalette(kBlueYellow);
  myStyle->SetCanvasBorderMode(0);
  myStyle->SetPadBorderMode(0);
  myStyle->SetPadColor(0);
  myStyle->SetCanvasColor(0);
  myStyle->SetTitleFillColor(0);
  myStyle->SetTitleBorderSize(0);

  myStyle->SetStatColor(0);
  myStyle->SetOptStat("e");

  myStyle->SetLabelSize(0.05,"xyz"); // size of axis value font
  myStyle->SetTitleSize(0.05,"xyz"); // size of axis title font
  myStyle->SetTitleOffset(0.75,"xyz"); // axis title offset 
  myStyle->SetTitleFont(22,"xyz"); // font option
  myStyle->SetTitleFont(22,"a"); // pad font option
  myStyle->SetLabelFont(22,"xyz");


  myStyle->SetLabelSize(0.02,"z"); // size of axis value font
  myStyle->SetLabelOffset(-0.03,"z"); // size of axis value font
  myStyle->SetTickLength(0.002,"z"); // size of axis value font

  
  // Stat and legend fonts
  myStyle->SetStatFont(22); 
  myStyle->SetLegendFont(22); 
  // hiostogram style
  myStyle->SetHistLineWidth(2);
  myStyle->SetCanvasDefH(768);
  myStyle->SetCanvasDefW(1024);

  myStyle->SetPadBottomMargin(0.1);
  myStyle->SetPadTopMargin(0.1);
  myStyle->SetPadLeftMargin(0.1);
  myStyle->SetPadRightMargin(0.075);

  myStyle->SetPadTickX(1);
  myStyle->SetPadTickY(1);

  myStyle->SetFrameBorderMode(0);
  
  myStyle->SetGridStyle(3);
  myStyle->SetGridWidth(2);
  myStyle->SetPadGridX(kTRUE);
  myStyle->SetPadGridY(kTRUE);

  
  gROOT->SetStyle("orsosaStyle"); //uncomment to set this style
  
  return 0;
}

Bool_t pionRes_cls::pi0PID(Int_t k, Bool_t onMC){
  if (!options.Contains("pi0")) return kTRUE;
  if (options.Contains("noPi0Cut")) return kTRUE;
  Float_t minth_brem = 10;
  Float_t minE = 0.5;
  Bool_t ret = true;
  Float_t mpi0;
  TH1D *h;
  
  if (onMC)
    mpi0 = sqrt(2*(mc_pdata_e[k][1]*mc_pdata_e[k][2] - mc_pdata_px[k][1]*mc_pdata_px[k][2] - mc_pdata_py[k][1]*mc_pdata_py[k][2] - mc_pdata_pz[k][1]*mc_pdata_pz[k][2]));
  else {
    mpi0 = sqrt(2*(pdata_e[k][1]*pdata_e[k][2] - pdata_px[k][1]*pdata_px[k][2] - pdata_py[k][1]*pdata_py[k][2] - pdata_pz[k][1]*pdata_pz[k][2]));
    ret = ret && acos((pdata_px[k][1]*Pex + pdata_py[k][1]*Pey + pdata_pz[k][1]*Pez)/pdata_e[k][1]/(Nu/y-Nu))*TMath::RadToDeg()>minth_brem;
    ret = ret && acos((pdata_px[k][2]*Pex + pdata_py[k][2]*Pey + pdata_pz[k][2]*Pez)/pdata_e[k][2]/(Nu/y-Nu))*TMath::RadToDeg()>minth_brem; 
    ret = ret && (pdata_e[k][1]>minE)&&(pdata_e[k][2]>minE);
    ret = ret && det_pcal_lv[k][1]>0&&det_pcal_lv[k][1]>0;
    ret = ret && det_pcal_lw[k][2]>0&&det_pcal_lw[k][2]>0;
    ret = ret && 10<pdata_phiHs[k][1]&&pdata_phiHs[k][1]<350;
    ret = ret && 10<pdata_phiHs[k][2]&&pdata_phiHs[k][2]<350;
  }
  if (ret) {
    if (onMC)
      DIR["kin_mc"]->GetObject("hmpi0",h);
    else
      DIR["kin"]->GetObject("hmpi0",h);
    h->Fill(mpi0);
  }

  if (onMC){
    DIR["kin_mc"]->GetObject("hmpi0_cut",h);
    ret = ret && 0.13<mpi0&&mpi0<0.14;
    if (ret) h->Fill(mpi0);
  }
  else{
    DIR["kin"]->GetObject("hmpi0_cut",h);
    ret = ret && MPI0_LL<mpi0&&mpi0<MPI0_HL;
    if (ret) h->Fill(mpi0);
  }

  return ret;
}


Float_t pionRes_cls::getxF(Float_t E, Float_t Px, Float_t Py, Float_t Pz, Bool_t onMC){
  Float_t kMprt = 0.93827;
  Float_t kEbeam;
  if (onMC) kEbeam = mc_Nu/mc_y;
  else  kEbeam = Nu/y;
  Float_t P2 = Px*Px + Py*Py + Pz*Pz;
  Float_t cospq;
  if (onMC) cospq = ((kEbeam-mc_Pez)*Pz - mc_Pex*Px - mc_Pey*Py)/( sqrt((mc_Q2 + mc_Nu*mc_Nu)*P2) );
  else cospq = ((kEbeam-Pez)*Pz - Pex*Px - Pey*Py)/( sqrt((Q2 + Nu*Nu)*P2) );
  Float_t Pt2 = P2*(1-cospq*cospq);
  Float_t Pl2 = P2*cospq*cospq;
  Float_t Pl = sqrt(P2)*cospq;
  ////// LORENTZ BOOST //////////
  Float_t b,g;
  if (onMC){
    b==TMath::Sqrt(mc_Q2 + mc_Nu*mc_Nu)/(mc_Nu + kMprt);
    g=(mc_Nu + kMprt)/mc_W;
  }
  else{
    b==TMath::Sqrt(Q2 + Nu*Nu)/(Nu + kMprt);
    g=(Nu + kMprt)/W;
  }
  Float_t PlCM = g*(Pl - b*E);
      
  Float_t xFm;
  if (onMC){
    xFm = 2*PlCM/mc_W;
  }
  else{
    xFm = 2*PlCM/W;
  }
  return xFm;
}

Double_t pionRes_cls::get_phiR(int k, Bool_t onMC){
  Double_t phi;
  if (onMC) phi = phiR[k];
  else phi = mc_phiR[k];
  Float_t kEbeam;
  if (onMC) kEbeam= mc_Nu/mc_y;
  else kEbeam= Nu/y;
  if (options.Contains("pi0") ){
    if (onMC){
      TVector3 Ph(mc_Phx[k],mc_Phy[k],mc_Phz[k]);
      TVector3 P0(mc_pdata_px[k][0],mc_pdata_py[k][0],mc_pdata_pz[k][0]);
      TVector3 P1(mc_pdata_px[k][1]+mc_pdata_px[k][2],mc_pdata_py[k][1]+mc_pdata_py[k][2],mc_pdata_pz[k][1]+mc_pdata_pz[k][2]);
      TVector3 q(-mc_Pex,-mc_Pey,kEbeam-mc_Pez);
      TVector3 k_in(0,0,kEbeam);

      TVector3 Ph_u = Ph.Unit();
      TVector3 R = P0 - P1;
      R=R*0.5;
      TVector3 RT = R-(R*Ph_u)*Ph_u;

      Float_t qxkRT_sign = q.Cross(k_in)*RT;
      qxkRT_sign /= TMath::Abs(qxkRT_sign);

      // Float_t qxkST_sign = q.Cross(k_in)*ST;
      // qxkST_sign /= TMath::Abs(qxkST_sign);

      Float_t qxkqxRT = (q.Cross(k_in))*(q.Cross(RT));
      Float_t qxkqxRT_max = (q.Cross(k_in)).Mag()*(q.Cross(RT)).Mag();
    
      phi =  qxkRT_sign*TMath::ACos(qxkqxRT/qxkqxRT_max)*TMath::RadToDeg();
      phi=phi<0?phi+360:phi;
    }
    else{
      TVector3 Ph(Phx[k],Phy[k],Phz[k]);
      TVector3 P0(pdata_px[k][0],pdata_py[k][0],pdata_pz[k][0]);
      TVector3 P1(pdata_px[k][1]+pdata_px[k][2],pdata_py[k][1]+pdata_py[k][2],pdata_pz[k][1]+pdata_pz[k][2]);
      TVector3 q(-Pex,-Pey,kEbeam-Pez);
      TVector3 k_in(0,0,kEbeam);

      TVector3 Ph_u = Ph.Unit();
      TVector3 R = P0 - P1;
      R=R*0.5;
      TVector3 RT = R-(R*Ph_u)*Ph_u;

      Float_t qxkRT_sign = q.Cross(k_in)*RT;
      qxkRT_sign /= TMath::Abs(qxkRT_sign);

      // Float_t qxkST_sign = q.Cross(k_in)*ST;
      // qxkST_sign /= TMath::Abs(qxkST_sign);

      Float_t qxkqxRT = (q.Cross(k_in))*(q.Cross(RT));
      Float_t qxkqxRT_max = (q.Cross(k_in)).Mag()*(q.Cross(RT)).Mag();
    
      phi =  qxkRT_sign*TMath::ACos(qxkqxRT/qxkqxRT_max)*TMath::RadToDeg();
      phi=phi<0?phi+360:phi;
    }
  }
  return phi;
}

Float_t pionRes_cls::GetDZ(int k, Bool_t onMC){
  Double_t DZ;
  if (onMC) DZ = (mc_pdata_e[k][0] - mc_pdata_e[k][1])/mc_Nu;
  else DZ = (pdata_e[k][0] - pdata_e[k][1])/Nu;

  if (options.Contains("pi0")){
    if (onMC) DZ = (mc_pdata_e[k][0]-(mc_pdata_e[k][1]+mc_pdata_e[k][2]))/mc_Nu;
    else DZ = (pdata_e[k][0]-(pdata_e[k][1]+pdata_e[k][2]))/Nu;
  }
  return DZ;
}

Bool_t pionRes_cls::DZCut(int k, Bool_t onMC)
{
  Double_t DZ;
  if (onMC) DZ = (mc_pdata_e[k][0] - mc_pdata_e[k][1])/Nu;
  else DZ = (pdata_e[k][0] - pdata_e[k][1])/Nu;
  Bool_t ret = false;
  if (!options.Contains("DZCut"))
    ret = true;
  else 
  {
    if (options.Contains("pi0")){
      if (onMC) DZ = (mc_pdata_e[k][0]-(mc_pdata_e[k][1]+mc_pdata_e[k][2]))/mc_Nu;
      else DZ = (pdata_e[k][0]-(pdata_e[k][1]+pdata_e[k][2]))/Nu;
    }
  }
  ret =  -0.2<DZ&&DZ<0.2;   
  return ret;
}


Double_t pionRes_cls::get_phiH1(int k, Bool_t onMC){
  Double_t phi;
  if (onMC) phi = mc_pdata_phiHs[k][1];
  else phi = pdata_phiHs[k][1];
  Double_t kEbeam;
  if (onMC) kEbeam = mc_Nu/mc_y;
  else kEbeam = Nu/y;

  if (options.Contains("pi0")){
    if (onMC){
      TVector3 Phv(mc_pdata_px[k][1] + mc_pdata_px[k][2], mc_pdata_py[k][1] + mc_pdata_py[k][2], mc_pdata_pz[k][1] + mc_pdata_pz[k][2]);
      TVector3 q(-mc_Pex,-mc_Pey,kEbeam-mc_Pez);
      TVector3 k_in(0,0,kEbeam);
      Float_t qxkPhv_sign = q.Cross(k_in)*Phv;
      qxkPhv_sign /= TMath::Abs(qxkPhv_sign);
    
      Float_t qxkqxPhv = (q.Cross(k_in))*(q.Cross(Phv));
      Float_t qxkqxPhv_max = (q.Cross(k_in)).Mag()*(q.Cross(Phv)).Mag();
      
      phi =  qxkPhv_sign*TMath::ACos(qxkqxPhv/qxkqxPhv_max)*TMath::RadToDeg();
      phi=phi<0?phi+360:phi;
    }
    else{
      TVector3 Phv(pdata_px[k][1] + pdata_px[k][2], pdata_py[k][1] + pdata_py[k][2], pdata_pz[k][1] + pdata_pz[k][2]);
      TVector3 q(-Pex,-Pey,kEbeam-Pez);
      TVector3 k_in(0,0,kEbeam);
      Float_t qxkPhv_sign = q.Cross(k_in)*Phv;
      qxkPhv_sign /= TMath::Abs(qxkPhv_sign);
    
      Float_t qxkqxPhv = (q.Cross(k_in))*(q.Cross(Phv));
      Float_t qxkqxPhv_max = (q.Cross(k_in)).Mag()*(q.Cross(Phv)).Mag();
    
      phi =  qxkPhv_sign*TMath::ACos(qxkqxPhv/qxkqxPhv_max)*TMath::RadToDeg();
      phi=phi<0?phi+360:phi;
    }
  }

  return phi;
}
