#include <stdio.h>

int main (){
    int A[10] = {5,8,3,9,6,2,10,7,-1,4};
    int n=10;
    int max = A[0];
    int min = A[0];
    for(int i=1; i<n; i++){
        if(A[i] < min){
            min = A[i];
        } else if(A[i] > max){
            max = A[i];
        }
    }

    printf("Maximum: %d and Minimum: %d", max, min);
}

