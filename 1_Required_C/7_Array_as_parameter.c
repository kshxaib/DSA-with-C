#include <stdio.h>
#include <string.h>

void fun(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\n", A[i]);
    }

    A[0] = 12;
}
int main(){
    int A[] = {1,2,3,4,5};
    int n=5;
    fun(A, n);
    
    for(int i=0; i<n; i++){
        printf("%d\n", A[i]);
    }  
    return 0;
}