#include <stdio.h>
#include <stdlib.h>

void findDuplicate(){
    int A[10] = {3,6,8,8,10,12,15,15,15,20};
    int H[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for (int i=0; i<10; i++){
        H[A[i]]++;
    }

    for (int i=0; i<21; i++){
        if(H[i] > 1){
            printf("%d appears %d times\n", i, H[i]);
        }
    }
}

int main(){
    findDuplicate();
}