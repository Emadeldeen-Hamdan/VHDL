#include <cmath>
#include <algorithm>
#include "ap_int.h"
#include "src/simple_algo_array_avg.h"

void simple_algo_array_ref_avg(ap_int<16> inA[N_INPUTS], ap_int<16> &outA ) {

  ap_int<16> x = 0;
  for(int i=0; i<N_INPUTS; i++){
    x += inA[i];
  }
  outA = (x/N_INPUTS) / 5;
}

