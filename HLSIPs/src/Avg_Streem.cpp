#include "Avg_Streem.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif

void avg_streem_hw(hls::stream<ap_int<16>> &in_A,  hls::stream<ap_int<16>> &out_hw_A ) {
  #pragma HLS ARRAY_PARTITION variable=outA complete
  #pragma HLS pipeline II=2
  ap_int<16> x = 0;
  hls::stream<ap_int<16>> tmp_Avg;
  for(int i=0; i<N_INPUTS; i++){
    #pragma HLS PIPELINE II=1
    x += inA[i];
  }
  tmp_Avg = (x/N_INPUTS) * 0.5;
  outA.write(tmp_Avg);
}
