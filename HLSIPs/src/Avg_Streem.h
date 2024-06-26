#ifndef AVG_STREEM_H
#define AVG_STREEM_H

#define N_INPUTS  100
#include "ap_int.h"
#include "hls_stream.h"

void avg_streem_ref(ap_int<16> inA[N_INPUTS],  ap_int<16> &outA );
void avg_streem_hw(hls::stream<ap_int<16>> &in_A,  hls::stream<ap_int<16>> &out_hw_A );

#endif
