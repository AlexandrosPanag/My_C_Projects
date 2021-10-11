#include "data_to_png.h"
#include <omp.h>

int main() {
	#pragma omp parallel
   {
	data_to_png("results.out", "results.png");
	return 0;
   }
}