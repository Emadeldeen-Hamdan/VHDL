#include <cstdio>
#include "src/simple_algo_array_avg.h"
#include "ap_int.h"

int main() {
	
  ap_int<16> inA[N_INPUTS];
  ap_int<16> outA = 0;
  
  
  for (int test = 0; test < N_OUTPUTS; ++test) {
    inA[test]=test;
    
  }
  simple_algo_array_ref_avg(inA,outA);
  simple_algo_array_hw_avg(inA,outA);
  
  for (int t=0; t<N_OUTPUTS; ++t){
    printf( "test input: %i  \n",int(inA[t]));
  }
  printf( "test output: %i \n", int(outA));
  return 0;
}
