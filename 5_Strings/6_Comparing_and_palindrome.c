#include <stdio.h>
#include <stdlib.h>

void compare() {
    char A[] = "painter";
    char B[] = "painting";
    int i, j;

    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if (A[i] != B[j]) {
            if (A[i] < B[j])
                printf("String: %s is greater than %s\n", B, A);
            else
                printf("String: %s is greater than %s\n", A, B);
            return;
        }
    }

    if (A[i] == '\0' && B[j] == '\0') {
        printf("Equal\n");
    }
}

void checkPalindrome(){
    char A[] = "ma dam";
    int i,j;

    for(j=0; A[j] != '\0'; j++){
    }
    j =j-1;

    for(i=0,j; i<j; i++,j--){
        if(A[i] != A[j]){
            printf("Not palindrome");
            return;
        }
    }

    printf("Its palindrome");
}

int main() {
    compare();
    checkPalindrome();
    return 0;
}
