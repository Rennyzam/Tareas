//Implementacion de recursividad para obtener el Minimo Comun Divisor
#include <stdio.h>

int mcd(int a,int b);

int main (){
int a,b;
a=3;
b=6;	
mcd(a,b);

printf("El MCD es:%d", mcd(a,b));

	return 0;
}
int mcd(a,b){
	if(b==0){
		return a;
	}else if(a<b){
		return mcd(b,a);
	}else{
		return mcd(b,a%b);
	}
}