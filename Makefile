.DELETE_ON_ERROR:

ROOTCFLAGS  := $(shell root-config --cflags)
ROOTLDFLAGS := $(shell root-config --ldflags)
ROOTLIBS    := $(shell root-config --libs) -lEG
ROOTGLIBS   := $(shell root-config --glibs)

INC_DIR   := -I.

CXX       := g++
CXXFLAGS  += -Wall -fPIC $(ROOTCFLAGS) -std=c++11 #-g -O0
LD        := g++
LDFLAGS   := $(ROOTLDFLAGS)

AR	  = ar
ARFLAGS	  = -cvr #create,verbose,quick (don't check for replacement, otherwise use r instead)

all: checkdirs slib/libpionRes_cls.so run_pionRes

checkdirs: dict slib

dict slib:
	@mkdir -p $@

%: %.o
	$(CXX) -o $@ $< $(ROOTCFLAGS) $(ROOTLDFLAGS) $(ROOTLIBS) -Lslib -lpionRes_cls 

%.o: %.cxx 
	$(CXX) $(CXXFLAGS) -c -o $@ $< $(ROOTCFLAGS) $(INC_DIR)

run_pionRes: run_pionRes.o
	$(CXX) -o $@ $< $(ROOTCFLAGS) $(ROOTLDFLAGS) $(ROOTLIBS) -Lslib -lpionRes_cls

run_pionRes.o: run_pionRes.cxx 
	$(CXX) $(CXXFLAGS) -c -o $@ $< $(ROOTCFLAGS) $(INC_DIR)

dict/dictBM.cxx: pionRes_cls.h 
	rootcling -f $@ -c $(ROOTCFLAGS) $(HIPOCFLAGS) -p $^

slib/libpionRes_cls.so: pionRes_cls.cxx
	g++ -shared -fPIC -o $@ $(ROOTLDFLAGS) $(ROOTCFLAGS) $(HIPOCFLAGS) $(INC_DIR) $(ROOTCFLAGS) $^ #-g -O0

#	cp dict/datadict_rdict.pcm slib/.
