//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 18 15:49:54 2019 by ROOT version 6.18/02
// from TTree outdata/:pi+_pi-, all combinations
// found on file: ../filtering/outfiles/pippim_sim_ga_1.root
//////////////////////////////////////////////////////////

#ifndef pionRes_cls_h
#define pionRes_cls_h

#include <TROOT.h>
#include <TChain.h>
#include <TH1F.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "TROOT.h"
#include "TStyle.h"
#include "TString.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TH3D.h"
#include "TF1.h"
#include "TCut.h"
#include "TROOT.h"
#include "TBenchmark.h"
#include "TLine.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TTreeFormula.h"
#include "TRegexp.h"
#include "TProfile.h"
#include "TVector3.h"
#include "TDirectory.h"

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

class pionRes_cls {
 public :
  TBenchmark *bm;
  TString OUTDIR;
  TString SUFF;
  TFile *ofile;
  Bool_t QUIET;
  TChain          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain
  Int_t Nb_NF;
  TStyle *myStyle;
  TString options;
  TString PAIRNAME;
  TString Pi0NAME;
  TString Pi1NAME;
  // Fixed size dimensions of array or collections stored in the TTree if any.
  static constexpr Int_t kMaxdet = 400;
  static constexpr Int_t kMaxpdata = 400;
  static constexpr Int_t kMaxmc_pdata = 400;
  static constexpr Int_t NSECTORS = 6;
  static constexpr Float_t minALU = -0.15;
  static constexpr Float_t maxALU = 0.15;
  static constexpr Float_t MPI0_LL = 0.095;
  static constexpr Float_t MPI0_HL = 0.17;
  static constexpr Int_t kMax_sec = 8;

  Float_t         *helicity;
  
  //// elec fid par
  Float_t pl0_e[NSECTORS], pl1_e[NSECTORS], pl2_e[NSECTORS], pl3_e[NSECTORS], pr0_e[NSECTORS], pr1_e[NSECTORS], pr2_e[NSECTORS], pr3_e[NSECTORS];

  //// bin variables
  std::vector <Double_t> *be = 0;
  std::map<TString, std::vector <Double_t>> bedg;
  std::map<TString, std::vector <Double_t>> bedg_mc;
  std::map<TString, std::vector <TString>> BC;
  std::map<TString, std::vector <TString>> BC_mc;
  std::map<TString, TDirectory*> DIR;
  std::map<TString, TTreeFormula *> brv;
  std::map<TString, TTreeFormula *> brv_mc;
  TTreeFormula *brv_H, *brv_H_mc;
  std::vector <Double_t> bedg_H;
  std::vector <Double_t> bedg_H_mc;
  
