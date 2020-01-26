#include <stdio.h>

int main(){

	int x = -1007;	//32 bits on RPi 3B+
	char ch = 'a';	//shorthand for 97 is the code for 'a' 8 bits
	short s = 99; 	//16 bits or 2 bytes
	long l = -12345; // 32 bits
	long long ll = 12345; // 64 bits = 8 bytes
	double pi = 3.14159; // 8 bytes
	float f = 3.14; // 4 bytes
	
	printf("sizeof(int) = %d bytes\n", sizeof(x));
	printf("sizeof(char) = %d bytes\n", sizeof(ch));
	printf("sizeof(short) = %d bytes\n", sizeof(s));
	printf("sizeof(long) = %d bytes\n", sizeof(l));
	printf("sizeof(long long) = %d bytes\n", sizeof(ll));
	printf("sizeof(double) = %d bytes\n", sizeof(pi));
	printf("sizeof(float) = %d bytes\n", sizeof(f));
}