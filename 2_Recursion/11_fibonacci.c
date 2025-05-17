#include <stdio.h>

// int fib(int n){
//     if(n<=1) return n;
//     int t0=0,t1=1;
//     int sum=0;
//     for(int i=2; i<=n; i++){
//         sum = t0 + t1;
//         t0 = t1;
//         t1 = sum;
//     }
//     return sum;
// }

// int fib(int n){
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     return fib(n-2) + fib(n-1);
// }

int F[10];

int fib(int n){
    if(n <= 1){
        F[n] = n;
        return n;
    }
    if(F[n-2] == -1) F[n-2] = fib(n-2);
    if(F[n-1] == -1) F[n-1] = fib(n-1);
    F[n] = F[n-2] + F[n-1];
    return F[n];
}

int main(){
    int i;
    for(i=0; i<10; i++){
        F[i] = -1;
    }
    printf("%d\n", fib(6));
    return 0;
}
