//Funcion de Ackermann
#include<stdio.h>

int m, n;
int acker(m, n);

int main(){
	printf("Ingrese los dos numeros de los cuales quiere obtener el valor Ackermann:\n");
	scanf("%d\n%d", &m, &n);
	acker;
	printf("El valor Ackerman es:%d", acker(m, n));
	
	return 0;
}

int acker(m, n){
	if (m==0)
		return n+1;
	else if (m>0 && n==0)
		return acker(m-1,1);
	else if (m>0 && n>0)
		return acker(m-1,acker(m,n-1));
}