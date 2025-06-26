#include <stdlib.h>
#include <stdio.h>

void upperToLower(){
    char A[] = "SHOAIB";
    
    for(int i=0; A[i] != '\0'; i++){
        A[i] = A[i] + 32;
    }

    printf("Converted string is: %s\n", A);
}

void lowerToUpper(){
    char A[] = "shoaib";
    
    for(int i=0; A[i] != '\0'; i++){
        A[i] = A[i] - 32;
    }

    printf("Converted string is: %s\n", A);
}

void toggleTheCase(){
    char A[] = "ShoAiB";

    for(int i=0; A[i] != '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){
            A[i] = A[i] + 32;
        } else if(A[i] >= 97 && A[i] <= 122){
            A[i] = A[i] - 32;
        }
    }

    printf("Toggled string is: %s", A);
}

int main(){
    upperToLower();
    lowerToUpper();
    toggleTheCase();

    return 0;
}