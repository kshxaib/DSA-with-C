#include <stdio.h>
#include <stdlib.h>

void checkSum(){
    int A[10] = {6,3,8,10,16,7,5,2,9,14};
    int n = 10;
    int k = 10; 
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(A[i] + A[j] == k){
                printf("%d + %d = %d\n", A[i], A[j], k);
            }
        }
    }
}

void checkSumUsingHash(){
    int A[10] = {6,3,8,10,16,7,5,2,9,14};
    int n = 10;
    int k = 10; 
    int H[17] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0; i<n; i++){
        if(k - A[i] >= 0 && H[k-A[i]] != 0){
            printf("%d + %d = %d\n", A[i], k-A[i], k);
        }
        H[A[i]]++;
    }
}


int main(){
    checkSum();
    checkSumUsingHash();

    return 0;
}