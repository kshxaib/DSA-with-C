#include <stdlib.h>
#include <stdio.h>

void method1(){     //By creating a new Array
    char A[] = "python";
    char B[7];
    int i;
    int j;
    for(i=0; A[i] != '\0'; i++){
    }
    i = i-1;

    for(j=0; i>=0; i--,j++){
        B[j] = A[i];
    }
    B[j] = '\0';
    printf("Reversed string: %s\n", B);
}

void method2(){
    char A[] = "python";
    int i,j;
    char temp;
    for(j=0; A[j] != '\0'; j++){
    }
    j = j-1;

    for(i=0; i<j; i++,j--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    printf("Reversed string: %s\n", A);
}

int main(){
    method1();
    method2();

    return 0;
}