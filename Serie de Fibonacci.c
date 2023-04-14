#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int fib(int n);

int main(){
	for(int n=0;n<=20;n++){
		fib;
		printf(" %d", fib(n));
	}
}
long int fib(n){
	if (n == 0)
 return 0;
 else
 if (n == 1)
 return 1;
 else
 return fib(n - 2) + fib(n - 1); 
}