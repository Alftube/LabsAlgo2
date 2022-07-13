#include "array_helpers.h"
#include <stdio.h>
#include <stdbool.h>


void array_dump(int a[], unsigned int length) {
    //your code here!!!
    printf("[");
    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d",a[i]);
        if (i != length -1)
        {
            printf(", ");
        }
        
    }
    printf("] \n");
    
    
}



unsigned int array_from_file(int array[],
           unsigned int max_size,
           const char *filepath) {
    //your code here!!!
    unsigned int length = max_size;
    int value;
    FILE *fp;
    fp = fopen(filepath,"r");
    fscanf(fp, "%u", &length); //fp es puntero al archivo(de tipo file)
    for (unsigned int i = 0; i < length; i++)
    {
        fscanf(fp, "%d", &value);
        array[i] = value;
    }
    fclose(fp);

    return length;
    

}

bool array_is_sorted(int a[], unsigned int length)
{
    for (unsigned int i = 0; i < length -1; i++)
    {
        if (a[i]>a[i+1])
        {
            return false;
        }
        
        
    }
    return true;
}


void array_swap (int a[], unsigned int i, unsigned int j) 
{
    int tmp; 
    tmp= a[i];
    a[i]= a[j];
    a[j]= tmp;
}



