#include <stdio.h>
#include <stdlib.h>


void method1() {
    char A[] = "fiiinnding";
    int i, j, k;

    for(i = 0; i < 9; i++) {
        if(A[i] == A[i+1]) {
            j = i + 1;
            while(j < 9 && A[j] == A[j+1]) j++;
            printf("%c appears %d times consecutively\n", A[i], j-i-1);
            i = j;
        }
    }
}


int main(){
    method1();
    return 0;
}