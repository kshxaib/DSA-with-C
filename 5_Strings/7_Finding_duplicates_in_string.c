#include <stdio.h>
#include <stdlib.h>


void method1() {
    char A[] = "fiiinnding";
    int i, j;

    for(i = 0; i < 9; i++) {
        if(A[i] == A[i+1]) {
            j = i + 1;
            while(j < 9 && A[j] == A[j+1]) j++;
            printf("%c appears %d times consecutively \n", A[i], j-i-1);
            i = j;
        }
    }
}

void findingDuplicateUsingHashing() {
    char A[] = "finding";
    int H[26] = {0};
    int i;

    for(i=0; A[i] != '\0'; i++){
        H[A[i] - 97]++;
    }

    for(i=0; i<26; i++){
        if(H[i] > 1){
            printf("%c appears %d times\n", i+97, H[i]);
        }
    }
}

void findingDuplicateUsingBitwise(){
    char A[] = "finding";
    int H=0, x=0;

    for(int i=0; A[i] != '\0'; i++){
        x = 1;
        x = x << (A[i] - 97);
        if((H & x) > 0){
            printf("%c appears more than once\n", A[i]);
        } else {
            H = H | x;
        }
    }
}


int main(){
    // method1();

    // findingDuplicateUsingHashing();
    findingDuplicateUsingBitwise();
    return 0;
}