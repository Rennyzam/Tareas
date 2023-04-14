//Funcion de Morris
#include <stdio.h>
int n, m;
long int morris(int n,int m);

int main(){
	n=2;
	m=2;
	morris;
	printf("El valor de la funcion de Morris es:%d",morris(n, m));
return 0;
}
long int morris(int n,int m){
	if(n==m)
		return(m+1);
	else
		return morris(n, morris(n-1,m+1));
}