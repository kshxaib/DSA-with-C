#include <stdio.h>

int power(int m, int n){
    if (n == 0){
        return 1;
    } else {
        return power(m, n - 1) * m;
    }
}

// int power(int m, int n){
//     if(n == 0){
//         return 1;
//     } 
//     if(n%2 == 0){
//         return power(m*m, n/2);
//     } else {
//         return power(m*m, (n-1)/2) * m;
//     }
// }


int main()
{
    printf("%d", power(2, 8)); 
    return 0;
}