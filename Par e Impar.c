//Par e Impar
#include <stdio.h>

int par(int m);
int impar(int m);

int main(){
	int m;
	printf("Introduce un numero:");
	scanf("%d", &m);
	if (par(m)){
		printf("El numero es par");
	}else 
		printf("El numero es impar");
return 0;
}
int par(m){
	if (m == 0){
		return 1;
	} else 
 	return impar(m - 1);
 }
 int impar(m){
 if (m == 0){
 	return 0;
 }
 else 
 	return par(m - 1);
 } 