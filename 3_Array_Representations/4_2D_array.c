#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int A[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}; // Normal method

    int *B[3];   // array of integer pointer
    int **C;     // double pointer
    for(i=0; i<3; i++){
        B[i] = (int *)malloc(4 * sizeof(int));
    }

    C = (int **)malloc(3 * sizeof(int *));
    for(i=0; i<3; i++){
        C[i] = (int *)malloc(4 * sizeof(int));
    }

    return 0;
}