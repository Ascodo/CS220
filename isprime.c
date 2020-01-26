#include <stdio.h>

#define TRUE 1	//macro definition
#define FALSE 0

// returns true if N is prime, retuns false otherwise
int isPrime(int n){
	
	int i = 2;
	
	while (i < n/2) {
	
		if (n % i == 0){
			return FALSE;
			}
		i++;	// post increment operator
		}
	return TRUE;
}

int main() {
	printf("Enter a number: ");

	int n; // the number the user enters

	scanf("%d", &n);

}