#ifndef NEURON_H  //if not define//test whether NEURON_H had been defined before
#define NEURON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

typedef struct neuron_t
{
	float actv;
	float *out_weights;  //out_weights is a pointer to the type float
	float bias;
	float z;

	float dactv;
	float *dw;
	float dbias;
	float dz;

	// TODO: Add function pointer for destructor

} neuron;

neuron create_neuron(int num_out_weights);

#endif
