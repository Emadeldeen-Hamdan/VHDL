#include "simple_algo_array_avg.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif

void simple_algo_array_hw_avg(ap_int<16> inA[N_INPUTS],  ap_int<16> &outA) {
#pragma HLS RESOURCE variable=inA core=RAM_1P_BRAM
  ap_int<16> x = 0;
  for(int i=0; i<N_INPUTS; i++){
    x += inA[i];
  }
  outA = (x/N_INPUTS) / 5;
}
