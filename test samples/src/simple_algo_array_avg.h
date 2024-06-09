#ifndef SIMPLE_ALGO_ARRAY_AVG_H
#define SIMPLE_ALGO_ARRAY_AVG_H

#define N_INPUTS  100
#include "ap_int.h"

void simple_algo_array_ref_avg(ap_int<16> inA[N_INPUTS],  ap_int<16> &outA );
void simple_algo_array_hw_avg(ap_int<16> inA[N_INPUTS],  ap_int<16> &outA );

#endif
