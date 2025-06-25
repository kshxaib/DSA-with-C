#include <stdio.h>
#include <stdlib.h>

void duplicate(){
    int A[10] = {3,6,8,8,10,12,15,15,15,20};
    int lastDuplicate = 0;

    for(int i=0; i<9; i++){
        if(A[i] == A[i+1]){
            if(lastDuplicate != A[i]){
                lastDuplicate = A[i];
                printf("%d\n", A[i]);
            }
        }
    }
}


void countDuplicate() {
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int j;

    for(int i = 0; i < 9; i++) {
        if(A[i] == A[i+1]) {
            j = i + 1;
            while(j < 9 && A[j] == A[j+1]) j++;
            printf("%d appears %d times\n", A[i], j - i + 1);
            i = j;  // Skip counted duplicates
            printf("I: %d\n", i); 
        }
    }
}

int main(){
    // duplicate();
    countDuplicate();

    return 0;
}