#include <stdio.h>
#include <stdlib.h>

void method1(){     // For sorted array
    int A[11] = {6,7,8,9,11,12,15,16,17,18,19}; 
    int diff = 6;
    
    for(int i=0; i<11; i++){
        if(A[i]-i != diff){
           while(diff < A[i]-i){
            printf("%d\n", i+diff);
            diff++;
           }
        }
    }
}

void method2(){     // For unsorted array
    int A[10] = {3,7,4,9,12,6,1,11,2,10};
    int H[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0; i<10; i++){
        H[A[i]] = 1;
    }
    for(int j=1; j<13; j++){
        if(H[j] == 0){
           printf("%d\n", j); 
        }
    }
}


int main(){
    method1();
    method2();
    return 0;
}