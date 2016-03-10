#ifndef SAMPLE_WITH_REPLACEMENT_H
#define SAMPLE_WITH_REPLACEMENT_H

#include <iostream>
#include <stdio.h>
#include <thrust/host_vector.h>
#include "sampling_event.h"

class Sample_With_Replacement : public SamplingEvent
	{
	public:
		Sample_With_Replacement(SamplingInput *sampling_input, curandGenerator_t gen )
			{
			this->sampling_input = sampling_input;
			this->gen = gen;
			}
	
	void sample();
	};

#endif
