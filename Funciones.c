#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct producto{
	int codigo;
	char descripcion [80];
	float precio; 
	char fechadeVencimiento[30];
	int existencia;
}p[5];

int llenarDatos();
int mostrarProducto(producto);

int main (){
		llenarDatos();
		mostrarProducto(p[1,2,3,4,5]);
getch();
return 0;
}

int llenarDatos(){
fflush(stdin);
	for (int i=0;i<5;i++){
		printf("Inserte el codigo del producto numero %d: \n", i+1);
		scanf("%d",&p[i].codigo);
		fflush(stdin);
		printf("Inserte la descripcion del producto numero %d: \n", i+1);
		gets(p[i].descripcion);
		fflush(stdin);
		printf("Inserte el precio del producto numero %d: \n", i+1);
		scanf("%f",&p[i].precio);
		fflush(stdin);
		printf("Inserte la fecha de vencimiento numero %d: \n", i+1);
		gets(p[i].fechadeVencimiento);
		printf("Inserte las existencias del producto numero %d: \n", i+1);
		scanf("%d",&p[i].existencia);		
	}
}

int mostrarProducto (producto ){
	
	for(int i=0; i<5;i++){
	
	printf("Codigo del producto: %i \n",p[i].codigo);
	printf("Descripcion: %s \n", p[i].descripcion );
	printf ("Precio: %.2f \n", p[i].precio);
	printf ("Fecha de vencimiento: %s \n",p[i].fechadeVencimiento);
	printf("Existencias: %i \n", p[i].existencia);
	}
}



