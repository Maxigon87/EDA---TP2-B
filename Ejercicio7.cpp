#include <stdio.h>
#include <stdlib.h>

struct empleado
{
    char nombre[100];
    char sexo[20];
    int sueldo;
};

int main()
{
    int N;
    cout << "Ingrese la cantidad de empleados de la empresa N: ";
    cin << N;
    struct empleado E[N];

    int i;
    for (int i = 0; i < N; i++)
    {
        cout<<"Datos del empleado:\n";
        cout<<"Nombre: \n";
        gets(E[i].nombre); cout<<"\n";
        cout<<"Sexo: \n";
        gets(E[i].sexo); cout<<"\n";
        cout<<"Sueldo: \n";
        gets(E[i].sueldo); cout<<"\n";
        cout<<"\n";
        cout<<"\n";
    }
    
    
}
/*
#include<stdio.h>
#include<stdlib.h>
 
struct empleado{
	char nombre[100];
	char sexo[20];
	int sueldo;
};
 
main(){
	int N;
	printf("Ingrese la cantidad de empleados de DATASYSTEM: ");
	scanf("%d",&N);
	struct empleado E[N];
 
	int i;
	for(i=0;i<N;i++){
		printf("Ingrese los datos del empleado %d\n",(i+1));
		printf("Nombre: ");
		gets(E[i].nombre);
		printf("\n");
		printf("Sexo: ");
		gets(E[i].sexo);
		printf("Sueldo: ");
		scanf("%d",&E[i].sueldo);
		printf("\n\n");
	}
}