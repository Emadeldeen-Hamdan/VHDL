#include <cmath>
#include <algorithm>
#include "ap_int.h"
#include "src/Avg_Streem.h"

void avg_streem_ref(ap_int<16> inA[N_INPUTS], ap_int<16> &outA ) {

  ap_int<16> x = 0;
  for(int i=0; i<N_INPUTS; i++){
    x += inA[i];
  }
  outA = (x/N_INPUTS) * 0.5;
}