  // Declaration of leaf types
  Int_t           npart;
  Float_t         M[kMaxpdata];   //[npart]
  Float_t         Phx[kMaxpdata];   //[npart]
  Float_t         Phy[kMaxpdata];   //[npart]
  Float_t         Phz[kMaxpdata];   //[npart]
  Float_t         Z[kMaxpdata];   //[npart]
  Float_t         Cospq[kMaxpdata];   //[npart]
  Float_t         Pt2[kMaxpdata];   //[npart]
  Float_t         Event[kMaxpdata];   //[npart]
  Float_t         M2_01[kMaxpdata];   //[npart]
  Float_t         M2_02[kMaxpdata];   //[npart]
  Float_t         phiH[kMaxpdata];   //[npart]
  Float_t         phiR[kMaxpdata];   //[npart]
  Float_t         helic002_phiR[kMaxpdata];   //[npart]
  Float_t         helic005_phiR[kMaxpdata];   //[npart]
  Float_t         helic010_phiR[kMaxpdata];   //[npart]
  Float_t         helic020_phiR[kMaxpdata];   //[npart]
  Float_t         helic002_phiRst[kMaxpdata];   //[npart]
  Float_t         helic005_phiRst[kMaxpdata];   //[npart]
  Float_t         helic010_phiRst[kMaxpdata];   //[npart]
  Float_t         helic020_phiRst[kMaxpdata];   //[npart]
  Float_t         wUxS_phiR[kMaxpdata];   //[npart]
  Float_t         R[kMaxpdata];   //[npart]
  Float_t         KF[kMaxpdata];   //[npart]
  Float_t         Mx2[kMaxpdata];   //[npart]
  Float_t         xF[kMaxpdata];   //[npart]
  Float_t         xF0[kMaxpdata];   //[npart]
  Float_t         xF1[kMaxpdata];   //[npart]
  Float_t         plcm[kMaxpdata];   //[npart]
  Float_t         plcm0[kMaxpdata];   //[npart]
  Float_t         plcm1[kMaxpdata];   //[npart]
  Float_t         Eh[kMaxpdata];   //[npart]
  Float_t         xFm[kMaxpdata];   //[npart]
  Float_t         xFm0[kMaxpdata];   //[npart]
  Float_t         xFm1[kMaxpdata];   //[npart]
  Float_t         theta0[kMaxpdata];   //[npart]
  Float_t         theta1[kMaxpdata];   //[npart]
  Float_t         cos_theta_P0cm[kMaxpdata];   //[npart]
  Float_t         sin_theta_P0cm[kMaxpdata];   //[npart]
  Float_t         xFo[kMaxpdata];   //[npart]
  Float_t         xFo0[kMaxpdata];   //[npart]
  Float_t         xFo1[kMaxpdata];   //[npart]
  Float_t         phiH_phiR[kMaxpdata];   //[npart]
  Float_t         phiR_cov[kMaxpdata];   //[npart]
  Float_t         p0T2[kMaxpdata];   //[npart]
  Float_t         p1T2[kMaxpdata];   //[npart]
  Float_t         phipq[kMaxpdata];   //[npart]
  Float_t         phT2[kMaxpdata];   //[npart]
  Float_t         etaCM0[kMaxpdata];   //[npart]
  Float_t         etaCM1[kMaxpdata];   //[npart]
  Float_t         etaBF0p[kMaxpdata];   //[npart]
  Float_t         etaBF1p[kMaxpdata];   //[npart]
  Float_t         etaBF0m[kMaxpdata];   //[npart]
  Float_t         etaBF1m[kMaxpdata];   //[npart]
  Float_t         etaBF0[kMaxpdata];   //[npart]
  Float_t         etaBF1[kMaxpdata];   //[npart]
  Float_t         phiR_ha[kMaxpdata];   //[npart]
  Float_t         plcm0_r[kMaxpdata];   //[npart]
  Float_t         plcm1_r[kMaxpdata];   //[npart]
  Float_t         phiR_covH[kMaxpdata];   //[npart]
  Float_t         E0_phcm[kMaxpdata];   //[npart]
  Float_t         E1_phcm[kMaxpdata];   //[npart]
  Int_t           mix_npart;
  Int_t           mc_mix_npart;
  Int_t           det_;
  UInt_t          det_fUniqueID[kMaxdet];   //[det_]
  UInt_t          det_fBits[kMaxdet];   //[det_]
  Float_t         det_beta[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_m2b[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_vx[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_vy[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_vz[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_dcx[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_dcy[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_dcz[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_statPart[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_dc_chi2[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_dc_ndf[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_pcal_lu[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_pcal_lv[kMaxdet][kMax_sec];   //[det_]
  Float_t         det_pcal_lw[kMaxdet][kMax_sec];   //[det_]
  Int_t           pdata_;
  UInt_t          pdata_fUniqueID[kMaxpdata];   //[pdata_]
  UInt_t          pdata_fBits[kMaxpdata];   //[pdata_]
  Float_t         pdata_e[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_px[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_py[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_pz[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_helic002_phiH[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_helic005_phiH[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_helic010_phiH[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_helic020_phiH[kMaxpdata][kMax_sec];   //[pdata_]
  Float_t         pdata_phiHs[kMaxpdata][kMax_sec];   //[pdata_]
  Int_t           mc_pdata_;
  UInt_t          mc_pdata_fUniqueID[kMaxmc_pdata];   //[mc_pdata_]
  UInt_t          mc_pdata_fBits[kMaxmc_pdata];   //[mc_pdata_]
  Float_t         mc_pdata_e[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_px[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_py[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_pz[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_helic002_phiH[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_helic005_phiH[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_helic010_phiH[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_helic020_phiH[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_phiHs[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Float_t         mc_pdata_mpid[kMaxmc_pdata][kMax_sec];   //[mc_pdata_]
  Int_t           mc_npart;
  Float_t         mc_M[kMaxpdata];   //[mc_npart]
  Float_t         mc_Phx[kMaxpdata];   //[mc_npart]
  Float_t         mc_Phy[kMaxpdata];   //[mc_npart]
  Float_t         mc_Phz[kMaxpdata];   //[mc_npart]
  Float_t         mc_Z[kMaxpdata];   //[mc_npart]
  Float_t         mc_Cospq[kMaxpdata];   //[mc_npart]
  Float_t         mc_Pt2[kMaxpdata];   //[mc_npart]
  Float_t         mc_Event[kMaxpdata];   //[mc_npart]
  Float_t         mc_M2_01[kMaxpdata];   //[mc_npart]
  Float_t         mc_M2_02[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiH[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic002_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic005_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic010_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic020_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic002_phiRst[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic005_phiRst[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic010_phiRst[kMaxpdata];   //[mc_npart]
  Float_t         mc_helic020_phiRst[kMaxpdata];   //[mc_npart]
  Float_t         mc_wUxS_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_Mx2[kMaxpdata];   //[mc_npart]
  Float_t         mc_xF[kMaxpdata];   //[mc_npart]
  Float_t         mc_xF0[kMaxpdata];   //[mc_npart]
  Float_t         mc_xF1[kMaxpdata];   //[mc_npart]
  Float_t         mc_plcm[kMaxpdata];   //[mc_npart]
  Float_t         mc_plcm0[kMaxpdata];   //[mc_npart]
  Float_t         mc_plcm1[kMaxpdata];   //[mc_npart]
  Float_t         mc_Eh[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFm[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFm0[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFm1[kMaxpdata];   //[mc_npart]
  Float_t         mc_theta0[kMaxpdata];   //[mc_npart]
  Float_t         mc_theta1[kMaxpdata];   //[mc_npart]
  Float_t         mc_cos_theta_P0cm[kMaxpdata];   //[mc_npart]
  Float_t         mc_sin_theta_P0cm[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFo[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFo0[kMaxpdata];   //[mc_npart]
  Float_t         mc_xFo1[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiH_phiR[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiR_cov[kMaxpdata];   //[mc_npart]
  Float_t         mc_p0T2[kMaxpdata];   //[mc_npart]
  Float_t         mc_p1T2[kMaxpdata];   //[mc_npart]
  Float_t         mc_phipq[kMaxpdata];   //[mc_npart]
  Float_t         mc_phT2[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaCM0[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaCM1[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF0p[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF1p[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF0m[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF1m[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF0[kMaxpdata];   //[mc_npart]
  Float_t         mc_etaBF1[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiR_ha[kMaxpdata];   //[mc_npart]
  Float_t         mc_plcm0_r[kMaxpdata];   //[mc_npart]
  Float_t         mc_plcm1_r[kMaxpdata];   //[mc_npart]
  Float_t         mc_phiR_covH[kMaxpdata];   //[mc_npart]
  Float_t         mc_E0_phcm[kMaxpdata];   //[mc_npart]
  Float_t         mc_E1_phcm[kMaxpdata];   //[mc_npart]
  Float_t         mc_R[kMaxpdata];   //[mc_npart]
  Float_t         mc_KF[kMaxpdata];   //[mc_npart]
  Float_t         Q2;
  Float_t         W;
  Float_t         Nu;
  Float_t         Xb;
  Float_t         vxec;
  Float_t         vyec;
  Float_t         vzec;
  Float_t         vxe;
  Float_t         vye;
  Float_t         vze;
  Float_t         Pex;
  Float_t         Pey;
  Float_t         Pez;
  Float_t         event;
  Float_t         Pe;
  Float_t         Ee;
  Float_t         e_Ein;
  Float_t         e_Eout;
  Float_t         e_Epcal;
  Float_t         e_npheltcc;
  Float_t         e_nphehtcc;
  Float_t         helic;
  Float_t         e_chi2pid;
  Float_t         e_pcal_lu;
  Float_t         e_pcal_lv;
  Float_t         e_pcal_lw;
  Float_t         e_ecin_lu;
  Float_t         e_ecin_lv;
  Float_t         e_ecin_lw;
  Float_t         e_ecout_lu;
  Float_t         e_ecout_lv;
  Float_t         e_ecout_lw;
  Float_t         e_pcal_hx;
  Float_t         e_pcal_hy;
  Float_t         e_pcal_hz;
  Float_t         e_ecin_hx;
  Float_t         e_ecin_hy;
  Float_t         e_ecin_hz;
  Float_t         e_ecout_hx;
  Float_t         e_ecout_hy;
  Float_t         e_ecout_hz;
  Float_t         e_trajx_sl0;
  Float_t         e_trajx_sl1;
  Float_t         e_trajx_sl2;
  Float_t         e_trajx_sl3;
  Float_t         e_trajx_sl4;
  Float_t         e_trajx_sl5;
  Float_t         e_trajy_sl0;
  Float_t         e_trajy_sl1;
  Float_t         e_trajy_sl2;
  Float_t         e_trajy_sl3;
  Float_t         e_trajy_sl4;
  Float_t         e_trajy_sl5;
  Float_t         e_trajz_sl0;
  Float_t         e_trajz_sl1;
  Float_t         e_trajz_sl2;
  Float_t         e_trajz_sl3;
  Float_t         e_trajz_sl4;
  Float_t         e_trajz_sl5;
  Float_t         e_pathtof;
  Float_t         e_timetof;
  Float_t         e_sector_tof;
  Float_t         e_Beta;
  Float_t         STTime;
  Float_t         RFTime;
  Float_t         e_dcx_rot_0;
  Float_t         e_dcy_rot_0;
  Float_t         e_dcx_rot_1;
  Float_t         e_dcy_rot_1;
  Float_t         e_dcx_rot_2;
  Float_t         e_dcy_rot_2;
  Float_t         e_sector_ltcc;
  Float_t         e_sector_htcc;
  Float_t         e_sector_ecal;
  Float_t         revent;
  Float_t         e_dc_chi2;
  Float_t         e_ftof1ax;
  Float_t         e_ftof1ay;
  Float_t         e_ftof1az;
  Float_t         e_pcalx;
  Float_t         e_pcaly;
  Float_t         e_pcalz;
  Float_t         e_ecalx;
  Float_t         e_ecaly;
  Float_t         e_ecalz;
  Float_t         e_ltccx;
  Float_t         e_ltccy;
  Float_t         e_ltccz;
  Float_t         e_htccx;
  Float_t         e_htccy;
  Float_t         e_htccz;
  Float_t         e_ftof1bx;
  Float_t         e_ftof1by;
  Float_t         e_ftof1bz;
  Float_t         e_ftof2x;
  Float_t         e_ftof2y;
  Float_t         e_ftof2z;
  Float_t         helonline_hel;
  Float_t         helonline_helRaw;
  Float_t         helflip_hel;
  Float_t         helflip_helRaw;
  Float_t         helflip_event;
  Float_t         e_dc_status;
  Float_t         e_dc_ndf;
  Float_t         e_sector_dc;
  Float_t         e_statPart;
  Float_t         e_DCPx;
  Float_t         e_DCPy;
  Float_t         e_DCPz;
  Float_t         y;
  Float_t         th_e;
  Float_t         phi_e;
  Float_t         helicRaw;
  Float_t         fA;
  Float_t         fB;
  Float_t         fC;
  Float_t         fV;
  Float_t         fW;
  Float_t         mc_Q2;
  Float_t         mc_W;
  Float_t         mc_Nu;
  Float_t         mc_Xb;
  Float_t         mc_vxe;
  Float_t         mc_vye;
  Float_t         mc_vze;
  Float_t         mc_Pex;
  Float_t         mc_Pey;
  Float_t         mc_Pez;
  Float_t         mc_event;
  Float_t         e_mcmass;
  Float_t         mc_Pe;
  Float_t         mc_Ee;
  Float_t         mc_revent;
  Float_t         mc_y;
  Float_t         mc_th_e;
  Float_t         mc_phi_e;
  Float_t         mc_e_Beta;
  Float_t         mc_helic;
  Float_t         mc_fA;
  Float_t         mc_fB;
  Float_t         mc_fC;
  Float_t         mc_fV;
  Float_t         mc_fW;

  // List of branches
  TBranch        *b_npart;   //!
  TBranch        *b_M;   //!
  TBranch        *b_Phx;   //!
  TBranch        *b_Phy;   //!
  TBranch        *b_Phz;   //!
  TBranch        *b_Z;   //!
  TBranch        *b_Cospq;   //!
  TBranch        *b_Pt2;   //!
  TBranch        *b_Event;   //!
  TBranch        *b_M2_01;   //!
  TBranch        *b_M2_02;   //!
  TBranch        *b_phiH;   //!
  TBranch        *b_phiR;   //!
  TBranch        *b_helic002_phiR;   //!
  TBranch        *b_helic005_phiR;   //!
  TBranch        *b_helic010_phiR;   //!
  TBranch        *b_helic020_phiR;   //!
  TBranch        *b_helic002_phiRst;   //!
  TBranch        *b_helic005_phiRst;   //!
  TBranch        *b_helic010_phiRst;   //!
  TBranch        *b_helic020_phiRst;   //!
  TBranch        *b_wUxS_phiR;   //!
  TBranch        *b_R;   //!
  TBranch        *b_KF;   //!
  TBranch        *b_Mx2;   //!
  TBranch        *b_xF;   //!
  TBranch        *b_xF0;   //!
  TBranch        *b_xF1;   //!
  TBranch        *b_plcm;   //!
  TBranch        *b_plcm0;   //!
  TBranch        *b_plcm1;   //!
  TBranch        *b_Eh;   //!
  TBranch        *b_xFm;   //!
  TBranch        *b_xFm0;   //!
  TBranch        *b_xFm1;   //!
  TBranch        *b_theta0;   //!
  TBranch        *b_theta1;   //!
  TBranch        *b_cos_theta_P0cm;   //!
  TBranch        *b_sin_theta_P0cm;   //!
  TBranch        *b_xFo;   //!
  TBranch        *b_xFo0;   //!
  TBranch        *b_xFo1;   //!
  TBranch        *b_phiH_phiR;   //!
  TBranch        *b_phiR_cov;   //!
  TBranch        *b_p0T2;   //!
  TBranch        *b_p1T2;   //!
  TBranch        *b_phipq;   //!
  TBranch        *b_phT2;   //!
  TBranch        *b_etaCM0;   //!
  TBranch        *b_etaCM1;   //!
  TBranch        *b_etaBF0p;   //!
  TBranch        *b_etaBF1p;   //!
  TBranch        *b_etaBF0m;   //!
  TBranch        *b_etaBF1m;   //!
  TBranch        *b_etaBF0;   //!
  TBranch        *b_etaBF1;   //!
  TBranch        *b_phiR_ha;   //!
  TBranch        *b_plcm0_r;   //!
  TBranch        *b_plcm1_r;   //!
  TBranch        *b_phiR_covH;   //!
  TBranch        *b_E0_phcm;   //!
  TBranch        *b_E1_phcm;   //!
  TBranch        *b_mix_npart;   //!
  TBranch        *b_mc_mix_npart;   //!
  TBranch        *b_det_;   //!
  TBranch        *b_det_fUniqueID;   //!
  TBranch        *b_det_fBits;   //!
  TBranch        *b_det_beta;   //!
  TBranch        *b_det_m2b;   //!
  TBranch        *b_det_vx;   //!
  TBranch        *b_det_vy;   //!
  TBranch        *b_det_vz;   //!
  TBranch        *b_det_dcx;   //!
  TBranch        *b_det_dcy;   //!
  TBranch        *b_det_dcz;   //!
  TBranch        *b_det_statPart;   //!
  TBranch        *b_det_dc_chi2;   //!
  TBranch        *b_det_dc_ndf;   //!
  TBranch        *b_det_pcal_lu;   //!
  TBranch        *b_det_pcal_lv;   //!
  TBranch        *b_det_pcal_lw;   //!
  TBranch        *b_pdata_;   //!
  TBranch        *b_pdata_fUniqueID;   //!
  TBranch        *b_pdata_fBits;   //!
  TBranch        *b_pdata_e;   //!
  TBranch        *b_pdata_px;   //!
  TBranch        *b_pdata_py;   //!
  TBranch        *b_pdata_pz;   //!
  TBranch        *b_pdata_helic002_phiH;   //!
  TBranch        *b_pdata_helic005_phiH;   //!
  TBranch        *b_pdata_helic010_phiH;   //!
  TBranch        *b_pdata_helic020_phiH;   //!
  TBranch        *b_pdata_phiHs;   //!
  TBranch        *b_mc_pdata_;   //!
  TBranch        *b_mc_pdata_fUniqueID;   //!
  TBranch        *b_mc_pdata_fBits;   //!
  TBranch        *b_mc_pdata_e;   //!
  TBranch        *b_mc_pdata_px;   //!
  TBranch        *b_mc_pdata_py;   //!
  TBranch        *b_mc_pdata_pz;   //!
  TBranch        *b_mc_pdata_helic002_phiH;   //!
  TBranch        *b_mc_pdata_helic005_phiH;   //!
  TBranch        *b_mc_pdata_helic010_phiH;   //!
  TBranch        *b_mc_pdata_helic020_phiH;   //!
  TBranch        *b_mc_pdata_phiHs;   //!
  TBranch        *b_mc_pdata_mpid;   //!
  TBranch        *b_mc_npart;   //!
  TBranch        *b_mc_M;   //!
  TBranch        *b_mc_Phx;   //!
  TBranch        *b_mc_Phy;   //!
  TBranch        *b_mc_Phz;   //!
  TBranch        *b_mc_Z;   //!
  TBranch        *b_mc_Cospq;   //!
  TBranch        *b_mc_Pt2;   //!
  TBranch        *b_mc_Event;   //!
  TBranch        *b_mc_M2_01;   //!
  TBranch        *b_mc_M2_02;   //!
  TBranch        *b_mc_phiH;   //!
  TBranch        *b_mc_phiR;   //!
  TBranch        *b_mc_helic002_phiR;   //!
  TBranch        *b_mc_helic005_phiR;   //!
  TBranch        *b_mc_helic010_phiR;   //!
  TBranch        *b_mc_helic020_phiR;   //!
  TBranch        *b_mc_helic002_phiRst;   //!
  TBranch        *b_mc_helic005_phiRst;   //!
  TBranch        *b_mc_helic010_phiRst;   //!
  TBranch        *b_mc_helic020_phiRst;   //!
  TBranch        *b_mc_wUxS_phiR;   //!
  TBranch        *b_mc_Mx2;   //!
  TBranch        *b_mc_xF;   //!
  TBranch        *b_mc_xF0;   //!
  TBranch        *b_mc_xF1;   //!
  TBranch        *b_mc_plcm;   //!
  TBranch        *b_mc_plcm0;   //!
  TBranch        *b_mc_plcm1;   //!
  TBranch        *b_mc_Eh;   //!
  TBranch        *b_mc_xFm;   //!
  TBranch        *b_mc_xFm0;   //!
  TBranch        *b_mc_xFm1;   //!
  TBranch        *b_mc_theta0;   //!
  TBranch        *b_mc_theta1;   //!
  TBranch        *b_mc_cos_theta_P0cm;   //!
  TBranch        *b_mc_sin_theta_P0cm;   //!
  TBranch        *b_mc_xFo;   //!
  TBranch        *b_mc_xFo0;   //!
  TBranch        *b_mc_xFo1;   //!
  TBranch        *b_mc_phiH_phiR;   //!
  TBranch        *b_mc_phiR_cov;   //!
  TBranch        *b_mc_p0T2;   //!
  TBranch        *b_mc_p1T2;   //!
  TBranch        *b_mc_phipq;   //!
  TBranch        *b_mc_phT2;   //!
  TBranch        *b_mc_etaCM0;   //!
  TBranch        *b_mc_etaCM1;   //!
  TBranch        *b_mc_etaBF0p;   //!
  TBranch        *b_mc_etaBF1p;   //!
  TBranch        *b_mc_etaBF0m;   //!
  TBranch        *b_mc_etaBF1m;   //!
  TBranch        *b_mc_etaBF0;   //!
  TBranch        *b_mc_etaBF1;   //!
  TBranch        *b_mc_phiR_ha;   //!
  TBranch        *b_mc_plcm0_r;   //!
  TBranch        *b_mc_plcm1_r;   //!
  TBranch        *b_mc_phiR_covH;   //!
  TBranch        *b_mc_E0_phcm;   //!
  TBranch        *b_mc_E1_phcm;   //!
  TBranch        *b_mc_R;   //!
  TBranch        *b_mc_KF;   //!
  TBranch        *b_Q2;   //!
  TBranch        *b_W;   //!
  TBranch        *b_Nu;   //!
  TBranch        *b_Xb;   //!
  TBranch        *b_vxec;   //!
  TBranch        *b_vyec;   //!
  TBranch        *b_vzec;   //!
  TBranch        *b_vxe;   //!
  TBranch        *b_vye;   //!
  TBranch        *b_vze;   //!
  TBranch        *b_Pex;   //!
  TBranch        *b_Pey;   //!
  TBranch        *b_Pez;   //!
  TBranch        *b_event;   //!
  TBranch        *b_Pe;   //!
  TBranch        *b_Ee;   //!
  TBranch        *b_e_Ein;   //!
  TBranch        *b_e_Eout;   //!
  TBranch        *b_e_Epcal;   //!
  TBranch        *b_e_npheltcc;   //!
  TBranch        *b_e_nphehtcc;   //!
  TBranch        *b_helic;   //!
  TBranch        *b_e_chi2pid;   //!
  TBranch        *b_e_pcal_lu;   //!
  TBranch        *b_e_pcal_lv;   //!
  TBranch        *b_e_pcal_lw;   //!
  TBranch        *b_e_ecin_lu;   //!
  TBranch        *b_e_ecin_lv;   //!
  TBranch        *b_e_ecin_lw;   //!
  TBranch        *b_e_ecout_lu;   //!
  TBranch        *b_e_ecout_lv;   //!
  TBranch        *b_e_ecout_lw;   //!
  TBranch        *b_e_pcal_hx;   //!
  TBranch        *b_e_pcal_hy;   //!
  TBranch        *b_e_pcal_hz;   //!
  TBranch        *b_e_ecin_hx;   //!
  TBranch        *b_e_ecin_hy;   //!
  TBranch        *b_e_ecin_hz;   //!
  TBranch        *b_e_ecout_hx;   //!
  TBranch        *b_e_ecout_hy;   //!
  TBranch        *b_e_ecout_hz;   //!
  TBranch        *b_e_trajx_sl0;   //!
  TBranch        *b_e_trajx_sl1;   //!
  TBranch        *b_e_trajx_sl2;   //!
  TBranch        *b_e_trajx_sl3;   //!
  TBranch        *b_e_trajx_sl4;   //!
  TBranch        *b_e_trajx_sl5;   //!
  TBranch        *b_e_trajy_sl0;   //!
  TBranch        *b_e_trajy_sl1;   //!
  TBranch        *b_e_trajy_sl2;   //!
  TBranch        *b_e_trajy_sl3;   //!
  TBranch        *b_e_trajy_sl4;   //!
  TBranch        *b_e_trajy_sl5;   //!
  TBranch        *b_e_trajz_sl0;   //!
  TBranch        *b_e_trajz_sl1;   //!
  TBranch        *b_e_trajz_sl2;   //!
  TBranch        *b_e_trajz_sl3;   //!
  TBranch        *b_e_trajz_sl4;   //!
  TBranch        *b_e_trajz_sl5;   //!
  TBranch        *b_e_pathtof;   //!
  TBranch        *b_e_timetof;   //!
  TBranch        *b_e_sector_tof;   //!
  TBranch        *b_e_Beta;   //!
  TBranch        *b_STTime;   //!
  TBranch        *b_RFTime;   //!
  TBranch        *b_e_dcx_rot_0;   //!
  TBranch        *b_e_dcy_rot_0;   //!
  TBranch        *b_e_dcx_rot_1;   //!
  TBranch        *b_e_dcy_rot_1;   //!
  TBranch        *b_e_dcx_rot_2;   //!
  TBranch        *b_e_dcy_rot_2;   //!
  TBranch        *b_e_sector_ltcc;   //!
  TBranch        *b_e_sector_htcc;   //!
  TBranch        *b_e_sector_ecal;   //!
  TBranch        *b_revent;   //!
  TBranch        *b_e_dc_chi2;   //!
  TBranch        *b_e_ftof1ax;   //!
  TBranch        *b_e_ftof1ay;   //!
  TBranch        *b_e_ftof1az;   //!
  TBranch        *b_e_pcalx;   //!
  TBranch        *b_e_pcaly;   //!
  TBranch        *b_e_pcalz;   //!
  TBranch        *b_e_ecalx;   //!
  TBranch        *b_e_ecaly;   //!
  TBranch        *b_e_ecalz;   //!
  TBranch        *b_e_ltccx;   //!
  TBranch        *b_e_ltccy;   //!
  TBranch        *b_e_ltccz;   //!
  TBranch        *b_e_htccx;   //!
  TBranch        *b_e_htccy;   //!
  TBranch        *b_e_htccz;   //!
  TBranch        *b_e_ftof1bx;   //!
  TBranch        *b_e_ftof1by;   //!
  TBranch        *b_e_ftof1bz;   //!
  TBranch        *b_e_ftof2x;   //!
  TBranch        *b_e_ftof2y;   //!
  TBranch        *b_e_ftof2z;   //!
  TBranch        *b_helonline_hel;   //!
  TBranch        *b_helonline_helRaw;   //!
  TBranch        *b_helflip_hel;   //!
  TBranch        *b_helflip_helRaw;   //!
  TBranch        *b_helflip_event;   //!
  TBranch        *b_e_dc_status;   //!
  TBranch        *b_e_dc_ndf;   //!
  TBranch        *b_e_sector_dc;   //!
  TBranch        *b_e_statPart;   //!
  TBranch        *b_e_DCPx;   //!
  TBranch        *b_e_DCPy;   //!
  TBranch        *b_e_DCPz;   //!
  TBranch        *b_y;   //!
  TBranch        *b_th_e;   //!
  TBranch        *b_phi_e;   //!
  TBranch        *b_helicRaw;   //!
  TBranch        *b_fA;   //!
  TBranch        *b_fB;   //!
  TBranch        *b_fC;   //!
  TBranch        *b_fV;   //!
  TBranch        *b_fW;   //!
  TBranch        *b_mc_Q2;   //!
  TBranch        *b_mc_W;   //!
  TBranch        *b_mc_Nu;   //!
  TBranch        *b_mc_Xb;   //!
  TBranch        *b_mc_vxe;   //!
  TBranch        *b_mc_vye;   //!
  TBranch        *b_mc_vze;   //!
  TBranch        *b_mc_Pex;   //!
  TBranch        *b_mc_Pey;   //!
  TBranch        *b_mc_Pez;   //!
  TBranch        *b_mc_event;   //!
  TBranch        *b_e_mcmass;   //!
  TBranch        *b_mc_Pe;   //!
  TBranch        *b_mc_Ee;   //!
  TBranch        *b_mc_revent;   //!
  TBranch        *b_mc_y;   //!
  TBranch        *b_mc_th_e;   //!
  TBranch        *b_mc_phi_e;   //!
  TBranch        *b_mc_e_Beta;   //!
  TBranch        *b_mc_helic;   //!
  TBranch        *b_mc_fA;   //!
  TBranch        *b_mc_fB;   //!
  TBranch        *b_mc_fC;   //!
  TBranch        *b_mc_fV;   //!
  TBranch        *b_mc_fW;   //!

  pionRes_cls(TString infile = "", TString binfo = "binning_info.txt",TString opt = "");
  virtual ~pionRes_cls();
  virtual Int_t   Cut(Long64_t entry);
  virtual Bool_t  DIS(Bool_t onMC = kFALSE);
  virtual Bool_t  ePID();
  virtual Bool_t  eFID_ec();
  virtual Bool_t  eFID_dc();
  virtual Bool_t  piFID_ec(int k = 0);
  virtual Bool_t  pipFID_dc(int k = 0);
  virtual Bool_t  pimFID_dc(int k = 0);
  virtual Bool_t  FWD(int k = 0);
  virtual Bool_t  ExclCut(int k = 0);
  virtual Bool_t  MpiCut(int k = 0, int pid = 211);
  virtual Bool_t  MCMother(int k = 0, int pid = 0);
  virtual Bool_t  MMCut(int k = 0, Bool_t onMC = kFALSE);
  virtual Bool_t  rhoCut(int k = 0, Bool_t onMC = kFALSE);
  virtual Bool_t  CF(int k = 0, Bool_t onMC = kFALSE);
  virtual Bool_t  DZCut(int k = 0, Bool_t onMC = kFALSE);
  virtual Float_t GetDZ(int k = 0, Bool_t onMC = kFALSE);
  virtual Bool_t  minEnergy(int k = 0, Bool_t onMC = kFALSE);
  virtual Bool_t  pi0PID(int k = 0, Bool_t onMC = kFALSE);
  virtual Int_t   GetEntry(Long64_t entry);
  virtual Float_t getxF(Float_t E, Float_t Px, Float_t Py, Float_t Pz, Bool_t onMC = kFALSE);
  virtual Double_t get_phiH1(int k, Bool_t onMC = kFALSE);
  virtual Double_t get_phiR(int k, Bool_t onMC = kFALSE);
  virtual Int_t   fillHist(TString hname, Float_t value = -111111);
  virtual Int_t   fillProf(TString pname, Float_t x, Float_t value = -111111);
  virtual Int_t   fillMpi0Hist(TString hname, Int_t k=0, Bool_t onMC = kFALSE);
  virtual Int_t   fitMpi0Hist(TString hname);
  virtual Int_t   fillHist2D(TString hname, Float_t x, Float_t y);
  virtual Int_t   configHisto(TH1D *h, TString xtitle, TString ytitle,Color_t c = kBlack, EMarkerStyle ms = kFullDotLarge);
  virtual Int_t   LoadElecFIDPar();
  virtual Int_t   setStyle();
  virtual Int_t   initKinHistos();
  virtual Int_t   fillEvHistos(Bool_t onMC = kFALSE);
  virtual Int_t   fillPartHistos(int k = 0, Bool_t onMC = kFALSE);
  virtual Long64_t LoadTree(Long64_t entry);
  virtual void    Init(TChain *tree, TString binfo);
  virtual void    Loop();
  virtual Bool_t  Notify();
  virtual void    Show(Long64_t entry = -1);
};

#endif

#ifdef pionRes_cls_cxx
pionRes_cls::pionRes_cls(TString infile, TString binfo, TString opt) : fChain(0) 
{
  options = opt;
  QUIET=kFALSE;
  if (opt.Contains("quiet")) QUIET=kTRUE;

  TChain *tch = new TChain();
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  TFile *f;
  if (infile == "") {
    tch->Add("../filtering/outfiles/pippim_sim_ga_1.root/outdata");
  }
  else {
    tch->Add(infile + "/outdata");
  }
  bm = new TBenchmark();
  bm->Start("main");
  setStyle();
  LoadElecFIDPar();

  Init(tch,binfo);
}

pionRes_cls::~pionRes_cls()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t pionRes_cls::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t pionRes_cls::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
    Notify();
    for (auto& x: brv){
      x.second->UpdateFormulaLeaves();
    }
    for (auto& x: brv_mc){
      x.second->UpdateFormulaLeaves();
    }
    //brv_H->UpdateFormulaLeaves();
    //brv_H_mc->UpdateFormulaLeaves();
  }
  return centry;
}

void pionRes_cls::Init(TChain *tree,TString binfo)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);


  fChain->SetBranchAddress("npart", &npart, &b_npart);
  fChain->SetBranchAddress("M", M, &b_M);
  fChain->SetBranchAddress("Phx", Phx, &b_Phx);
  fChain->SetBranchAddress("Phy", Phy, &b_Phy);
  fChain->SetBranchAddress("Phz", Phz, &b_Phz);
  fChain->SetBranchAddress("Z", Z, &b_Z);
  fChain->SetBranchAddress("Cospq", Cospq, &b_Cospq);
  fChain->SetBranchAddress("Pt2", Pt2, &b_Pt2);
  fChain->SetBranchAddress("Event", Event, &b_Event);
  fChain->SetBranchAddress("M2_01", M2_01, &b_M2_01);
  fChain->SetBranchAddress("M2_02", M2_02, &b_M2_02);
  fChain->SetBranchAddress("phiH", phiH, &b_phiH);
  fChain->SetBranchAddress("phiR", phiR, &b_phiR);
  fChain->SetBranchAddress("helic002_phiR", helic002_phiR, &b_helic002_phiR);
  fChain->SetBranchAddress("helic005_phiR", helic005_phiR, &b_helic005_phiR);
  fChain->SetBranchAddress("helic010_phiR", helic010_phiR, &b_helic010_phiR);
  fChain->SetBranchAddress("helic020_phiR", helic020_phiR, &b_helic020_phiR);
  fChain->SetBranchAddress("helic002_phiRst", helic002_phiRst, &b_helic002_phiRst);
  fChain->SetBranchAddress("helic005_phiRst", helic005_phiRst, &b_helic005_phiRst);
  fChain->SetBranchAddress("helic010_phiRst", helic010_phiRst, &b_helic010_phiRst);
  fChain->SetBranchAddress("helic020_phiRst", helic020_phiRst, &b_helic020_phiRst);
  fChain->SetBranchAddress("wUxS_phiR", wUxS_phiR, &b_wUxS_phiR);
  fChain->SetBranchAddress("R", R, &b_R);
  fChain->SetBranchAddress("KF", KF, &b_KF);
  fChain->SetBranchAddress("Mx2", Mx2, &b_Mx2);
  fChain->SetBranchAddress("xF", xF, &b_xF);
  fChain->SetBranchAddress("xF0", xF0, &b_xF0);
  fChain->SetBranchAddress("xF1", xF1, &b_xF1);
  fChain->SetBranchAddress("plcm", plcm, &b_plcm);
  fChain->SetBranchAddress("plcm0", plcm0, &b_plcm0);
  fChain->SetBranchAddress("plcm1", plcm1, &b_plcm1);
  fChain->SetBranchAddress("Eh", Eh, &b_Eh);
  fChain->SetBranchAddress("xFm", xFm, &b_xFm);
  fChain->SetBranchAddress("xFm0", xFm0, &b_xFm0);
  fChain->SetBranchAddress("xFm1", xFm1, &b_xFm1);
  fChain->SetBranchAddress("theta0", theta0, &b_theta0);
  fChain->SetBranchAddress("theta1", theta1, &b_theta1);
  fChain->SetBranchAddress("cos_theta_P0cm", cos_theta_P0cm, &b_cos_theta_P0cm);
  fChain->SetBranchAddress("sin_theta_P0cm", sin_theta_P0cm, &b_sin_theta_P0cm);
  fChain->SetBranchAddress("xFo", xFo, &b_xFo);
  fChain->SetBranchAddress("xFo0", xFo0, &b_xFo0);
  fChain->SetBranchAddress("xFo1", xFo1, &b_xFo1);
  fChain->SetBranchAddress("phiH_phiR", phiH_phiR, &b_phiH_phiR);
  fChain->SetBranchAddress("phiR_cov", phiR_cov, &b_phiR_cov);
  fChain->SetBranchAddress("p0T2", p0T2, &b_p0T2);
  fChain->SetBranchAddress("p1T2", p1T2, &b_p1T2);
  fChain->SetBranchAddress("phipq", phipq, &b_phipq);
  fChain->SetBranchAddress("phT2", phT2, &b_phT2);
  fChain->SetBranchAddress("etaCM0", etaCM0, &b_etaCM0);
  fChain->SetBranchAddress("etaCM1", etaCM1, &b_etaCM1);
  fChain->SetBranchAddress("etaBF0p", etaBF0p, &b_etaBF0p);
  fChain->SetBranchAddress("etaBF1p", etaBF1p, &b_etaBF1p);
  fChain->SetBranchAddress("etaBF0m", etaBF0m, &b_etaBF0m);
  fChain->SetBranchAddress("etaBF1m", etaBF1m, &b_etaBF1m);
  fChain->SetBranchAddress("etaBF0", etaBF0, &b_etaBF0);
  fChain->SetBranchAddress("etaBF1", etaBF1, &b_etaBF1);
  fChain->SetBranchAddress("phiR_ha", phiR_ha, &b_phiR_ha);
  fChain->SetBranchAddress("plcm0_r", plcm0_r, &b_plcm0_r);
  fChain->SetBranchAddress("plcm1_r", plcm1_r, &b_plcm1_r);
  fChain->SetBranchAddress("phiR_covH", phiR_covH, &b_phiR_covH);
  fChain->SetBranchAddress("E0_phcm", E0_phcm, &b_E0_phcm);
  fChain->SetBranchAddress("E1_phcm", E1_phcm, &b_E1_phcm);
  fChain->SetBranchAddress("mix_npart", &mix_npart, &b_mix_npart);
  fChain->SetBranchAddress("mc_mix_npart", &mc_mix_npart, &b_mc_mix_npart);
  fChain->SetBranchAddress("det", &det_, &b_det_);
  fChain->SetBranchAddress("det.fUniqueID", det_fUniqueID, &b_det_fUniqueID);
  fChain->SetBranchAddress("det.fBits", det_fBits, &b_det_fBits);
  fChain->SetBranchAddress("det.beta[8]", det_beta, &b_det_beta);
  fChain->SetBranchAddress("det.m2b[8]", det_m2b, &b_det_m2b);
  fChain->SetBranchAddress("det.vx[8]", det_vx, &b_det_vx);
  fChain->SetBranchAddress("det.vy[8]", det_vy, &b_det_vy);
  fChain->SetBranchAddress("det.vz[8]", det_vz, &b_det_vz);
  fChain->SetBranchAddress("det.dcx[8]", det_dcx, &b_det_dcx);
  fChain->SetBranchAddress("det.dcy[8]", det_dcy, &b_det_dcy);
  fChain->SetBranchAddress("det.dcz[8]", det_dcz, &b_det_dcz);
  fChain->SetBranchAddress("det.statPart[8]", det_statPart, &b_det_statPart);
  fChain->SetBranchAddress("det.dc_chi2[8]", det_dc_chi2, &b_det_dc_chi2);
  fChain->SetBranchAddress("det.dc_ndf[8]", det_dc_ndf, &b_det_dc_ndf);
  fChain->SetBranchAddress("det.pcal_lu[8]", det_pcal_lu, &b_det_pcal_lu);
  fChain->SetBranchAddress("det.pcal_lv[8]", det_pcal_lv, &b_det_pcal_lv);
  fChain->SetBranchAddress("det.pcal_lw[8]", det_pcal_lw, &b_det_pcal_lw);
  fChain->SetBranchAddress("pdata", &pdata_, &b_pdata_);
  fChain->SetBranchAddress("pdata.fUniqueID", pdata_fUniqueID, &b_pdata_fUniqueID);
  fChain->SetBranchAddress("pdata.fBits", pdata_fBits, &b_pdata_fBits);
  fChain->SetBranchAddress("pdata.e[8]", pdata_e, &b_pdata_e);
  fChain->SetBranchAddress("pdata.px[8]", pdata_px, &b_pdata_px);
  fChain->SetBranchAddress("pdata.py[8]", pdata_py, &b_pdata_py);
  fChain->SetBranchAddress("pdata.pz[8]", pdata_pz, &b_pdata_pz);
  fChain->SetBranchAddress("pdata.helic002_phiH[8]", pdata_helic002_phiH, &b_pdata_helic002_phiH);
  fChain->SetBranchAddress("pdata.helic005_phiH[8]", pdata_helic005_phiH, &b_pdata_helic005_phiH);
  fChain->SetBranchAddress("pdata.helic010_phiH[8]", pdata_helic010_phiH, &b_pdata_helic010_phiH);
  fChain->SetBranchAddress("pdata.helic020_phiH[8]", pdata_helic020_phiH, &b_pdata_helic020_phiH);
  fChain->SetBranchAddress("pdata.phiHs[8]", pdata_phiHs, &b_pdata_phiHs);
  fChain->SetBranchAddress("mc_pdata", &mc_pdata_, &b_mc_pdata_);
  fChain->SetBranchAddress("mc_pdata.fUniqueID", mc_pdata_fUniqueID, &b_mc_pdata_fUniqueID);
  fChain->SetBranchAddress("mc_pdata.fBits", mc_pdata_fBits, &b_mc_pdata_fBits);
  fChain->SetBranchAddress("mc_pdata.e[8]", mc_pdata_e, &b_mc_pdata_e);
  fChain->SetBranchAddress("mc_pdata.px[8]", mc_pdata_px, &b_mc_pdata_px);
  fChain->SetBranchAddress("mc_pdata.py[8]", mc_pdata_py, &b_mc_pdata_py);
  fChain->SetBranchAddress("mc_pdata.pz[8]", mc_pdata_pz, &b_mc_pdata_pz);
  fChain->SetBranchAddress("mc_pdata.helic002_phiH[8]", mc_pdata_helic002_phiH, &b_mc_pdata_helic002_phiH);
  fChain->SetBranchAddress("mc_pdata.helic005_phiH[8]", mc_pdata_helic005_phiH, &b_mc_pdata_helic005_phiH);
  fChain->SetBranchAddress("mc_pdata.helic010_phiH[8]", mc_pdata_helic010_phiH, &b_mc_pdata_helic010_phiH);
  fChain->SetBranchAddress("mc_pdata.helic020_phiH[8]", mc_pdata_helic020_phiH, &b_mc_pdata_helic020_phiH);
  fChain->SetBranchAddress("mc_pdata.phiHs[8]", mc_pdata_phiHs, &b_mc_pdata_phiHs);
  fChain->SetBranchAddress("mc_pdata.mpid[8]", mc_pdata_mpid, &b_mc_pdata_mpid);
  fChain->SetBranchAddress("mc_npart", &mc_npart, &b_mc_npart);
  fChain->SetBranchAddress("mc_M", mc_M, &b_mc_M);
  fChain->SetBranchAddress("mc_Phx", mc_Phx, &b_mc_Phx);
  fChain->SetBranchAddress("mc_Phy", mc_Phy, &b_mc_Phy);
  fChain->SetBranchAddress("mc_Phz", mc_Phz, &b_mc_Phz);
  fChain->SetBranchAddress("mc_Z", mc_Z, &b_mc_Z);
  fChain->SetBranchAddress("mc_Cospq", mc_Cospq, &b_mc_Cospq);
  fChain->SetBranchAddress("mc_Pt2", mc_Pt2, &b_mc_Pt2);
  fChain->SetBranchAddress("mc_Event", mc_Event, &b_mc_Event);
  fChain->SetBranchAddress("mc_M2_01", mc_M2_01, &b_mc_M2_01);
  fChain->SetBranchAddress("mc_M2_02", mc_M2_02, &b_mc_M2_02);
  fChain->SetBranchAddress("mc_phiH", mc_phiH, &b_mc_phiH);
  fChain->SetBranchAddress("mc_phiR", mc_phiR, &b_mc_phiR);
  fChain->SetBranchAddress("mc_helic002_phiR", mc_helic002_phiR, &b_mc_helic002_phiR);
  fChain->SetBranchAddress("mc_helic005_phiR", mc_helic005_phiR, &b_mc_helic005_phiR);
  fChain->SetBranchAddress("mc_helic010_phiR", mc_helic010_phiR, &b_mc_helic010_phiR);
  fChain->SetBranchAddress("mc_helic020_phiR", mc_helic020_phiR, &b_mc_helic020_phiR);
  fChain->SetBranchAddress("mc_helic002_phiRst", mc_helic002_phiRst, &b_mc_helic002_phiRst);
  fChain->SetBranchAddress("mc_helic005_phiRst", mc_helic005_phiRst, &b_mc_helic005_phiRst);
  fChain->SetBranchAddress("mc_helic010_phiRst", mc_helic010_phiRst, &b_mc_helic010_phiRst);
  fChain->SetBranchAddress("mc_helic020_phiRst", mc_helic020_phiRst, &b_mc_helic020_phiRst);
  fChain->SetBranchAddress("mc_wUxS_phiR", mc_wUxS_phiR, &b_mc_wUxS_phiR);
  fChain->SetBranchAddress("mc_Mx2", mc_Mx2, &b_mc_Mx2);
  fChain->SetBranchAddress("mc_xF", mc_xF, &b_mc_xF);
  fChain->SetBranchAddress("mc_xF0", mc_xF0, &b_mc_xF0);
  fChain->SetBranchAddress("mc_xF1", mc_xF1, &b_mc_xF1);
  fChain->SetBranchAddress("mc_plcm", mc_plcm, &b_mc_plcm);
  fChain->SetBranchAddress("mc_plcm0", mc_plcm0, &b_mc_plcm0);
  fChain->SetBranchAddress("mc_plcm1", mc_plcm1, &b_mc_plcm1);
  fChain->SetBranchAddress("mc_Eh", mc_Eh, &b_mc_Eh);
  fChain->SetBranchAddress("mc_xFm", mc_xFm, &b_mc_xFm);
  fChain->SetBranchAddress("mc_xFm0", mc_xFm0, &b_mc_xFm0);
  fChain->SetBranchAddress("mc_xFm1", mc_xFm1, &b_mc_xFm1);
  fChain->SetBranchAddress("mc_theta0", mc_theta0, &b_mc_theta0);
  fChain->SetBranchAddress("mc_theta1", mc_theta1, &b_mc_theta1);
  fChain->SetBranchAddress("mc_cos_theta_P0cm", mc_cos_theta_P0cm, &b_mc_cos_theta_P0cm);
  fChain->SetBranchAddress("mc_sin_theta_P0cm", mc_sin_theta_P0cm, &b_mc_sin_theta_P0cm);
  fChain->SetBranchAddress("mc_xFo", mc_xFo, &b_mc_xFo);
  fChain->SetBranchAddress("mc_xFo0", mc_xFo0, &b_mc_xFo0);
  fChain->SetBranchAddress("mc_xFo1", mc_xFo1, &b_mc_xFo1);
  fChain->SetBranchAddress("mc_phiH_phiR", mc_phiH_phiR, &b_mc_phiH_phiR);
  fChain->SetBranchAddress("mc_phiR_cov", mc_phiR_cov, &b_mc_phiR_cov);
  fChain->SetBranchAddress("mc_p0T2", mc_p0T2, &b_mc_p0T2);
  fChain->SetBranchAddress("mc_p1T2", mc_p1T2, &b_mc_p1T2);
  fChain->SetBranchAddress("mc_phipq", mc_phipq, &b_mc_phipq);
  fChain->SetBranchAddress("mc_phT2", mc_phT2, &b_mc_phT2);
  fChain->SetBranchAddress("mc_etaCM0", mc_etaCM0, &b_mc_etaCM0);
  fChain->SetBranchAddress("mc_etaCM1", mc_etaCM1, &b_mc_etaCM1);
  fChain->SetBranchAddress("mc_etaBF0p", mc_etaBF0p, &b_mc_etaBF0p);
  fChain->SetBranchAddress("mc_etaBF1p", mc_etaBF1p, &b_mc_etaBF1p);
  fChain->SetBranchAddress("mc_etaBF0m", mc_etaBF0m, &b_mc_etaBF0m);
  fChain->SetBranchAddress("mc_etaBF1m", mc_etaBF1m, &b_mc_etaBF1m);
  fChain->SetBranchAddress("mc_etaBF0", mc_etaBF0, &b_mc_etaBF0);
  fChain->SetBranchAddress("mc_etaBF1", mc_etaBF1, &b_mc_etaBF1);
  fChain->SetBranchAddress("mc_phiR_ha", mc_phiR_ha, &b_mc_phiR_ha);
  fChain->SetBranchAddress("mc_plcm0_r", mc_plcm0_r, &b_mc_plcm0_r);
  fChain->SetBranchAddress("mc_plcm1_r", mc_plcm1_r, &b_mc_plcm1_r);
  fChain->SetBranchAddress("mc_phiR_covH", mc_phiR_covH, &b_mc_phiR_covH);
  fChain->SetBranchAddress("mc_E0_phcm", mc_E0_phcm, &b_mc_E0_phcm);
  fChain->SetBranchAddress("mc_E1_phcm", mc_E1_phcm, &b_mc_E1_phcm);
  fChain->SetBranchAddress("mc_R", mc_R, &b_mc_R);
  fChain->SetBranchAddress("mc_KF", mc_KF, &b_mc_KF);
  fChain->SetBranchAddress("Q2", &Q2, &b_Q2);
  fChain->SetBranchAddress("W", &W, &b_W);
  fChain->SetBranchAddress("Nu", &Nu, &b_Nu);
  fChain->SetBranchAddress("Xb", &Xb, &b_Xb);
  fChain->SetBranchAddress("vxec", &vxec, &b_vxec);
  fChain->SetBranchAddress("vyec", &vyec, &b_vyec);
  fChain->SetBranchAddress("vzec", &vzec, &b_vzec);
  fChain->SetBranchAddress("vxe", &vxe, &b_vxe);
  fChain->SetBranchAddress("vye", &vye, &b_vye);
  fChain->SetBranchAddress("vze", &vze, &b_vze);
  fChain->SetBranchAddress("Pex", &Pex, &b_Pex);
  fChain->SetBranchAddress("Pey", &Pey, &b_Pey);
  fChain->SetBranchAddress("Pez", &Pez, &b_Pez);
  fChain->SetBranchAddress("event", &event, &b_event);
  fChain->SetBranchAddress("Pe", &Pe, &b_Pe);
  fChain->SetBranchAddress("Ee", &Ee, &b_Ee);
  fChain->SetBranchAddress("e_Ein", &e_Ein, &b_e_Ein);
  fChain->SetBranchAddress("e_Eout", &e_Eout, &b_e_Eout);
  fChain->SetBranchAddress("e_Epcal", &e_Epcal, &b_e_Epcal);
  fChain->SetBranchAddress("e_npheltcc", &e_npheltcc, &b_e_npheltcc);
  fChain->SetBranchAddress("e_nphehtcc", &e_nphehtcc, &b_e_nphehtcc);
  fChain->SetBranchAddress("helic", &helic, &b_helic);
  fChain->SetBranchAddress("e_chi2pid", &e_chi2pid, &b_e_chi2pid);
  fChain->SetBranchAddress("e_pcal_lu", &e_pcal_lu, &b_e_pcal_lu);
  fChain->SetBranchAddress("e_pcal_lv", &e_pcal_lv, &b_e_pcal_lv);
  fChain->SetBranchAddress("e_pcal_lw", &e_pcal_lw, &b_e_pcal_lw);
  fChain->SetBranchAddress("e_ecin_lu", &e_ecin_lu, &b_e_ecin_lu);
  fChain->SetBranchAddress("e_ecin_lv", &e_ecin_lv, &b_e_ecin_lv);
  fChain->SetBranchAddress("e_ecin_lw", &e_ecin_lw, &b_e_ecin_lw);
  fChain->SetBranchAddress("e_ecout_lu", &e_ecout_lu, &b_e_ecout_lu);
  fChain->SetBranchAddress("e_ecout_lv", &e_ecout_lv, &b_e_ecout_lv);
  fChain->SetBranchAddress("e_ecout_lw", &e_ecout_lw, &b_e_ecout_lw);
  fChain->SetBranchAddress("e_pcal_hx", &e_pcal_hx, &b_e_pcal_hx);
  fChain->SetBranchAddress("e_pcal_hy", &e_pcal_hy, &b_e_pcal_hy);
  fChain->SetBranchAddress("e_pcal_hz", &e_pcal_hz, &b_e_pcal_hz);
  fChain->SetBranchAddress("e_ecin_hx", &e_ecin_hx, &b_e_ecin_hx);
  fChain->SetBranchAddress("e_ecin_hy", &e_ecin_hy, &b_e_ecin_hy);
  fChain->SetBranchAddress("e_ecin_hz", &e_ecin_hz, &b_e_ecin_hz);
  fChain->SetBranchAddress("e_ecout_hx", &e_ecout_hx, &b_e_ecout_hx);
  fChain->SetBranchAddress("e_ecout_hy", &e_ecout_hy, &b_e_ecout_hy);
  fChain->SetBranchAddress("e_ecout_hz", &e_ecout_hz, &b_e_ecout_hz);
  fChain->SetBranchAddress("e_trajx_sl0", &e_trajx_sl0, &b_e_trajx_sl0);
  fChain->SetBranchAddress("e_trajx_sl1", &e_trajx_sl1, &b_e_trajx_sl1);
  fChain->SetBranchAddress("e_trajx_sl2", &e_trajx_sl2, &b_e_trajx_sl2);
  fChain->SetBranchAddress("e_trajx_sl3", &e_trajx_sl3, &b_e_trajx_sl3);
  fChain->SetBranchAddress("e_trajx_sl4", &e_trajx_sl4, &b_e_trajx_sl4);
  fChain->SetBranchAddress("e_trajx_sl5", &e_trajx_sl5, &b_e_trajx_sl5);
  fChain->SetBranchAddress("e_trajy_sl0", &e_trajy_sl0, &b_e_trajy_sl0);
  fChain->SetBranchAddress("e_trajy_sl1", &e_trajy_sl1, &b_e_trajy_sl1);
  fChain->SetBranchAddress("e_trajy_sl2", &e_trajy_sl2, &b_e_trajy_sl2);
  fChain->SetBranchAddress("e_trajy_sl3", &e_trajy_sl3, &b_e_trajy_sl3);
  fChain->SetBranchAddress("e_trajy_sl4", &e_trajy_sl4, &b_e_trajy_sl4);
  fChain->SetBranchAddress("e_trajy_sl5", &e_trajy_sl5, &b_e_trajy_sl5);
  fChain->SetBranchAddress("e_trajz_sl0", &e_trajz_sl0, &b_e_trajz_sl0);
  fChain->SetBranchAddress("e_trajz_sl1", &e_trajz_sl1, &b_e_trajz_sl1);
  fChain->SetBranchAddress("e_trajz_sl2", &e_trajz_sl2, &b_e_trajz_sl2);
  fChain->SetBranchAddress("e_trajz_sl3", &e_trajz_sl3, &b_e_trajz_sl3);
  fChain->SetBranchAddress("e_trajz_sl4", &e_trajz_sl4, &b_e_trajz_sl4);
  fChain->SetBranchAddress("e_trajz_sl5", &e_trajz_sl5, &b_e_trajz_sl5);
  fChain->SetBranchAddress("e_pathtof", &e_pathtof, &b_e_pathtof);
  fChain->SetBranchAddress("e_timetof", &e_timetof, &b_e_timetof);
  fChain->SetBranchAddress("e_sector_tof", &e_sector_tof, &b_e_sector_tof);
  fChain->SetBranchAddress("e_Beta", &e_Beta, &b_e_Beta);
  fChain->SetBranchAddress("STTime", &STTime, &b_STTime);
  fChain->SetBranchAddress("RFTime", &RFTime, &b_RFTime);
  fChain->SetBranchAddress("e_dcx_rot_0", &e_dcx_rot_0, &b_e_dcx_rot_0);
  fChain->SetBranchAddress("e_dcy_rot_0", &e_dcy_rot_0, &b_e_dcy_rot_0);
  fChain->SetBranchAddress("e_dcx_rot_1", &e_dcx_rot_1, &b_e_dcx_rot_1);
  fChain->SetBranchAddress("e_dcy_rot_1", &e_dcy_rot_1, &b_e_dcy_rot_1);
  fChain->SetBranchAddress("e_dcx_rot_2", &e_dcx_rot_2, &b_e_dcx_rot_2);
  fChain->SetBranchAddress("e_dcy_rot_2", &e_dcy_rot_2, &b_e_dcy_rot_2);
  fChain->SetBranchAddress("e_sector_ltcc", &e_sector_ltcc, &b_e_sector_ltcc);
  fChain->SetBranchAddress("e_sector_htcc", &e_sector_htcc, &b_e_sector_htcc);
  fChain->SetBranchAddress("e_sector_ecal", &e_sector_ecal, &b_e_sector_ecal);
  fChain->SetBranchAddress("revent", &revent, &b_revent);
  fChain->SetBranchAddress("e_dc_chi2", &e_dc_chi2, &b_e_dc_chi2);
  fChain->SetBranchAddress("e_ftof1ax", &e_ftof1ax, &b_e_ftof1ax);
  fChain->SetBranchAddress("e_ftof1ay", &e_ftof1ay, &b_e_ftof1ay);
  fChain->SetBranchAddress("e_ftof1az", &e_ftof1az, &b_e_ftof1az);
  fChain->SetBranchAddress("e_pcalx", &e_pcalx, &b_e_pcalx);
  fChain->SetBranchAddress("e_pcaly", &e_pcaly, &b_e_pcaly);
  fChain->SetBranchAddress("e_pcalz", &e_pcalz, &b_e_pcalz);
  fChain->SetBranchAddress("e_ecalx", &e_ecalx, &b_e_ecalx);
  fChain->SetBranchAddress("e_ecaly", &e_ecaly, &b_e_ecaly);
  fChain->SetBranchAddress("e_ecalz", &e_ecalz, &b_e_ecalz);
  fChain->SetBranchAddress("e_ltccx", &e_ltccx, &b_e_ltccx);
  fChain->SetBranchAddress("e_ltccy", &e_ltccy, &b_e_ltccy);
  fChain->SetBranchAddress("e_ltccz", &e_ltccz, &b_e_ltccz);
  fChain->SetBranchAddress("e_htccx", &e_htccx, &b_e_htccx);
  fChain->SetBranchAddress("e_htccy", &e_htccy, &b_e_htccy);
  fChain->SetBranchAddress("e_htccz", &e_htccz, &b_e_htccz);
  fChain->SetBranchAddress("e_ftof1bx", &e_ftof1bx, &b_e_ftof1bx);
  fChain->SetBranchAddress("e_ftof1by", &e_ftof1by, &b_e_ftof1by);
  fChain->SetBranchAddress("e_ftof1bz", &e_ftof1bz, &b_e_ftof1bz);
  fChain->SetBranchAddress("e_ftof2x", &e_ftof2x, &b_e_ftof2x);
  fChain->SetBranchAddress("e_ftof2y", &e_ftof2y, &b_e_ftof2y);
  fChain->SetBranchAddress("e_ftof2z", &e_ftof2z, &b_e_ftof2z);
  fChain->SetBranchAddress("helonline_hel", &helonline_hel, &b_helonline_hel);
  fChain->SetBranchAddress("helonline_helRaw", &helonline_helRaw, &b_helonline_helRaw);
  fChain->SetBranchAddress("helflip_hel", &helflip_hel, &b_helflip_hel);
  fChain->SetBranchAddress("helflip_helRaw", &helflip_helRaw, &b_helflip_helRaw);
  fChain->SetBranchAddress("helflip_event", &helflip_event, &b_helflip_event);
  fChain->SetBranchAddress("e_dc_status", &e_dc_status, &b_e_dc_status);
  fChain->SetBranchAddress("e_dc_ndf", &e_dc_ndf, &b_e_dc_ndf);
  fChain->SetBranchAddress("e_sector_dc", &e_sector_dc, &b_e_sector_dc);
  fChain->SetBranchAddress("e_statPart", &e_statPart, &b_e_statPart);
  fChain->SetBranchAddress("e_DCPx", &e_DCPx, &b_e_DCPx);
  fChain->SetBranchAddress("e_DCPy", &e_DCPy, &b_e_DCPy);
  fChain->SetBranchAddress("e_DCPz", &e_DCPz, &b_e_DCPz);
  fChain->SetBranchAddress("y", &y, &b_y);
  fChain->SetBranchAddress("th_e", &th_e, &b_th_e);
  fChain->SetBranchAddress("phi_e", &phi_e, &b_phi_e);
  fChain->SetBranchAddress("helicRaw", &helicRaw, &b_helicRaw);
  fChain->SetBranchAddress("fA", &fA, &b_fA);
  fChain->SetBranchAddress("fB", &fB, &b_fB);
  fChain->SetBranchAddress("fC", &fC, &b_fC);
  fChain->SetBranchAddress("fV", &fV, &b_fV);
  fChain->SetBranchAddress("fW", &fW, &b_fW);
  fChain->SetBranchAddress("mc_Q2", &mc_Q2, &b_mc_Q2);
  fChain->SetBranchAddress("mc_W", &mc_W, &b_mc_W);
  fChain->SetBranchAddress("mc_Nu", &mc_Nu, &b_mc_Nu);
  fChain->SetBranchAddress("mc_Xb", &mc_Xb, &b_mc_Xb);
  fChain->SetBranchAddress("mc_vxe", &mc_vxe, &b_mc_vxe);
  fChain->SetBranchAddress("mc_vye", &mc_vye, &b_mc_vye);
  fChain->SetBranchAddress("mc_vze", &mc_vze, &b_mc_vze);
  fChain->SetBranchAddress("mc_Pex", &mc_Pex, &b_mc_Pex);
  fChain->SetBranchAddress("mc_Pey", &mc_Pey, &b_mc_Pey);
  fChain->SetBranchAddress("mc_Pez", &mc_Pez, &b_mc_Pez);
  fChain->SetBranchAddress("mc_event", &mc_event, &b_mc_event);
  fChain->SetBranchAddress("e_mcmass", &e_mcmass, &b_e_mcmass);
  fChain->SetBranchAddress("mc_Pe", &mc_Pe, &b_mc_Pe);
  fChain->SetBranchAddress("mc_Ee", &mc_Ee, &b_mc_Ee);
  fChain->SetBranchAddress("mc_revent", &mc_revent, &b_mc_revent);
  fChain->SetBranchAddress("mc_y", &mc_y, &b_mc_y);
  fChain->SetBranchAddress("mc_th_e", &mc_th_e, &b_mc_th_e);
  fChain->SetBranchAddress("mc_phi_e", &mc_phi_e, &b_mc_phi_e);
  fChain->SetBranchAddress("mc_e_Beta", &mc_e_Beta, &b_mc_e_Beta);
  fChain->SetBranchAddress("mc_helic", &mc_helic, &b_mc_helic);
  fChain->SetBranchAddress("mc_fA", &mc_fA, &b_mc_fA);
  fChain->SetBranchAddress("mc_fB", &mc_fB, &b_mc_fB);
  fChain->SetBranchAddress("mc_fC", &mc_fC, &b_mc_fC);
  fChain->SetBranchAddress("mc_fV", &mc_fV, &b_mc_fV);
  fChain->SetBranchAddress("mc_fW", &mc_fW, &b_mc_fW);

  OUTDIR = "";
  SUFF = "";

  if (options.Contains("suff:")){
    Int_t ind = options.Index("suff:");
    options.Tokenize(SUFF,ind);
    SUFF = SUFF.ReplaceAll("suff:","").Strip();
  }

  //// end setting address ///
  //// selecting helicity variable. ///
  if (options.Contains("rgb"))
    helicity = &helonline_hel;
  else if (options.Contains("sim"))
    helicity = &helic010_phiR[0];
  else
    helicity = &helic;
  
  if (options.Contains("pi0"))
    OUTDIR += "pi0"; 
 
  /////////// end setting helicity variable. ////
  ///// Setting bins and output dir ////
  
  std::ifstream bf(binfo);
  TString line;
  char cln[600];
  std::cout<<"#### Entries to be processed "<<  fChain->GetEntries()<<" ###"<<std::endl;
  std::cout<<"#### binning configuration ####"<<std::endl;
  fChain->LoadTree(0);
  while (bf.getline(cln,600)){
    line = cln;
    line.ReplaceAll("\t"," ");
    line = line.Strip();
    if ( line[0]=='#' || line.Length() == 0) continue;
    TString tok="";
    Ssiz_t from=0;
    line.Tokenize(tok,from);
    TString bn = tok;
    line.Tokenize(tok,from);
    TString bfrm = tok;
    std::cout<<bn<<" : "<<bfrm<<"\t";
    if (bfrm.Contains("hs:")){
      bfrm = bfrm.ReplaceAll("hs:","");
      brv_H_mc = new TTreeFormula(bn,bfrm,fChain); 
      while(line.Tokenize(tok,from)){
	bedg_H_mc.push_back(atof(tok));
	std::cout<<atof(tok)<<"\t";
      }
    }
    else if (bfrm.Contains("h:")){
      bfrm = bfrm.ReplaceAll("h:","");
      brv_H = new TTreeFormula(bn,bfrm,fChain); 
      while(line.Tokenize(tok,from)){
	bedg_H.push_back(atof(tok));
	std::cout<<atof(tok)<<"\t";
      }
    }
    else if (bfrm.Contains("sim:")){
      bfrm = bfrm.ReplaceAll("sim:","");
      brv_mc[bn] = new TTreeFormula(bn,bfrm,fChain);
      fChain->SetNotify(brv_mc[bn]);
      while(line.Tokenize(tok,from)){
	bedg_mc[bn].push_back(atof(tok));
	std::cout<<atof(tok)<<"\t";
      }
    }
    else{
      brv[bn] = new TTreeFormula(bn,bfrm,fChain);
      fChain->SetNotify(brv[bn]);
      OUTDIR += bn.ReplaceAll("(","_").ReplaceAll(")","_");
      while(line.Tokenize(tok,from)){
	bedg[bn].push_back(atof(tok));
	std::cout<<atof(tok)<<"\t";
      }
    }

    std::cout<<"\n";
  }
  OUTDIR += "_bins";

  time_t timestmp;
  time(&timestmp);
  
  struct tm *lt = localtime(&timestmp);
  TString date = Form("%02d%02d%02d_%02d%02d%02d",lt->tm_year%100,lt->tm_mon+1,lt->tm_mday,lt->tm_hour,lt->tm_min,lt->tm_sec);

  OUTDIR += Form("_%02d%02d%02d",lt->tm_year%100,lt->tm_mon+1,lt->tm_mday);
  OUTDIR += SUFF;

  system("mkdir " + OUTDIR + " 2>/dev/null");

  ///// end Setting bins and output dir ////
  
  ofile = new TFile(OUTDIR + "/M_results.root","recreate");
  Int_t NbinsH = bedg_H.size()-1;
  if (NbinsH != (bedg_H_mc.size()-1)){
    std::cout<<"ERROR: "<<__FILE__<<":"<<__LINE__<<": #binsH != binsH_mc\n";
    exit(1);
  }
  Double_t *binsH = bedg_H.data();
  Double_t *binsH_mc = bedg_H_mc.data();

  Pi0NAME = "#pi^{+}";
  Pi1NAME = "#pi^{-}";
  if (options.Contains("pi0")){
    Pi1NAME = "#pi^{0}";
    if ( options.Contains("rho-")){
      Pi0NAME = "#pi^{-}";
    }else{
      Pi0NAME = "#pi^{+}";
    }
  }
  PAIRNAME = Pi0NAME + Pi1NAME;


  Nb_NF = 1;
  for (auto& x: bedg){
    TString bn = x.first;
    Nb_NF *=x.second.size()-1;
    for (int k=0;k<x.second.size()-1;k++){
      TString ttlsuf =  Form("%.02f<%s<%.2f",x.second[k], bn.Data(), x.second[k+1]);
      BC[bn].push_back(ttlsuf);
    }
  }

  for (auto& x: bedg_mc){
    TString bn = x.first;
    for (int k=0;k<x.second.size()-1;k++){
      TString ttlsuf =  Form("%.02f<%s<%.2f",x.second[k], bn.Data(), x.second[k+1]);
      BC_mc[bn].push_back(ttlsuf);
    }
  }

  DIR["kin"]    = ofile->mkdir("kinematics");
  DIR["kin_mc"]    = ofile->mkdir("kinematics_mc");

  initKinHistos();

  TString hname;
  
  /* DIR[hnameM]    = ofile->mkdir("M"); */
  /* DIR[hnameMx1]   = ofile->mkdir("Mx1"); */
  /* DIR[hnameMx2]   = ofile->mkdir("Mx2"); */
  /* DIR[hnamedz]   = ofile->mkdir("dz"); */
  /* DIR[hmpi0name] = ofile->mkdir("mpi0"); */
  /* DIR[hnameM_mc] = ofile->mkdir("M_mc"); */
  /* DIR[hnameMx1_mc]   = ofile->mkdir("Mx1_mc"); */
  /* DIR[hnameMx2_mc]   = ofile->mkdir("Mx2_mc"); */
  /* DIR[hnamedz_mc]   = ofile->mkdir("dz_mc"); */
  /* DIR[hmpi0name_mc] = ofile->mkdir("mpi0_mc"); */
  
  /* for (auto &p : bedg){ */
  /*   ofile->mkdir("profiles/"+p.first); */
  /*   ofile->mkdir("profiles/"+p.first+"_mc"); */
  /* } */
  /* ofile->mkdir("profiles/M"); */
  /* ofile->mkdir("profiles/M_mc"); */

  TString infix = "";
  TString suff = "";
  TString ttlsuf = "";
  int fact = 1; 
  Int_t Nbins = 300;
  for (auto &x : BC){
    TString bn = x.first;
    infix += bn;
  }


  for (auto& x: bedg){
    TString bn = x.first;
    DIR[bn]   = ofile->mkdir(bn);
    DIR["mc_" + bn]   = ofile->mkdir("mc_" + bn);

    Nb_NF *=x.second.size()-1;
    for (int k=0;k<x.second.size()-1;k++){
      TString ttlsuf =  Form("%.02f<%s<%.2f",x.second[k], bn.Data(), x.second[k+1]);
      BC[bn].push_back(ttlsuf);
      DIR[bn]->cd();
      hname = TString("hmx21_") + k;
      new TH1D(hname,PAIRNAME+": MM^{2}_{1} " + ttlsuf,Nbins,-0.5,0.5);
      hname = TString("hmx22_") + k;
      new TH1D(hname,PAIRNAME+": MM^{2}_{2} " + ttlsuf,Nbins,-0.5,0.5);
      hname = TString("hmx2_") + k;
      new TH1D(hname,PAIRNAME+": MM^{2} " + ttlsuf,Nbins,-0.5,0.5);

      
      DIR["mc_" + bn]->cd();
      hname = TString("hmx21_") + k;
      new TH1D(hname,"MC " + PAIRNAME+": MM^{2}_{1} " + ttlsuf,Nbins,-0.5,0.5);
      hname = TString("hmx22_") + k;
      new TH1D(hname,"MC " + PAIRNAME+": MM^{2}_{2} " + ttlsuf,Nbins,-0.5,0.5);
      hname = TString("hmx2_") + k;
      new TH1D(hname,PAIRNAME+": MM^{2} " + ttlsuf,Nbins,-0.5,0.5);


    }
  }

  /*  for (int k = 0;k<Nb_NF;k++){
    hnameM    = "hM";
    hnameMx1   = "hMx1";
    hnameMx2   = "hMx2";
    hnamedz   = "hdz";
    hmpi0name = "hmpi0";
    hnameM_mc    = "hM_mc";
    hnameMx1_mc   = "hMx1_mc";
    hnameMx2_mc   = "hMx2_mc";
    hnamedz_mc   = "hdz_mc";
    hmpi0name_mc = "hmpi0_mc";

    fact = 1;
    suff = "";
    ttlsuf = "";
  
    for (auto &x : BC){
      TString bn = x.first;
      int Nb = x.second.size();
      int n = (k/fact)%Nb;
      suff += Form("%d",n);
      ttlsuf +=  "(" + x.second[n] + ")";
      fact *=Nb;
    }

    //    std::cout<<"BC("<<k<<"): "<<ttlsuf<<" :: "<<infix+"_"+suff<<std::endl;
    
    for (auto &p : bedg){
      TString bn = p.first;
      TString pfname = "p" + bn + "_" + infix + "_" + suff;
      ofile->cd("profiles/" + bn);
      new TProfile(pfname,"profile "+ PAIRNAME+": IM; "+ bn + " " + ttlsuf,NbinsH,binsH);
      ofile->cd("profiles/" + bn + "_mc");
      new TProfile(pfname,"profile MC "+ PAIRNAME+": IM; "+ bn + " " + ttlsuf,NbinsH,binsH);
    }
    TString pfname = "pM_" + infix +"_"+suff;
    ofile->cd("profiles/M");
    new TProfile(pfname,"profile "+ PAIRNAME+": IM; M " + ttlsuf,NbinsH,binsH);    
    ofile->cd("profiles/M_mc");
    new TProfile(pfname,"profile MC "+ PAIRNAME+": IM; M " + ttlsuf,NbinsH,binsH);

    DIR[hnameM]->cd();
    hnameM += "_" + infix +"_"+suff;
    new TH1D(hnameM,PAIRNAME+": IM" + ttlsuf,NbinsH,binsH);

    DIR[hnameMx1]->cd();
    hnameMx1 += "_" + infix +"_"+suff;
    new TH1D(hnameMx1,PAIRNAME+": MM1" + ttlsuf,Nbins,0.5,3);

    DIR[hnameMx2]->cd();
    hnameMx2 += "_" + infix +"_"+suff;
    new TH1D(hnameMx2,PAIRNAME+": MM2" + ttlsuf,Nbins,0.5,3);

    DIR[hnamedz]->cd();
    hnamedz += "_" + infix +"_"+suff;
    new TH1D(hnamedz,PAIRNAME+": #Delta z" + ttlsuf,Nbins,-0.6,0.6);

    DIR[hmpi0name]->cd();
    hmpi0name += "_" + infix +"_"+suff;
    new TH1D(hmpi0name,PAIRNAME+": m_{#gamma#gamma}" + ttlsuf,Nbins,0,0.5);

    fact = 1;
    suff = "";
    ttlsuf = "";
  
    for (auto &x : BC_mc){
      TString bn = x.first;
      int Nb = x.second.size();
      int n = (k/fact)%Nb;
      suff += Form("%d",n);
      ttlsuf +=  "(" + x.second[n] + ")";
      fact *=Nb;
    }

    DIR[hnameM_mc]->cd();
    hnameM_mc += "_" + infix +"_"+suff;
    new TH1D(hnameM_mc,PAIRNAME+": IM" + ttlsuf,NbinsH,binsH_mc);

    DIR[hnameMx1_mc]->cd();
    hnameMx1_mc += "_" + infix +"_"+suff;
    new TH1D(hnameMx1_mc,PAIRNAME+": MM^{2}_{1} " + ttlsuf,Nbins,0.5,3);

    DIR[hnameMx2_mc]->cd();
    hnameMx2_mc += "_" + infix +"_"+suff;
    new TH1D(hnameMx2_mc,PAIRNAME+": MM^{2}_{2} " + ttlsuf,Nbins,0.5,3);

    DIR[hnamedz_mc]->cd();
    hnamedz_mc += "_" + infix +"_"+suff;
    new TH1D(hnamedz_mc,PAIRNAME+": #Delta z" + ttlsuf,Nbins,-0.6,0.6);

    DIR[hmpi0name_mc]->cd();
    hmpi0name_mc += "_" + infix +"_"+suff;
    new TH1D(hmpi0name_mc,PAIRNAME+": m_{#gamma#gamma}" + ttlsuf,Nbins,0,0.5);
  }*/
  
  ///// end REC data ////
  
  Notify();
}

Bool_t pionRes_cls::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void pionRes_cls::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}

Int_t pionRes_cls::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}

Int_t pionRes_cls::initKinHistos(){
  TH1D *h;
  TH2D *h2;
  TH3D *h3;
  TProfile *pr;
  Int_t Nbins = 500;

  DIR["kin"]->cd();

  h = new TH1D("hNpair_all", PAIRNAME + " : N pairs",6,0,6);
  configHisto(h,"pairs","dN/dpairs");
  h = new TH1D("hNpair", PAIRNAME + " : N pairs",6,0,6);
  configHisto(h,"pairs","dN/dpairs");
  h = new TH1D("hth_e","#theta_{e}",Nbins,0,50);
  configHisto(h,"#theta_{e}","dN/d#theta");
  h = new TH1D("hM", PAIRNAME + " : IM",Nbins,0.2,3);
  configHisto(h,"M_{" + PAIRNAME + "} GeV","dN/dm");
  h = new TH1D("hmpi0", "#gamma#gamma : IM",Nbins,0.0,0.3);
  configHisto(h,"M_{#gamma#gamma} GeV","dN/dm");
  h = new TH1D("hmpi0_cut", "#gamma#gamma : IM",Nbins,0.0,0.3);
  configHisto(h,"M_{#gamma#gamma} GeV","dN/dm");
  h = new TH1D("hMx1", PAIRNAME + " : MM1",Nbins,-0.5,0.5);
  configHisto(h,"Mx1 (e#pi^{+}X) GeV","dN/dmx2");
  h = new TH1D("hMx2", PAIRNAME + " : MM2",Nbins,-0.5,0.5);
  configHisto(h,"Mx2 (e#pi^{-}X) GeV","dN/dmx2");
  h = new TH1D("hz", PAIRNAME + " : z",Nbins,0,1);
  configHisto(h,"z","dN/dz");
  h = new TH1D("hz0", Pi0NAME +" : z",Nbins,0,1);
  configHisto(h,"z_{" + Pi0NAME +"}","dN/dz");
  h = new TH1D("hz1", Pi1NAME + " : z",Nbins,0,1);
  configHisto(h,"z_{" + Pi1NAME + "}","dN/dz");
  h = new TH1D("hpT", PAIRNAME + " : pT",Nbins,0,1.2);
  configHisto(h,"pT GeV","dN/dpt");
  h = new TH1D("hpT0", Pi0NAME +" : pT",Nbins,0,1.2);
  configHisto(h,"pT_{" + Pi0NAME +"} GeV","dN/dpt");
  h = new TH1D("hpT1", Pi1NAME + " : pT",Nbins,0,1.2);
  configHisto(h,"pT_{" + Pi1NAME + "} GeV","dN/dpt");

  h2 = new TH2D("hxF1xF0","xF1 vs xF0",Nbins,-0.05,1,Nbins,-0.05,1);
  h2->GetXaxis()->SetTitle("xF0");
  h2->GetYaxis()->SetTitle("xF1");

  h2 = new TH2D("hthphi_0",Pi0NAME + " : #theta vs #phi",Nbins,-180,180,Nbins,0,40);
  h2->GetXaxis()->SetTitle("#phi");
  h2->GetYaxis()->SetTitle("#theta");

  h2 = new TH2D("hthphi_1",Pi1NAME + " : #theta vs #phi",Nbins,-180,180,Nbins,0,40);
  h2->GetXaxis()->SetTitle("#phi");
  h2->GetYaxis()->SetTitle("#theta");

  h2 = new TH2D("hthphi_h",PAIRNAME + "#theta vs #phi",Nbins,-180,180,Nbins,0,40);
  h2->GetXaxis()->SetTitle("#phi");
  h2->GetYaxis()->SetTitle("#theta");
 
  h2 = new TH2D("hz1z0","z1 vs z0",Nbins,0.0,1,Nbins,0.0,1);
  h2->GetXaxis()->SetTitle("z0");
  h2->GetYaxis()->SetTitle("z1");
 
  h2 = new TH2D("hpT1pT0","pT1 vs pT0",Nbins,0.0,1.2,Nbins,0.0,1.2);
  h2->GetXaxis()->SetTitle("pT0");
  h2->GetYaxis()->SetTitle("pT1");
  
  h2 = new TH2D("hQ2x","Q2 vs x",Nbins,0.04,1,Nbins,0.95,10);
  h2->GetXaxis()->SetTitle("x");
  h2->GetYaxis()->SetTitle("Q2 GeV^{2}");

  h2 = new TH2D("hQ2x_h","Q2 vs x hadrons",Nbins,0.04,1,Nbins,0.95,10);
  h2->GetXaxis()->SetTitle("x");
  h2->GetYaxis()->SetTitle("Q2 GeV^{2}");

  h2 = new TH2D("hxz","x vs z",Nbins,0.2,1,Nbins,0.04,1);
  h2->GetXaxis()->SetTitle("z");
  h2->GetYaxis()->SetTitle("x");

  h2 = new TH2D("hSFPe","Ee/Pe vs Pe",Nbins,0,10,Nbins,0.15,0.35);
  h2->GetXaxis()->SetTitle("Pe GeV");
  h2->GetYaxis()->SetTitle("Ee/Pe");

  h2 = new TH2D("hthphi_e","#theta_{e} vs #phi_{e}",Nbins,-180,180,Nbins,0,50);
  h2->GetXaxis()->SetTitle("#phi_{e}");
  h2->GetYaxis()->SetTitle("#theta_{e}");

  //  pr->SetLineColor(kBlack); pr->SetMarkerColor(kBlack); pr->SetMarkerStyle(kFullDotLarge); pr->SetMarkerSize(0.7);
  // corr pics 
  // mx - m
  h2 = new TH2D("hmxm","MM vs IM",Nbins,0.2,2,Nbins,0.5,3);
  h2->GetXaxis()->SetTitle("IM GeV");
  h2->GetYaxis()->SetTitle("MM GeV");

  // mx - dz
  h2 = new TH2D("hmxdz","MM vs #Deltaz",Nbins,-0.8,0.8,Nbins,0.5,3);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("MM GeV");

  // t - dz
  h2 = new TH2D("htdz","-t vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,5.5);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("-t GeV^{2}");

  // mx - t
  h2 = new TH2D("hmxt","MM vs -t",Nbins,0,5.5,Nbins,0.5,3);
  h2->GetXaxis()->SetTitle("-t GeV^{2}");
  h2->GetYaxis()->SetTitle("MM GeV");

  // dp - t
  h2 = new TH2D("hdpt","dp vs -t",Nbins,0,5.5,Nbins,0,5.0);
  h2->GetXaxis()->SetTitle("-t GeV^{2}");
  h2->GetYaxis()->SetTitle("dp GeV");

  // dp - dz
  h2 = new TH2D("hdpdz","dp vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,5.0);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("dp GeV");

  // dp - m
  h2 = new TH2D("hdpm","dp vs M",Nbins,0.2,2,Nbins,0,5.0);
  h2->GetXaxis()->SetTitle("IM GeV");
  h2->GetYaxis()->SetTitle("dp GeV");

  // dp - mx
  h2 = new TH2D("hdpmx","dp vs MM",Nbins,0.5,3,Nbins,0,5.0);
  h2->GetXaxis()->SetTitle("MM GeV");
  h2->GetYaxis()->SetTitle("dp GeV");

  //z - m
  h2 = new TH2D("hzm","z vs M",Nbins,0.2,2,Nbins,0.2,1);
  h2->GetXaxis()->SetTitle("IM GeV");
  h2->GetYaxis()->SetTitle("z");

  //z0 - dz
  h2 = new TH2D("hz0dz","z0 vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("IM GeV");

  //z1 - dz
  h2 = new TH2D("hz1dz","z1 vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("IM GeV");

  //z - dz
  h2 = new TH2D("hzdz","z vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("IM GeV");

  //pt - dz
  h2 = new TH2D("hptdz","pT vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,2);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("p_{T} GeV");

  //m - dz
  h2 = new TH2D("hmdz","m vs #Deltaz",Nbins,-0.8,0.8,Nbins,0.2,2);
  h2->GetXaxis()->SetTitle("#Deltaz");
  h2->GetYaxis()->SetTitle("IM GeV");

  //pt - z
  h2 = new TH2D("hptz","pT vs z",Nbins,0.2,1,Nbins,0,2);
  h2->GetXaxis()->SetTitle("z");
  h2->GetYaxis()->SetTitle("p_{T} GeV");

  //pt2 - z
  h2 = new TH2D("hpt2z","pT vs z",Nbins,0.2,1.0,Nbins,0,2);
  h2->GetXaxis()->SetTitle("z");
  h2->GetYaxis()->SetTitle("p_{T}^{2} GeV");

  //pt0 - z0
  h2 = new TH2D("hpt0z0","pT0 vs z0",Nbins,0.1,1,Nbins,0,2);
  h2->GetXaxis()->SetTitle("z0");
  h2->GetYaxis()->SetTitle("p_{T0} GeV");

  //pt1 - z1
  h2 = new TH2D("hpt1z1","pT1 vs z1",Nbins,0.1,1,Nbins,0,2);
  h2->GetXaxis()->SetTitle("z1");
  h2->GetYaxis()->SetTitle("p_{T1} GeV");

  ////// excl vs rec.
  //p1 - p1_X
  h2 = new TH2D("hp1p1X","P_{1}: rec vs excl",Nbins,0.5,7.5,Nbins,0.5,7);
  h2->GetXaxis()->SetTitle("p (excl.) GeV");
  h2->GetYaxis()->SetTitle("p (rec.) GeV");

  //p2 - p2_X
  h2 = new TH2D("hp2p2X","P_{2}: rec vs excl",Nbins,0.5,7.5,Nbins,0.5,7);
  h2->GetXaxis()->SetTitle("p (excl.) GeV");
  h2->GetYaxis()->SetTitle("p (rec.) GeV");
    
  //th1 - th1_X
  h2 = new TH2D("hth1th1X","#theta_{1}: rec vs excl",Nbins,5,40,Nbins,5,40);
  h2->GetXaxis()->SetTitle("#theta (excl.) GeV");
  h2->GetYaxis()->SetTitle("#theta (rec.) GeV");

  //th2 - th2_X
  h2 = new TH2D("hth2th2X","#theta_{2}: rec vs excl",Nbins,5,40,Nbins,5,40);
  h2->GetXaxis()->SetTitle("#theta (excl.) deg");
  h2->GetYaxis()->SetTitle("#theta (rec.) deg");

  //phi1 - phi1_X
  h2 = new TH2D("hphi1phi1X","#phi_{1}: rec vs excl",Nbins,-180,180,Nbins,-180,180);
  h2->GetXaxis()->SetTitle("#phi (excl.) deg");
  h2->GetYaxis()->SetTitle("#phi (rec.) deg");

  //phi2 - phi2_X
  h2 = new TH2D("hphi2phi2X","#phi_{2}: rec vs excl",Nbins,-180,180,Nbins,-180,180);
  h2->GetXaxis()->SetTitle("#phi (excl.) deg");
  h2->GetYaxis()->SetTitle("#phi (rec.) deg");

  //Diff p1 - p1_X.
  //pdep
  h2 = new TH2D("hdppX1P","#DeltaP_{1} vs P_{1} rec.",Nbins,0.5,7.5,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#DeltaP");
  //thdep
  h2 = new TH2D("hdppX1th","#DeltaP_{1} vs #theta_{1} rec.",Nbins,5,40,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#DeltaP");
  //phidep
  h2 = new TH2D("hdppX1phi","#DeltaP_{1} vs #phi_{1} rec.",Nbins,-180,180,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#DeltaP");

  //Diff th1 - th1_X.
  //pdep
  h2 = new TH2D("hdthX1P","#Delta#theta_{1} vs P_{1} rec.",Nbins,0.5,7.5,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#Delta#theta");
  //thdep
  h2 = new TH2D("hdthX1th","#Delta#theta_{1} vs #theta_{1} rec.",Nbins,5,40,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#theta");
  //phidep
  h2 = new TH2D("hdthX1phi","#Delta#theta_{1} vs #phi_{1} rec.",Nbins,-180,180,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#theta");

  //Diff phi1 - phi1_X.
  //pdep
  h2 = new TH2D("hdphiX1P","#Delta#phi_{1} vs P_{1} rec.",Nbins,0.5,7.5,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#Delta#phi");
  //thdep
  h2 = new TH2D("hdphiX1th","#Delta#phi_{1} vs #theta_{1} rec.",Nbins,5,40,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#phi");
  //phidep
  h2 = new TH2D("hdphiX1phi","#Delta#phi_{1} vs #phi_{1} rec.",Nbins,-180,180,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#phi");

  //Diff p2 - p2_X.
  //pdep
  h2 = new TH2D("hdppX2P","#DeltaP_{2} vs P_{2} rec.",Nbins,0.5,7.5,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#DeltaP");
  //thdep
  h2 = new TH2D("hdppX2th","#DeltaP_{2} vs #theta_{2} rec.",Nbins,5,40,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#DeltaP");
  //phidep
  h2 = new TH2D("hdppX2phi","#DeltaP_{2} vs #phi_{2} rec.",Nbins,-180,180,Nbins,-1,1);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#DeltaP");

  //Diff th2 - th2_X.
  //pdep
  h2 = new TH2D("hdthX2P","#Delta#theta_{2} vs P_{2} rec.",Nbins,0.5,7.5,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#Delta#theta");
  //thdep
  h2 = new TH2D("hdthX2th","#Delta#theta_{2} vs #theta_{2} rec.",Nbins,5,40,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#theta");
  //phidep
  h2 = new TH2D("hdthX2phi","#Delta#theta_{2} vs #phi_{2} rec.",Nbins,-180,180,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#theta");

  //Diff phi2 - phi2_X.
  //pdep
  h2 = new TH2D("hdphiX2P","#Delta#phi_{2} vs P_{2} rec.",Nbins,0.5,7.5,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("p (rec.) GeV");
  h2->GetYaxis()->SetTitle("#Delta#phi");
  //thdep
  h2 = new TH2D("hdphiX2th","#Delta#phi_{2} vs #theta_{2} rec.",Nbins,5,40,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#theta (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#phi");
  //phidep
  h2 = new TH2D("hdphiX2phi","#Delta#phi_{2} vs #phi_{2} rec.",Nbins,-180,180,Nbins,-4,4);
  h2->GetXaxis()->SetTitle("#phi (rec.) deg");
  h2->GetYaxis()->SetTitle("#Delta#phi");


  TString title = "IM(P_{#pi^{+}},P_{#pi^{-}})";
  Int_t NbinP = 7;
  Double_t pLL = 1.0, pHL = 5.0, zLL = 0.25, zHL = 0.9;
  h3 = new TH3D("hzPpipPpim_IN",title + " IN",NbinP,pLL,pHL,NbinP,pLL,pHL,NbinP,zLL,zHL);
  h3->GetXaxis()->SetTitle("P_{#pi^{-}} GeV");
  h3->GetYaxis()->SetTitle("P_{#pi^{+}} GeV");
  h3->GetZaxis()->SetTitle("IM GeV");
  h3  = (TH3D *) h3->Clone("hzPpipPpim_OUT");
  h3->SetTitle(title + " OUT");
  h3  = (TH3D *) h3->Clone("hzPpipPpim_EXT");
  h3->SetTitle(title + " EXT");
  h3  = (TH3D *) h3->Clone("hzPpipPpim_RS");
  h3->SetTitle(title + " RS");


  if (bedg.count("pt2") != 0 ){
    TString title = "p_{T}^{2}(m,z)";
    h3 = new TH3D("hpt2zm_IN",title + " IN",bedg_H.size()-1,bedg_H.data(),bedg["z"].size()-1,bedg["z"].data(),bedg["pt2"].size()-1,bedg["pt2"].data());
    h3->GetXaxis()->SetTitle("IM GeV");
    h3->GetYaxis()->SetTitle("z GeV");
    h3->GetZaxis()->SetTitle("p_{T}^{2} GeV^{2}");
    h3  = (TH3D *) h3->Clone("hpt2zm_OUT");
    h3->SetTitle(title + " OUT");
    h3  = (TH3D *) h3->Clone("hpt2zm_EXT");
    h3->SetTitle(title + " EXT");
    h3  = (TH3D *) h3->Clone("hpt2zm_RS");
    h3->SetTitle(title + " RS");

    Double_t *bx = new Double_t[(bedg_H.size() - 1)*2 + 1],
      *by = new Double_t[(bedg["z"].size() - 1)*2 + 1],
      *bz = new Double_t[(bedg["pt2"].size() - 1)*2 + 1];
    
    for (int k = 0; k<bedg_H.size() - 1 ; k++){
      double e_min = bedg_H[k];
      double e_max = bedg_H[k+1];
      double e_c = (e_min + e_max )/2.;
      bx[k*2] = e_min;
      bx[k*2 + 1] = e_c;
      bx[k*2 + 2] = e_max;
    }
    for (int k = 0; k<bedg["z"].size() - 1 ; k++){
      double e_min = bedg["z"][k];
      double e_max = bedg["z"][k+1];
      double e_c = (e_min + e_max )/2.;
      by[k*2] = e_min;
      by[k*2 + 1] = e_c;
      by[k*2 + 2] = e_max;
    }
    for (int k = 0; k<bedg["pt2"].size() - 1 ; k++){
      double e_min = bedg["pt2"][k];
      double e_max = bedg["pt2"][k+1];
      double e_c = (e_min + e_max )/2.;
      bz[k*2] = e_min;
      bz[k*2 + 1] = e_c;
      bz[k*2 + 2] = e_max;
    }
    h3 = new TH3D("hpt2zm_IN_small",title + " IN", (bedg_H.size() - 1)*2, bx, (bedg["z"].size() - 1)*2, by, (bedg["pt2"].size() - 1)*2, bz);
    h3->GetXaxis()->SetTitle("IM GeV");
    h3->GetYaxis()->SetTitle("z GeV");
    h3->GetZaxis()->SetTitle("p_{T}^{2} GeV^{2}");
    h3  = (TH3D *) h3->Clone("hpt2zm_OUT_small");
    h3->SetTitle(title + " OUT");
    h3  = (TH3D *) h3->Clone("hpt2zm_EXT_small");
    h3->SetTitle(title + " EXT");
    h3  = (TH3D *) h3->Clone("hpt2zm_RS_small");
    h3->SetTitle(title + " RS");

    delete bx;
    delete by;
    delete bz;
  }

  //////////// MC pics //////////////////////
  if (options.Contains("sim")){
    DIR["kin_mc"]->cd();
  
    h = new TH1D("hNpair_all", "MC " + PAIRNAME + " : N pairs",6,0,6);
    configHisto(h,"mc pairs","dN/dpairs");
    h = new TH1D("hNpair", "MC " + PAIRNAME + " : N pairs",6,0,6);
    configHisto(h,"pairs","dN/dpairs");
    h = new TH1D("hth_e","#theta_{e}",Nbins,0,50);
    configHisto(h,"#theta_{e}","dN/d#theta");
    h = new TH1D("hM", "MC " + PAIRNAME + " : IM",Nbins,0.2,3);
    configHisto(h,"M_{" + PAIRNAME + "} GeV","dN/dm");
    h = new TH1D("hmpi0", "#gamma#gamma : IM",Nbins,0.0,0.3);
    configHisto(h,"M_{#gamma#gamma} GeV","dN/dm");
    h = new TH1D("hmpi0_cut", "#gamma#gamma : IM",Nbins,0.0,0.3);
    configHisto(h,"M_{#gamma#gamma} GeV","dN/dm");
    h = new TH1D("hMx1", "MC " + PAIRNAME + " : MM1",Nbins,-0.5,0.5);
    configHisto(h,"Mx1 (e#pi^{+}X) GeV","dN/dmx2");
    h = new TH1D("hMx2", "MC " + PAIRNAME + " : MM2",Nbins,-0.5,0.5);
    configHisto(h,"Mx2 (e#pi^{-}X) GeV","dN/dmx2");

    h = new TH1D("hz", "MC " + PAIRNAME + " : z",Nbins,0,1);
    configHisto(h,"z","dN/dz");
    h = new TH1D("hz0", "MC " + Pi0NAME +" : z",Nbins,0,1);
    configHisto(h,"z_{" + Pi0NAME +"}","dN/dz");
    h = new TH1D("hz1", "MC " + Pi1NAME + " : z",Nbins,0,1);
    configHisto(h,"z_{" + Pi1NAME + "}","dN/dz");
    h = new TH1D("hpT", "MC " + PAIRNAME + " : pT",Nbins,0,1.2);
    configHisto(h,"pT GeV","dN/dpt");
    h = new TH1D("hpT0", "MC " + Pi0NAME +" : pT",Nbins,0,1.2);
    configHisto(h,"pT_{" + Pi0NAME +"} GeV","dN/dpt");
    h = new TH1D("hpT1", "MC " + Pi1NAME + " : pT",Nbins,0,1.2);
    configHisto(h,"pT_{" + Pi1NAME + "} GeV","dN/dpt");

    h2 = new TH2D("hxF1xF0","MC xF1 vs xF0",Nbins,-0.05,1,Nbins,-0.05,1);
    h2->GetXaxis()->SetTitle("xF0");
    h2->GetYaxis()->SetTitle("xF1");
    
    h2 = new TH2D("hxF1xF0_all","MC xF1 vs xF0",Nbins,-1,1,Nbins,-1,1);
    h2->GetXaxis()->SetTitle("xF0");
    h2->GetYaxis()->SetTitle("xF1");

    h2 = new TH2D("hthphi_0","MC " + Pi0NAME + " : #theta vs #phi",Nbins,-180,180,Nbins,0,140);
    h2->GetXaxis()->SetTitle("#phi");
    h2->GetYaxis()->SetTitle("#theta");
    
    h2 = new TH2D("hthphi_1","MC " + Pi1NAME + " : #theta vs #phi",Nbins,-180,180,Nbins,0,140);
    h2->GetXaxis()->SetTitle("#phi");
    h2->GetYaxis()->SetTitle("#theta");
    
    h2 = new TH2D("hthphi_h","MC " + PAIRNAME + "#theta vs #phi",Nbins,-180,180,Nbins,0,140);
    h2->GetXaxis()->SetTitle("#phi");
    h2->GetYaxis()->SetTitle("#theta");
    
    h2 = new TH2D("hz1z0","MC: z1 vs z0",Nbins,0.0,1,Nbins,0.0,1);
    h2->GetXaxis()->SetTitle("z0");
    h2->GetYaxis()->SetTitle("z1");

    h2 = new TH2D("hpT1pT0","MC: pT1 vs pT0",Nbins,0.0,1.2,Nbins,0.0,1.2);
    h2->GetXaxis()->SetTitle("pT0");
    h2->GetYaxis()->SetTitle("pT1");
  
    h2 = new TH2D("hQ2x","MC: Q2 vs x",Nbins,0.04,1,Nbins,0.95,10);
    h2->GetXaxis()->SetTitle("x");
    h2->GetYaxis()->SetTitle("Q2 GeV^{2}");

    h2 = new TH2D("hQ2x_h","MC: Q2 vs x hadrons",Nbins,0.04,1,Nbins,0.95,10);
    h2->GetXaxis()->SetTitle("x");
    h2->GetYaxis()->SetTitle("Q2 GeV^{2}");

    h2 = new TH2D("hxz","MC: x vs z",Nbins,0.2,1,Nbins,0.04,1);
    h2->GetXaxis()->SetTitle("z");
    h2->GetYaxis()->SetTitle("x");

    h2 = new TH2D("hSFPe","MC: Ee/Pe vs Pe",Nbins,0,10,Nbins,0.15,0.35);
    h2->GetXaxis()->SetTitle("Pe GeV");
    h2->GetYaxis()->SetTitle("Ee/Pe");

    h2 = new TH2D("hthphi_e","MC: #theta_{e} vs #phi_{e}",Nbins,-180,180,Nbins,0,50);
    h2->GetXaxis()->SetTitle("#phi_{e}");
    h2->GetYaxis()->SetTitle("#theta_{e}");

    //  pr->SetLineColor(kBlack); pr->SetMarkerColor(kBlack); pr->SetMarkerStyle(kFullDotLarge); pr->SetMarkerSize(0.7);
    // corr pics 
    // mx - m
    h2 = new TH2D("hmxm","MC: MM vs IM",Nbins,0.2,2,Nbins,0.5,3);
    h2->GetXaxis()->SetTitle("IM GeV");
    h2->GetYaxis()->SetTitle("MM GeV");

    // mx - dz
    h2 = new TH2D("hmxdz","MC: MM vs #Deltaz",Nbins,-0.8,0.8,Nbins,0.5,3);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("MM GeV");

    // t - dz
    h2 = new TH2D("htdz","MC: -t vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,5.5);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("-t GeV^{2}");

    // mx - t
    h2 = new TH2D("hmxt","MC: MM vs -t",Nbins,0,5.5,Nbins,0.5,3);
    h2->GetXaxis()->SetTitle("-t GeV^{2}");
    h2->GetYaxis()->SetTitle("MM GeV");

    // dp - t
    h2 = new TH2D("hdpt","MC: dp vs -t",Nbins,0,5.5,Nbins,0,5.0);
    h2->GetXaxis()->SetTitle("-t GeV^{2}");
    h2->GetYaxis()->SetTitle("dp GeV");

    // dp - dz
    h2 = new TH2D("hdpdz","MC: dp vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,5.0);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("dp GeV");

    // dp - m
    h2 = new TH2D("hdpm","MC: dp vs M",Nbins,0.2,2,Nbins,0,5.0);
    h2->GetXaxis()->SetTitle("IM GeV");
    h2->GetYaxis()->SetTitle("dp GeV");

    // dp - mx
    h2 = new TH2D("hdpmx","MC: dp vs MM",Nbins,0.5,3,Nbins,0,5.0);
    h2->GetXaxis()->SetTitle("MM GeV");
    h2->GetYaxis()->SetTitle("dp GeV");

    //z - m
    h2 = new TH2D("hzm","MC: z vs M",Nbins,0.2,2,Nbins,0.2,1);
    h2->GetXaxis()->SetTitle("IM GeV");
    h2->GetYaxis()->SetTitle("z");

    //z0 - dz
    h2 = new TH2D("hz0dz","MC: z0 vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("IM GeV");

    //z1 - dz
    h2 = new TH2D("hz1dz","MC: z1 vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("IM GeV");

    //z - dz
    h2 = new TH2D("hzdz","MC: z vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,1);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("IM GeV");

    //pt - dz
    h2 = new TH2D("hptdz","MC: pT vs #Deltaz",Nbins,-0.8,0.8,Nbins,0,2);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("p_{T} GeV");

    //m - dz
    h2 = new TH2D("hmdz","MC: m vs #Deltaz",Nbins,-0.8,0.8,Nbins,0.2,2);
    h2->GetXaxis()->SetTitle("#Deltaz");
    h2->GetYaxis()->SetTitle("IM GeV");

    //pt - z
    h2 = new TH2D("hptz","MC: pT vs z",Nbins,0.2,1,Nbins,0,2);
    h2->GetXaxis()->SetTitle("z");
    h2->GetYaxis()->SetTitle("p_{T} GeV");

    //pt2 - z
    h2 = new TH2D("hpt2z","MC: p_{T}^{2} vs z",Nbins,0.2,1,Nbins,0,2);
    h2->GetXaxis()->SetTitle("z");
    h2->GetYaxis()->SetTitle("p_{T}^{2} GeV");

    //pt0 - z0
    h2 = new TH2D("hpt0z0","MC: pT0 vs z0",Nbins,0.1,1,Nbins,0,2);
    h2->GetXaxis()->SetTitle("z0");
    h2->GetYaxis()->SetTitle("p_{T0} GeV");

    //pt1 - z1
    h2 = new TH2D("hpt1z1","MC: pT1 vs z1",Nbins,0.1,1,Nbins,0,2);
    h2->GetXaxis()->SetTitle("z1");
    h2->GetYaxis()->SetTitle("p_{T1} GeV");

  }
  /// end corr pics.  
  return 0;
}

Int_t pionRes_cls::fillEvHistos(Bool_t onMC){
  TH1D *h;
  TH2D *h2;
  if (onMC)
  {
    DIR["kin_mc"]->GetObject("hNpair",h);
    h->Fill(mc_npart);
    DIR["kin_mc"]->GetObject("hth_e",h);
    h->Fill(mc_th_e);
    DIR["kin_mc"]->GetObject("hQ2x",h2);
    h2->Fill(mc_Xb,mc_Q2);
    DIR["kin_mc"]->GetObject("hSFPe",h2);
    h2->Fill(mc_Pe,mc_Ee/mc_Pe);
    DIR["kin_mc"]->GetObject("hthphi_e",h2);
    h2->Fill(mc_phi_e,mc_th_e);
  }
  else{
    DIR["kin"]->GetObject("hNpair",h);
    h->Fill(npart);
    DIR["kin"]->GetObject("hth_e",h);
    h->Fill(th_e);
    DIR["kin"]->GetObject("hQ2x",h2);
    h2->Fill(Xb,Q2);
    DIR["kin"]->GetObject("hSFPe",h2);
    h2->Fill(Pe,Ee/Pe);
    DIR["kin"]->GetObject("hthphi_e",h2);
    h2->Fill(phi_e,th_e);
  }
  return 0;
}

Int_t pionRes_cls::fillPartHistos(int k, Bool_t onMC){
  TH1D *h;
  TH2D *h2;
  TH3D *h3;
  Double_t mpi = 0.13957;
  Double_t Mp = 0.93827;
  Double_t Eb = Nu/y;
  Double_t p1t;
  if (onMC) p1t = sqrt(mc_p1T2[k]);
  else p1t = sqrt(p1T2[k]);

  Double_t z1;
  if (onMC) z1 = mc_pdata_e[k][1]/mc_Nu;
  else z1 = pdata_e[k][1]/Nu;
  Double_t DZ;
  if (onMC) DZ = mc_pdata_e[k][0]/mc_Nu - mc_pdata_e[k][1]/mc_Nu;
  else DZ = pdata_e[k][0]/Nu-pdata_e[k][1]/Nu;

  Double_t trho;
  if (onMC) trho = -(-mc_Q2 + mc_M[k]*mc_M[k]-2*(mc_Eh[k]*mc_Nu+mc_Phx[k]*mc_Pex+mc_Phy[k]*mc_Pey-mc_Phz[k]*(mc_Nu/mc_y-mc_Pez))); 
  else trho = -(-Q2 + M[k]*M[k]-2*(Eh[k]*Nu+Phx[k]*Pex+Phy[k]*Pey-Phz[k]*(Nu/y-Pez))); 
  Double_t dp;
  if (onMC) dp = sqrt((mc_pdata_px[k][0]-mc_pdata_px[k][1])*(mc_pdata_px[k][0]-mc_pdata_px[k][1])+(mc_pdata_py[k][0]-mc_pdata_py[k][1])*(mc_pdata_py[k][0]-mc_pdata_py[k][1])+(mc_pdata_pz[k][0]-mc_pdata_pz[k][1])*(mc_pdata_pz[k][0]-mc_pdata_pz[k][1]));
  else dp = sqrt((pdata_px[k][0]-pdata_px[k][1])*(pdata_px[k][0]-pdata_px[k][1])+(pdata_py[k][0]-pdata_py[k][1])*(pdata_py[k][0]-pdata_py[k][1])+(pdata_pz[k][0]-pdata_pz[k][1])*(pdata_pz[k][0]-pdata_pz[k][1]));
  Double_t xf0,xf1;
  if (onMC){
    xf0 = mc_xFm0[k];
    xf1 = mc_xFm1[k];
  }
  else {
    xf0 = xFm0[k];
    xf1 = xFm1[k];
  }

  Double_t p1_x, p2_x, th1_x, th2_x, phi1_x, phi2_x;
  if (onMC){
    double px, py, pz, e;
    px = -mc_Pex - mc_pdata_px[k][0] - mc_pdata_px[k][2];
    py = -mc_Pey - mc_pdata_py[k][0] - mc_pdata_py[k][2];
    pz = Eb - mc_Pez - mc_pdata_pz[k][0] - mc_pdata_pz[k][2];
    e  = Nu + Mp - mc_pdata_e[k][0] - mc_pdata_e[k][2];
    p1_x = sqrt(px*px + py*py + pz*pz);
    th1_x = TMath::ACos(pz/p1_x)*TMath::RadToDeg();
    phi1_x = TMath::ATan2(py,px)*TMath::RadToDeg();
    
    px = -mc_Pex - mc_pdata_px[k][0] - mc_pdata_px[k][1];
    py = -mc_Pey - mc_pdata_py[k][0] - mc_pdata_py[k][1];
    pz = Eb - mc_Pez - mc_pdata_pz[k][0] - mc_pdata_pz[k][1];
    e  = Nu + Mp - mc_pdata_e[k][0] - mc_pdata_e[k][1];
    p2_x = sqrt(px*px + py*py + pz*pz);
    th2_x = TMath::ACos(pz/p2_x)*TMath::RadToDeg();
    phi2_x = TMath::ATan2(py,px)*TMath::RadToDeg();
  }
  else {
    double px, py, pz, e;
    px = -Pex - pdata_px[k][0] - pdata_px[k][2];
    py = -Pey - pdata_py[k][0] - pdata_py[k][2];
    pz = Eb - Pez - pdata_pz[k][0] - pdata_pz[k][2];
    e  = Nu + Mp - pdata_e[k][0] - pdata_e[k][2];
    p1_x = sqrt(px*px + py*py + pz*pz);
    th1_x = TMath::ACos(pz/p1_x)*TMath::RadToDeg();
    phi1_x = TMath::ATan2(py,px)*TMath::RadToDeg();
    
    px = -Pex - pdata_px[k][0] - pdata_px[k][1];
    py = -Pey - pdata_py[k][0] - pdata_py[k][1];
    pz = Eb - Pez - pdata_pz[k][0] - pdata_pz[k][1];
    e  = Nu + Mp - pdata_e[k][0] - pdata_e[k][1];
    p2_x = sqrt(px*px + py*py + pz*pz);
    th2_x = TMath::ACos(pz/p2_x)*TMath::RadToDeg();
    phi2_x = TMath::ATan2(py,px)*TMath::RadToDeg();
  }  

  Double_t mx21, mx22;
  if (onMC){
    mx21 = (mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])*(mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])-(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])*(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])-(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])*(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])-(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2])*(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2]);
    mx22 = (mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])*(mc_Nu+0.93827-mc_pdata_e[k][0]-mc_pdata_e[k][2])-(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])*(-Pex-mc_pdata_px[k][0]-mc_pdata_px[k][2])-(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])*(-Pey-mc_pdata_py[k][0]-mc_pdata_py[k][2])-(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2])*(mc_Nu/mc_y-Pez-mc_pdata_pz[k][0]-mc_pdata_pz[k][2]);
  }
  
  else {
    mx21 = (Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])*(Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])-(-Pex-pdata_px[k][0]-pdata_px[k][2])*(-Pex-pdata_px[k][0]-pdata_px[k][2])-(-Pey-pdata_py[k][0]-pdata_py[k][2])*(-Pey-pdata_py[k][0]-pdata_py[k][2])-(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2])*(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2]);
    mx22 = (Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])*(Nu+0.93827-pdata_e[k][0]-pdata_e[k][2])-(-Pex-pdata_px[k][0]-pdata_px[k][2])*(-Pex-pdata_px[k][0]-pdata_px[k][2])-(-Pey-pdata_py[k][0]-pdata_py[k][2])*(-Pey-pdata_py[k][0]-pdata_py[k][2])-(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2])*(Nu/y-Pez-pdata_pz[k][0]-pdata_pz[k][2]);
  }  
    
  Double_t th0, phi0, th1, th2, phi1, phi2, th_h, phi_h;
  if (onMC){
    th0 = TMath::ACos(mc_pdata_pz[k][0]/sqrt(mc_pdata_px[k][0]*mc_pdata_px[k][0] + mc_pdata_py[k][0]*mc_pdata_py[k][0] + mc_pdata_pz[k][0]*mc_pdata_pz[k][0]))*TMath::RadToDeg();
    th1 = TMath::ACos(mc_pdata_pz[k][1]/sqrt(mc_pdata_px[k][1]*mc_pdata_px[k][1] + mc_pdata_py[k][1]*mc_pdata_py[k][1] + mc_pdata_pz[k][1]*mc_pdata_pz[k][1]))*TMath::RadToDeg();
    th2 = TMath::ACos(mc_pdata_pz[k][2]/sqrt(mc_pdata_px[k][2]*mc_pdata_px[k][2] + mc_pdata_py[k][2]*mc_pdata_py[k][2] + mc_pdata_pz[k][2]*mc_pdata_pz[k][2]))*TMath::RadToDeg();

    
    th_h = TMath::ACos((mc_pdata_pz[k][0] + mc_pdata_pz[k][1])/sqrt((mc_pdata_px[k][0] +mc_pdata_px[k][1])*(mc_pdata_px[k][0] +mc_pdata_px[k][1]) + (mc_pdata_py[k][0] +mc_pdata_py[k][1])*(mc_pdata_py[k][0] +mc_pdata_py[k][1]) + (mc_pdata_pz[k][0] +mc_pdata_pz[k][1])*(mc_pdata_pz[k][0] +mc_pdata_pz[k][1])))*TMath::RadToDeg();

    phi0 = TMath::ATan2(mc_pdata_py[k][0],mc_pdata_px[k][0])*TMath::RadToDeg();
    phi1 = TMath::ATan2(mc_pdata_py[k][1],mc_pdata_px[k][1])*TMath::RadToDeg();
    phi2 = TMath::ATan2(mc_pdata_py[k][2],mc_pdata_px[k][2])*TMath::RadToDeg();
    phi_h = TMath::ATan2(mc_pdata_py[k][0] + mc_pdata_py[k][1],mc_pdata_px[k][0] + mc_pdata_px[k][1])*TMath::RadToDeg();

  }
  else {
    th0 = TMath::ACos(pdata_pz[k][0]/sqrt(pdata_px[k][0]*pdata_px[k][0] + pdata_py[k][0]*pdata_py[k][0] + pdata_pz[k][0]*pdata_pz[k][0]))*TMath::RadToDeg();
    th1 = TMath::ACos(pdata_pz[k][1]/sqrt(pdata_px[k][1]*pdata_px[k][1] + pdata_py[k][1]*pdata_py[k][1] + pdata_pz[k][1]*pdata_pz[k][1]))*TMath::RadToDeg();
    th2 = TMath::ACos(pdata_pz[k][2]/sqrt(pdata_px[k][2]*pdata_px[k][2] + pdata_py[k][2]*pdata_py[k][2] + pdata_pz[k][2]*pdata_pz[k][2]))*TMath::RadToDeg();
    
    th_h = TMath::ACos((pdata_pz[k][0] + pdata_pz[k][1])/sqrt((pdata_px[k][0] +pdata_px[k][1])*(pdata_px[k][0] +pdata_px[k][1]) + (pdata_py[k][0] +pdata_py[k][1])*(pdata_py[k][0] +pdata_py[k][1]) + (pdata_pz[k][0] +pdata_pz[k][1])*(pdata_pz[k][0] + pdata_pz[k][1])))*TMath::RadToDeg();
    phi0 = TMath::ATan2(pdata_py[k][0],pdata_px[k][0])*TMath::RadToDeg();
    phi1 = TMath::ATan2(pdata_py[k][1],pdata_px[k][1])*TMath::RadToDeg();
    phi2 = TMath::ATan2(pdata_py[k][2],pdata_px[k][2])*TMath::RadToDeg();

    phi_h = TMath::ATan2(pdata_py[k][0] + pdata_py[k][1],pdata_px[k][0] + pdata_px[k][1])*TMath::RadToDeg();

  }
  
  if(options.Contains("pi0")){
    if (onMC){
      p1t = sqrt(((mc_pdata_px[k][1]+mc_pdata_px[k][2])*(mc_pdata_px[k][1]+mc_pdata_px[k][2])+(mc_pdata_py[k][1]+mc_pdata_py[k][2])*(mc_pdata_py[k][1]+mc_pdata_py[k][2])+(mc_pdata_pz[k][1]+mc_pdata_pz[k][2])*(mc_pdata_pz[k][1]+mc_pdata_pz[k][2]))-(-(mc_pdata_px[k][1]+mc_pdata_px[k][2])*mc_Pex-(mc_pdata_py[k][1]+mc_pdata_py[k][2])*mc_Pey+(mc_pdata_pz[k][1]+mc_pdata_pz[k][2])*(mc_Nu/mc_y-mc_Pez))/sqrt(mc_Nu*mc_Nu+mc_Q2)*(-(mc_pdata_px[k][1]+mc_pdata_px[k][2])*mc_Pex-(mc_pdata_py[k][1]+mc_pdata_py[k][2])*mc_Pey+(mc_pdata_pz[k][1]+mc_pdata_pz[k][2])*(mc_Nu/mc_y-mc_Pez))/sqrt(mc_Nu*mc_Nu+mc_Q2));
      z1 = (mc_pdata_e[k][1] + mc_pdata_e[k][2])/mc_Nu;
      DZ = mc_pdata_e[k][0]/mc_Nu-(mc_pdata_e[k][1]+mc_pdata_e[k][2])/mc_Nu;
      dp = sqrt((mc_pdata_px[k][0]-(mc_pdata_px[k][1]+mc_pdata_px[k][2]))*(mc_pdata_px[k][0]-(mc_pdata_px[k][1]+mc_pdata_px[k][2]))+(mc_pdata_py[k][0]-(mc_pdata_py[k][1]+mc_pdata_py[k][2]))*(mc_pdata_py[k][0]-(mc_pdata_py[k][1]+mc_pdata_py[k][2]))+(mc_pdata_pz[k][0]-(mc_pdata_pz[k][1]+mc_pdata_pz[k][2]))*(mc_pdata_pz[k][0]-(mc_pdata_pz[k][1]+mc_pdata_pz[k][2])));
      xf1 = getxF(mc_pdata_e[k][1] + mc_pdata_e[k][2], mc_pdata_px[k][1] + mc_pdata_px[k][2], mc_pdata_py[k][1] + mc_pdata_py[k][2], mc_pdata_pz[k][1] + mc_pdata_pz[k][2]);

      th1 = TMath::ACos((mc_pdata_pz[k][2] + mc_pdata_pz[k][1])/sqrt((mc_pdata_px[k][2] +mc_pdata_px[k][1])*(mc_pdata_px[k][2] +mc_pdata_px[k][1]) + (mc_pdata_py[k][2] +mc_pdata_py[k][1])*(mc_pdata_py[k][2] +mc_pdata_py[k][1]) + (mc_pdata_pz[k][2] +mc_pdata_pz[k][1])*(mc_pdata_pz[k][2] +mc_pdata_pz[k][1])))*TMath::RadToDeg();

      th_h = TMath::ACos((mc_pdata_pz[k][0] + mc_pdata_pz[k][1] + mc_pdata_pz[k][2])/sqrt((mc_pdata_px[k][0] +mc_pdata_px[k][1] + mc_pdata_px[k][2])*(mc_pdata_px[k][0] +mc_pdata_px[k][1] + mc_pdata_px[k][2]) + (mc_pdata_py[k][0] +mc_pdata_py[k][1] + mc_pdata_py[k][2])*(mc_pdata_py[k][0] +mc_pdata_py[k][1] + mc_pdata_py[k][2]) + (mc_pdata_pz[k][0] +mc_pdata_pz[k][1] + mc_pdata_pz[k][2])*(mc_pdata_pz[k][0] +mc_pdata_pz[k][1] + mc_pdata_pz[k][2])))*TMath::RadToDeg();
      phi1 = TMath::ATan2(mc_pdata_py[k][2] + mc_pdata_py[k][1],mc_pdata_px[k][2] + mc_pdata_px[k][1])*TMath::RadToDeg();
      phi_h = TMath::ATan2(mc_pdata_py[k][0] + mc_pdata_py[k][1] + mc_pdata_py[k][2],mc_pdata_px[k][0] + mc_pdata_px[k][1] + mc_pdata_px[k][2])*TMath::RadToDeg();

    }
    else{
      p1t = sqrt(((pdata_px[k][1]+pdata_px[k][2])*(pdata_px[k][1]+pdata_px[k][2])+(pdata_py[k][1]+pdata_py[k][2])*(pdata_py[k][1]+pdata_py[k][2])+(pdata_pz[k][1]+pdata_pz[k][2])*(pdata_pz[k][1]+pdata_pz[k][2]))-(-(pdata_px[k][1]+pdata_px[k][2])*Pex-(pdata_py[k][1]+pdata_py[k][2])*Pey+(pdata_pz[k][1]+pdata_pz[k][2])*(Nu/y-Pez))/sqrt(Nu*Nu+Q2)*(-(pdata_px[k][1]+pdata_px[k][2])*Pex-(pdata_py[k][1]+pdata_py[k][2])*Pey+(pdata_pz[k][1]+pdata_pz[k][2])*(Nu/y-Pez))/sqrt(Nu*Nu+Q2));
      z1 = (pdata_e[k][1] + pdata_e[k][2])/Nu;
      DZ = pdata_e[k][0]/Nu-(pdata_e[k][1]+pdata_e[k][2])/Nu;
      dp = sqrt((pdata_px[k][0]-(pdata_px[k][1]+pdata_px[k][2]))*(pdata_px[k][0]-(pdata_px[k][1]+pdata_px[k][2]))+(pdata_py[k][0]-(pdata_py[k][1]+pdata_py[k][2]))*(pdata_py[k][0]-(pdata_py[k][1]+pdata_py[k][2]))+(pdata_pz[k][0]-(pdata_pz[k][1]+pdata_pz[k][2]))*(pdata_pz[k][0]-(pdata_pz[k][1]+pdata_pz[k][2])));
      xf1 = getxF(pdata_e[k][1] + pdata_e[k][2], pdata_px[k][1] + pdata_px[k][2], pdata_py[k][1] + pdata_py[k][2], pdata_pz[k][1] + pdata_pz[k][2]);
      th1 = TMath::ACos((pdata_pz[k][2] + pdata_pz[k][1])/sqrt((pdata_px[k][2] +pdata_px[k][1])*(pdata_px[k][2] +pdata_px[k][1]) + (pdata_py[k][2] +pdata_py[k][1])*(pdata_py[k][2] +pdata_py[k][1]) + (pdata_pz[k][2] +pdata_pz[k][1])*(pdata_pz[k][2] +pdata_pz[k][1])))*TMath::RadToDeg();
      th_h = TMath::ACos((pdata_pz[k][0] + pdata_pz[k][1] + pdata_pz[k][2])/sqrt((pdata_px[k][0] +pdata_px[k][1] + pdata_px[k][2])*(pdata_px[k][0] +pdata_px[k][1] + pdata_px[k][2]) + (pdata_py[k][0] +pdata_py[k][1] + pdata_py[k][2])*(pdata_py[k][0] +pdata_py[k][1] + pdata_py[k][2]) + (pdata_pz[k][0] +pdata_pz[k][1] + pdata_pz[k][2])*(pdata_pz[k][0] +pdata_pz[k][1] + pdata_pz[k][2])))*TMath::RadToDeg();
      phi1 = TMath::ATan2(pdata_py[k][2] + pdata_py[k][1],pdata_px[k][2] + pdata_px[k][1])*TMath::RadToDeg();
      phi_h = TMath::ATan2(pdata_py[k][0] + pdata_py[k][1] + pdata_py[k][2],pdata_px[k][0] + pdata_px[k][1] + pdata_px[k][2])*TMath::RadToDeg();

    }
  }
  //phi0 = (phi0<0)?phi0+360:phi0;
  //phi1 = (phi1<0)?phi1+360:phi1;
  //phi_h = (phi_h<0)?phi_h+360:phi_h;
  TDirectory *d;
  if (onMC){ 
    d = DIR["kin_mc"];
    d->GetObject("hM",h);
    h->Fill(mc_M[k]);
    d->GetObject("hMx1",h);
    h->Fill(mx21);
    d->GetObject("hMx2",h);
    h->Fill(mx22);

    d->GetObject("hz",h);
    h->Fill(mc_Z[k]);
    d->GetObject("hz0",h);
    h->Fill(mc_pdata_e[k][0]/mc_Nu);
    d->GetObject("hz1",h);
    h->Fill(z1);

    d->GetObject("hxF1xF0",h2);
    h2->Fill(xf0, xf1);

    d->GetObject("hthphi_0",h2);
    h2->Fill(phi0,th0);

    d->GetObject("hthphi_1",h2);
    h2->Fill(phi1,th1);

    d->GetObject("hthphi_h",h2);
    h2->Fill(phi_h,th_h);

    d->GetObject("hz1z0",h2);
    h2->Fill(mc_pdata_e[k][0]/mc_Nu, z1);

    d->GetObject("hpT1pT0",h2);
    h2->Fill(sqrt(mc_p0T2[k]), p1t);

    d->GetObject("hpT",h);
    h->Fill(sqrt(mc_Pt2[k]));
    d->GetObject("hpT0",h);
    h->Fill(sqrt(mc_p0T2[k]));
    d->GetObject("hpT1",h);
    h->Fill(p1t);

    // dp - t
    d->GetObject("hdpt",h2);
    h2->Fill(trho,dp);

    // dp - dz
    d->GetObject("hdpdz",h2);
    h2->Fill(DZ,dp);

    // dp - m
    d->GetObject("hdpm",h2);
    h2->Fill(mc_M[k],dp);

    // dp - mx
    d->GetObject("hdpmx",h2);
    h2->Fill(sqrt(mc_Mx2[k]),dp);

    // mx - m
    d->GetObject("hmxm",h2);
    h2->Fill(mc_M[k],sqrt(mc_Mx2[k]));

    // mx - dz
    d->GetObject("hmxdz",h2);
    h2->Fill(DZ,sqrt(mc_Mx2[k]));

    // t - dz
    d->GetObject("htdz",h2);
    h2->Fill(DZ,trho);

    // mx - t
    d->GetObject("hmxt",h2);
    h2->Fill(trho,sqrt(mc_Mx2[k]));

    //z - m
    d->GetObject("hzm",h2);
    h2->Fill(mc_M[k],mc_Z[k]);

    //m - dz
    d->GetObject("hmdz",h2);
    h2->Fill(DZ,mc_M[k]);

    //z0 - dz
    d->GetObject("hz0dz",h2);
    h2->Fill(DZ,mc_pdata_e[k][0]/mc_Nu);

    //z1 - dz
    d->GetObject("hz1dz",h2);
    h2->Fill(DZ,z1);

    //z - dz
    d->GetObject("hzdz",h2);
    h2->Fill(DZ,mc_Z[k]);

    //pt - dz
    d->GetObject("hptdz",h2);
    h2->Fill(DZ,sqrt(mc_Pt2[k]));

    //pt - z
    d->GetObject("hptz",h2);
    h2->Fill(mc_Z[k],sqrt(mc_Pt2[k]));

    //pt2 - z
    d->GetObject("hpt2z",h2);
    h2->Fill(mc_Z[k],mc_Pt2[k]);

    //pt0 - z0
    d->GetObject("hpt0z0",h2);
    h2->Fill(mc_pdata_e[k][0]/mc_Nu,sqrt(mc_p0T2[k]));

    //pt1 - z1
    d->GetObject("hpt1z1",h2);
    h2->Fill(z1,p1t);

    //Q2 - x for hadrons
    d->GetObject("hQ2x_h",h2);
    h2->Fill(mc_Xb,mc_Q2);

    //x - z
    d->GetObject("hxz",h2);
    h2->Fill(mc_Z[k],mc_Xb);
    
  }
  else{
    d = DIR["kin"];
    
    d->GetObject("hM",h);
    h->Fill(M[k]);
    d->GetObject("hMx1",h);
    h->Fill(mx21);
    d->GetObject("hMx2",h);
    h->Fill(mx22);
    d->GetObject("hz",h);
    h->Fill(Z[k]);
    d->GetObject("hz0",h);
    h->Fill(pdata_e[k][0]/Nu);
    d->GetObject("hz1",h);
    h->Fill(z1);

    d->GetObject("hxF1xF0",h2);
    h2->Fill(xf0, xf1);

    d->GetObject("hthphi_0",h2);
    h2->Fill(phi0,th0);

    d->GetObject("hthphi_1",h2);
    h2->Fill(phi1,th1);

    d->GetObject("hthphi_h",h2);
    h2->Fill(phi_h,th_h);

    d->GetObject("hz1z0",h2);
    h2->Fill(pdata_e[k][0]/Nu, z1);

    d->GetObject("hpT1pT0",h2);
    h2->Fill(sqrt(p0T2[k]), p1t);

    d->GetObject("hpT",h);
    h->Fill(sqrt(Pt2[k]));
    d->GetObject("hpT0",h);
    h->Fill(sqrt(p0T2[k]));
    d->GetObject("hpT1",h);
    h->Fill(p1t);

    // dp - t
    d->GetObject("hdpt",h2);
    h2->Fill(trho,dp);

    // dp - dz
    d->GetObject("hdpdz",h2);
    h2->Fill(DZ,dp);

    // dp - m
    d->GetObject("hdpm",h2);
    h2->Fill(M[k],dp);

    // dp - mx
    d->GetObject("hdpmx",h2);
    h2->Fill(sqrt(Mx2[k]),dp);

    // mx - m
    d->GetObject("hmxm",h2);
    h2->Fill(M[k],sqrt(Mx2[k]));

    // mx - dz
    d->GetObject("hmxdz",h2);
    h2->Fill(DZ,sqrt(Mx2[k]));

    // t - dz
    d->GetObject("htdz",h2);
    h2->Fill(DZ,trho);

    // mx - t
    d->GetObject("hmxt",h2);
    h2->Fill(trho,sqrt(Mx2[k]));

    //z - m
    d->GetObject("hzm",h2);
    h2->Fill(M[k],Z[k]);

    //m - dz
    d->GetObject("hmdz",h2);
    h2->Fill(DZ,M[k]);

    //z0 - dz
    d->GetObject("hz0dz",h2);
    h2->Fill(DZ,pdata_e[k][0]/Nu);

    //z1 - dz
    d->GetObject("hz1dz",h2);
    h2->Fill(DZ,z1);

    //z - dz
    d->GetObject("hzdz",h2);
    h2->Fill(DZ,Z[k]);

    //pt - dz
    d->GetObject("hptdz",h2);
    h2->Fill(DZ,sqrt(Pt2[k]));

    //pt - z
    d->GetObject("hptz",h2);
    h2->Fill(Z[k],sqrt(Pt2[k]));

    //pt2 - z
    d->GetObject("hpt2z",h2);
    h2->Fill(Z[k],Pt2[k]);


    //pt0 - z0
    d->GetObject("hpt0z0",h2);
    h2->Fill(pdata_e[k][0]/Nu,sqrt(p0T2[k]));

    //pt1 - z1
    d->GetObject("hpt1z1",h2);
    h2->Fill(z1,p1t);

    //Q2 - x for hadrons
    d->GetObject("hQ2x_h",h2);
    h2->Fill(Xb,Q2);

    //x - z
    d->GetObject("hxz",h2);
    h2->Fill(Z[k],Xb);

    ///// rec vs excl.
    //p1 - p1_X
    d->GetObject("hp1p1X",h2);
    h2->Fill(p1_x,sqrt(pdata_e[k][1]*pdata_e[k][1] - mpi*mpi));

    //p2 - p2_X
    d->GetObject("hp2p2X",h2);
    h2->Fill(p2_x,sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi));
    
    //th1 - th1_X
    d->GetObject("hth1th1X",h2);
    h2->Fill(th1_x,th1);

    //th2 - th2_X
    d->GetObject("hth2th2X",h2);
    h2->Fill(th2_x,th2);

    //phi1 - phi1_X
    d->GetObject("hphi1phi1X",h2);
    h2->Fill(phi1_x,phi1);

    //phi2 - phi2_X
    d->GetObject("hphi2phi2X",h2);
    h2->Fill(phi2_x,phi2);

    //Diff p1 - p1_X.
    //pdep
    d->GetObject("hdppX1P",h2);
    h2->Fill(sqrt(pdata_e[k][1]*pdata_e[k][1] - mpi*mpi), p1_x  - sqrt(pdata_e[k][1]*pdata_e[k][1] - mpi*mpi));
    d->GetObject("hdppX1th",h2);
    h2->Fill(th1, p1_x  - sqrt(pdata_e[k][1]*pdata_e[k][1] + mpi*mpi));
    d->GetObject("hdppX1phi",h2);
    h2->Fill(phi1, p1_x  - sqrt(pdata_e[k][1]*pdata_e[k][1] + mpi*mpi));

    //Diff th1 - th1_X.
    //pdep
    d->GetObject("hdthX1P",h2);
    h2->Fill(sqrt(pdata_e[k][1]*pdata_e[k][1] - mpi*mpi), th1_x - th1);
    d->GetObject("hdthX1th",h2);
    h2->Fill(th1,  th1_x - th1);
    d->GetObject("hdthX1phi",h2);
    h2->Fill(phi1,  th1_x - th1);

    //Diff phi1 - phi1_X.
    //pdep
    d->GetObject("hdphiX1P",h2);
    h2->Fill(sqrt(pdata_e[k][1]*pdata_e[k][1] - mpi*mpi), phi1_x - phi1);
    d->GetObject("hdphiX1th",h2);
    h2->Fill(th1,  phi1_x - phi1);
    d->GetObject("hdphiX1phi",h2);
    h2->Fill(phi1,  phi1_x - phi1);


    //Diff p2 - p2_X.
    //pdep
    d->GetObject("hdppX2P",h2);
    h2->Fill(sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi), p2_x  - sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi));
    d->GetObject("hdppX2th",h2);
    h2->Fill(th2, p2_x  - sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi));
    d->GetObject("hdppX2phi",h2);
    h2->Fill(phi2, p2_x  - sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi));

    //Diff th2 - th2_X.
    //pdep
    d->GetObject("hdthX2P",h2);
    h2->Fill(sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi), th2_x - th2);
    d->GetObject("hdthX2th",h2);
    h2->Fill(th2,  th2_x - th2);
    d->GetObject("hdthX2phi",h2);
    h2->Fill(phi2,  th2_x - th2);

    //Diff phi2 - phi2_X.
    //pdep
    d->GetObject("hdphiX2P",h2);
    h2->Fill(sqrt(pdata_e[k][2]*pdata_e[k][2] - mpi*mpi), phi2_x - phi2);
    d->GetObject("hdphiX2th",h2);
    h2->Fill(th2,  phi2_x - phi2);
    d->GetObject("hdphiX2phi",h2);
    h2->Fill(phi2,  phi2_x - phi2);

    
    //    if ( (MMCut(k,kTRUE) && rhoCut(k,kTRUE) && CF(k,kTRUE) && minEnergy(k,kTRUE) && pi0PID(k,kTRUE) && DZCut(k,kTRUE)) ){ // MC check
    if ( kTRUE ){ // MC check
      Double_t Ppip = sqrt(pdata_e[k][0]*pdata_e[k][0]-0.13957*0.13957), Ppim = sqrt(pdata_e[k][1]*pdata_e[k][1]-0.13957*0.13957),
	mc_Ppip = sqrt(mc_pdata_e[k][0]*mc_pdata_e[k][0]-0.13957*0.13957), mc_Ppim = sqrt(mc_pdata_e[k][1]*mc_pdata_e[k][1]-0.13957*0.13957);
      d->GetObject("hzPpipPpim_RS",h3);
      h3->Fill(Ppim,Ppip,Z[k]);
      d->GetObject("hzPpipPpim_IN",h3);
      if (h3->FindBin(Ppim,Ppip,Z[k]) == h3->FindBin(mc_Ppim,mc_Ppip,mc_Z[k])){
	h3->Fill(Ppim,Ppip,Z[k]);
      }
      else{
	d->GetObject("hzPpipPpim_OUT",h3);
	h3->Fill(mc_Ppim,mc_Ppip,mc_Z[k]);
	d->GetObject("hzPpipPpim_EXT",h3);
	h3->Fill(Ppim,Ppip,Z[k]);
      }

      if (bedg.count("pt2") != 0){
	d->GetObject("hpt2zm_RS",h3);
	h3->Fill(M[k],Z[k],Pt2[k]);
	d->GetObject("hpt2zm_IN",h3);
	if (h3->FindBin(M[k],Z[k],Pt2[k]) == h3->FindBin(mc_M[k],mc_Z[k],mc_Pt2[k])){
	  h3->Fill(M[k],Z[k],Pt2[k]);
	}
	else{
	  d->GetObject("hpt2zm_OUT",h3);
	  h3->Fill(mc_M[k],mc_Z[k],mc_Pt2[k]);
	  d->GetObject("hpt2zm_EXT",h3);
	  h3->Fill(M[k],Z[k],Pt2[k]);
	}

	///small bin
	d->GetObject("hpt2zm_RS_small",h3);
	h3->Fill(M[k],Z[k],Pt2[k]);
	d->GetObject("hpt2zm_IN_small",h3);
	if (h3->FindBin(M[k],Z[k],Pt2[k]) == h3->FindBin(mc_M[k],mc_Z[k],mc_Pt2[k])){
	  h3->Fill(M[k],Z[k],Pt2[k]);
	}
	else{
	  d->GetObject("hpt2zm_OUT_small",h3);
	  h3->Fill(mc_M[k],mc_Z[k],mc_Pt2[k]);
	  d->GetObject("hpt2zm_EXT_small",h3);
	  h3->Fill(M[k],Z[k],Pt2[k]);
	}
      }
    }
  }

  return 0;

}
#endif // #ifdef pionRes_cls_cxx
