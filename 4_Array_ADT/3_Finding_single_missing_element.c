#include <stdio.h>
#include <stdlib.h>

void method1() {   //When the first and last number is known
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}; 
    int missingNo;
    int s = 0;
    int sum = 0; 
    int n = 12;

    for(int i = 0; i < 11; i++) { 
        sum = sum + A[i];  
    }

    s = n * (n + 1) / 2;
    missingNo = s - sum;
    printf("Missing no. is %d", missingNo);
}

void method2(){
    int A[11] = {6,7,8,9,10,11,13,14,15,16,17};
    int diff = 6-0;

    for(int i=0; i<11; i++){
        if(A[i]-i != diff){
            printf("Missing no. is: %d", i+diff);
            return;
        }
    }
}

int main() {
    method2();
    
    return 0;
}
