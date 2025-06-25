#include <stdio.h>
#include <stdlib.h>

void findDuplicate(){
    int A[10] = {8,3,6,4,6,5,6,8,2,7};
    int n = 10;
    int count = 0; 
    for(int i=0; i<n-1; i++){
        count = 1;

        if(A[i] != -1){
            for(int j=i+1; j<n; j++){
                if(A[j] == A[i]){
                count++;
                A[j] = -1;
                }
            }

            if(count > 1){
            printf("%d appears %d times\n", A[i], count);
            }
        }
    }
}

void findDuplicateUsingHash(){
    int A[10] = {8,3,6,4,6,5,6,8,2,7};
    int H[9] = {0,0,0,0,0,0,0,0,0};
    int n = 10;

    for(int i=0; i<n; i++){
        H[A[i]]++;
    }

    for(int i=0; i<n-1; i++){
        if(H[i] > 1){
            printf("%d appears %d times\n", i, H[i]);
        }
    }
}

int main(){
    findDuplicate();
    findDuplicateUsingHash();

    return 0;
}