//Vector implementation using array
#include "vector.h"
/*#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE 1

typedef int ret_t;
typedef int data_t;
typedef int bool;
typedef struct dynamic_array {
    int *a;
    size_t N;
}vector_t;

void* xcalloc(size_t nr_elements, size_t size_per_element) {
    void *p = NULL;

    p = calloc(nr_elements, size_per_element);
    if(p == NULL) {
        fprintf(stderr, "calloc:fatal: out of memory");
        exit(EXIT_FAILURE);
    }
    return p;
}

vector_t* create_vector() {
    vector_t *p_vec = (vector_t*)xcalloc(1, sizeof(vector_t));
    int *a = NULL;
    p_vec->N = 0;
    p_vec->a = a;
    return p_vec;
}
ret_t push_back(vector_t* p_vec, data_t new_data) {
    int old_size = p_vec->N, i;
    int *new_arr = (int*)xcalloc(old_size + 1, sizeof(int)); 
    int *old_arr = p_vec->a;
    for(i = 0; i < old_size; i++) 
        new_arr[i] = p_vec->a[i];
    
    new_arr[old_size] = new_data;
    p_vec->a = new_arr;
    p_vec->N = old_size + 1;
    free (old_arr); 
    return SUCCESS;
}

void show_vector(vector_t* p_vec) {
    printf(" Vector is - |");
    for(int i = 0; i <p_vec->N; i++)
        printf(" %d |", p_vec->a[i]);
    printf("\n");
}*/

//ret_t destroy_vector(vector_t* p_vec);

void main() {
    vector_t *p_vec = create_vector();

    push_back(p_vec, 10);
    push_back(p_vec, 20);
    show_vector(p_vec);
}