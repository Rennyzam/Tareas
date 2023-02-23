
#include<stdio.h>
#include <stdlib.h>

struct info_direccion {
	char direccion [30];
	char ciudad [20];
	char estado[20];
}; 
struct empleado {


	char nombre [20];
	struct info_direccion dir_empleado;
	double salario;
}emp[2];

int main(){
	for(int i=0;i<2;i++){
		
		fflush (stdin);
		printf("Digite su nombre: ");
		gets(emp[i].nombre);
		printf("Digite su direccion: ");
		gets(emp[i].dir_empleado.direccion);
		printf("Digite su ciudad: ");
		gets(emp[i].dir_empleado.ciudad);
		printf("Digite su estado: ");
		gets(emp[i].dir_empleado.estado);
		printf("Digite su salario: ");
		scanf("%lf",&emp[i].salario);
		 
		printf("\n");
		
	} 
	
	for(int i=0;i<2;i++){
		
		printf("\nDATOS DEL EMPLEADO #%i",i+1);
		printf("\nNombre del empleado es: %s", emp[i].nombre);
		printf("\nDireccion del empleado es: %s", emp[i].dir_empleado.direccion);
		printf("\nCiudad del empleado es: %s", emp[i].dir_empleado.ciudad);
		printf("\nEstado del empleado es: %s", emp[i].dir_empleado.estado);
		printf("\nSalario del empleado es: %.2lf", emp[i].salario);
		
		printf("\n");
		
		
		
		
		}
		
	system("pause");
	return 0;	
}

