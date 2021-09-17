#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "../task3/math.c"
#include "array.c"

void print_array(int* array, int len){
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%d;", array[i]);
    }
    printf("]\n");
}

void print_arrayf(float * array, int len){
    printf("[");
    for(int i= 0; i < len; i++){
        printf("%f;", array[i]);
    }
    printf("]\n");
}

/*
 * Notre point d'entrée habituel.
 * Maintenant nous pouvons reconnaître que c'est une fonction, 
 * comme les autres, c'est seulement la première appelée:
 */
int main(int nargs, char** args) {
    int len_a = 7;
    int* a = malloc(len_a*sizeof(int));
    a[0] = 3;
    a[1] = 1;
    a[2] = 6;
    a[3] = 5;
    a[4] = 7;
    a[5] = 4;
    a[6] = 8;
    print_array(a, len_a);

    int len_b = 7;
    int* b = malloc(len_b*sizeof(int));

    printf("array_sum(a, 0, 7) = %i\n",array_sum(a, 0, 7));
    printf("array_average(a, 0, 7) = %i\n",array_average(a, 0, 7));
    printf("array_copy(b, 0, a, 0, 7)");
    array_copy(b, 0, a, 0, 7);
    print_array(b,7);
    printf("array_sort(a, 7)");
    array_sort(a, 7);
    print_array(a,7);
    printf("\n");

    int len_af = 7;
    float *af = malloc(len_a*sizeof(float ));
    af[0] = 3;
    af[1] = 1;
    af[2] = 6;
    af[3] = 5;
    af[4] = 7;
    af[5] = 4;
    af[6] = 8;
    print_arrayf(af, len_af);

    int len_bf = 7;
    float *bf = malloc(len_bf*sizeof(float ));

    printf("array_sumf(af, 0, 7) = %f\n",array_sumf(af, 0, 7));
    printf("array_averagef(af, 0, 7) = %f\n",array_averagef(af, 0, 7));
    printf("array_copyf(bf, 0, af, 0, 7)");
    array_copyf(bf, 0, af, 0, 7);
    print_arrayf(bf,7);
    printf("array_sortf(af, 7)");
    array_sortf(af, 7);
    print_arrayf(af,7);

    printf("All tests passed !\n");
  return 0; 
}
