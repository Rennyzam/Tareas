#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100

typedef struct{
	char nombre[50];
	int edad;
	char genero[10];
}Persona;


typedef struct{
	Persona gente[MAX_QUEUE_SIZE];
	int delante;
	int detras;
	int tamano;
}Cola;

void initCola(Cola *cola){
	cola->delante= -1;
	cola->detras= -1;
	cola->tamano= 0;
}

int ColaLlena(Cola *cola){
	return (cola->detras== MAX_QUEUE_SIZE -1);
}

int ColaVacia(Cola *cola){
	return (cola->delante== -1 || cola->delante> cola->detras);
}

void enCola(Cola *cola, Persona persona){
	if (ColaLlena(cola)){
		printf("La cola esta llena.\n");
		return;
	}
	if (cola->delante== -1){
		cola->delante=0;
	}
	cola->detras++;
	cola->gente[cola->detras]= persona;
	cola->tamano++;
}

Persona deCola(Cola *cola){
	if(ColaVacia(cola)){
		printf("La cola esta Vacia.\n");
		Persona nullPersona={"", 0, ""};
		return nullPersona;
	}
	Persona deColaPersona=cola->gente[cola->delante];
	cola->delante++;
	cola->tamano--;
	return deColaPersona;
}

void ImprimirCola(Cola *cola){
	printf("Cola:\n");
	printf("Delante->");
	for (int i=cola->delante;i<=cola->detras;i++){
		printf("[%s,%d,%s]->",cola->gente[i].nombre, cola->gente[i].edad, cola->gente[i].genero);
	}
	printf("Detras\n");
}

int main(){
	Cola cola1, cola2;
	initCola(&cola1);
	initCola(&cola2);
	
	Persona persona1 ={"Juan", 25,"Hombre"};
	Persona persona2 ={"Janet", 30,"Mujer"};
	Persona persona3 ={"Jose", 40, "Hombre"};
	Persona persona4 ={"Alicia", 20, "Mujer"};
	
	enCola(&cola1, persona1);
	enCola(&cola1, persona2);
	enCola(&cola2, persona3);
	enCola(&cola2, persona4);
	
	printf("Cola 1:\n");
	ImprimirCola(&cola1);
	printf("Cola 2:\n");
	ImprimirCola(&cola2);
	
	printf("Uniendo las colas...\n");
	while(!ColaVacia(&cola2)){
		Persona deColaPersona=deCola(&cola2);
		enCola(&cola1, deColaPersona);
	}
	printf("Colas combinadas:\n");
	ImprimirCola(&cola1);
	return 0;
	}
