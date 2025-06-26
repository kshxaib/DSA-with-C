#include <stdlib.h>
#include <stdio.h>

void countVowelsAndConsonants(){
    char A[] = "How are you";
    int vcount =0, ccount=0;

    for(int i=0; A[i] != '\0'; i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' 
        || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'
        ) vcount ++;

        else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)) ccount ++;
    }
    printf("Vowels are: %d and Consonants are: %d\n", vcount, ccount);
}

void countWords(){
    char A[] = "How are   u";
    int word = 0;

    for(int i=0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i-1] != ' '){
            word++;
        }
    }  
    printf("Total words: %d\n", word+1);  
}

int main(){
    countVowelsAndConsonants();
    countWords();

    return 0;
}