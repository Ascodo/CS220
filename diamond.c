// Assignment 1 - Diamond ~Kath Merchant
// create a program that takes an input positive odd number and returns
// a diamond shape of characters

#include <stdio.h>

int checkConditions() {
    int n; // number of lines
    printf("Enter a non-negative and odd n: ");
    scanf("%d", &n);
    if (n <= 0 || n%2 == 0){
        printf("Error: ");
        checkConditions();
    }
    else return n;
}

int main(){
    char fillWith[] = "!@#$%^&*-/\\=)(~`\";:?";
    int numb = checkConditions();
    int spaces = numb/2;
    int duplicates = 1;

    for (int index = 0; index < numb; index++){
        for(int numSpaces = 0; numSpaces<spaces; numSpaces++){
            printf(" ");}
        for(int duples = 0; duples<duplicates; duples++){
            printf("%c",fillWith[index%20]);}
        if (index < numb/2){
          duplicates = duplicates+2;
          spaces= spaces-1;
        } else {
          duplicates = duplicates-2;
          spaces= spaces+1;
        }
        printf("\n");
    }
}