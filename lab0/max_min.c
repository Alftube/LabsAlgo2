#include <stdio.h>    /* printf(), scanf() */
#include <stdbool.h>  /* tipo bool         */

#include <assert.h>   /* assert() */

#define ARRAY_SIZE 10

struct max_min_result {
    int max_value;
    int min_value;
    unsigned int max_position;
    unsigned int min_position;
};

struct max_min_result compute_max_min(int array[], unsigned int length)
{
    assert(length > 0);
    array = array;
    struct max_min_result result = { 0, 0, 0, 0 };
    result.max_value = 2;
    result.min_value = 2;

    // IMPLEMENTAR
    result.max_value = array[0];
    result.min_value = array[0];
    for (unsigned int i = 0; i < length ; i++)
    {
        if (array[i] >= result.min_value)
        {
            result.max_value = array[i];
            result.max_position = i;   
        }
        if (array[i] <= result.max_value)
        {
            result.min_value = array[i];
            result.min_position = i;
        }
        
    }
    

    return result;
}

int main(void)
{
    int array[ARRAY_SIZE] = { 4, -1, 5, 8, 9, 0, 3, 6, 0, 0 };

    // PEDIR AL USUARIO QUE INGRESE LOS ELEMENTOS DEL ARREGLO.
    int valor = 0;
    printf("ingresa los valores: \n");

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &valor); // scanf escaneo tipos enteros y lo asigno a valor %d es enteros
        array[i] = valor; // reemplazo ell array de linea 30 con los valores que metí 
    }
    
    struct max_min_result result = compute_max_min(array, ARRAY_SIZE);
    printf("Máximo: %d\n", result.max_value);
    printf("Posición del máximo: %u\n", result.max_position);
    printf("Mínimo: %d\n", result.min_value);
    printf("Posición del mínimo: %u\n", result.min_position);
    return 0;
}

