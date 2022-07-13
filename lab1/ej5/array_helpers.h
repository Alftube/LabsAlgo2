#include "mybool.h"
//#include <stdbool.h>
#ifndef array_helpers_h
#define array_helpers_h


void array_dump(int a[], unsigned int length);

unsigned int array_from_file(int array[],
           unsigned int max_size,
           const char *filepath);


mybool array_is_sorted(int a[], unsigned int length);
#endif