#include <stdbool.h>

void array_dump(int a[], unsigned int length);

unsigned int array_from_file(int array[],
           unsigned int max_size,
           const char *filepath);


bool array_is_sorted(int a[], unsigned int length);

void array_swap (int a[], unsigned int i, unsigned int j);