//Funcion Q
#include <stdio.h>
int A, B;
int funcion(int A,int B);

int main(){
	
	printf("Ingrese los dos numeros A y B:\n");
	scanf("%d\n%d", &A, &B);
	funcion;
	printf("La funcion Q es:%d", funcion(A, B));
	
return 0;
}
int funcion(int A,int B){
	if (A<B)
		return 0;
	else if (A>B)
		return funcion(A-B, B)+1;
}