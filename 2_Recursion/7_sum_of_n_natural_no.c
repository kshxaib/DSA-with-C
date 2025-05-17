#include <stdio.h>

int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    } else {
        return 0;
    }
}

// int sum(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum +i;
//     }
//     return sum;
// }

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n*(n+1)/2;
// }

int main() {
    printf("%d", sum(10)); 
    return 0;
}