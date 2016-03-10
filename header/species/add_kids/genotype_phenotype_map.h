#ifndef GENOTYPE_PHENOTYPE_MAP
#define GENOTYPE_PHENOTYPE_MAP

#include "inds.h"
#include "genotype_phenotype_map_parameters.h"

//virtual interface

class GenotypePhenotypeMap
{
	public:
/* use a factory method */
		static GenotypePhenotypeMap *create_genotype_phenotype_map(inds *species, int phenotype_index, int index_case, int num_kids);
	
		virtual void calculate_phenotype(inds *species)=0;

	protected:
		GenotypePhenotypeMapParameters *Parameters;

		int phenotype_index;
		int index_case;
		int num_kids;

		curandGenerator_t gen;		
};

#endif
