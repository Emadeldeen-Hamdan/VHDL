#include <cstdio>
#include "src/simple_algo_array_avg.h"
#include "ap_int.h"

int main() {
	
  ap_int<16> inA[N_INPUTS];
  ap_int<16> outA = 0;
  hls::stream<ap_int<16>> in_A;
  hls::stream<ap_int<16>> out_hw_A=0;
  
  for (int test = 0; test < N_INPUTS; ++test) {
    inA[test]=test;
    in_A.write(inA);
    
  }

  avg_streem_ref(inA,outA);
  avg_streem_hw(in_A, out_hw_A);
  
  for (int t=0; t<N_INPUTS; ++t){
    printf( "test input: %i  \n",int(inA[t]));
  }
  printf( "test output: %i \n", int(outA));
  return 0;
}
