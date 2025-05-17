#include <stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    } else {
        return fact(n-1)*n;
    }
}

// int fact(int n){
//     int factoral = 1;
//     for(int i=1; i<=n; i++){
//         factoral = factoral *i;
//     }
//     return factoral;
// }

int main() {
    printf("%d", fact(5));
    return 0;
}