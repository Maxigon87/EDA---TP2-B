/*Ejercicio 11:
Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. 
Debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado n etapas calcule 
el tiempo total empleado en correr todas las etapas.
*/

#include <iostream>
#include <conio.h>
using namespace std;
struct Etapa {
	int horas;
	int minutos;
	int segundos;
};

int main() {
	Etapa etapas[100];
	int nEtapas,hrsT=0,minT=0,segT=0;
	
	cout<<"Cantidad de etapas a ingresar: ";cin>>nEtapas;
	
	cout<<"Ingrese el tiempo en las etapas:"<<endl;
		
	for(int i=0;i<nEtapas;i++) {
		cout<<"\nEtapa "<<i+1<<endl;
		cout<<"--------------"<<endl;
		cout<<"Hora: ";cin>>etapas[i].horas;
		cout<<"Minutos: ";cin>>etapas[i].minutos;	
		cout<<"Segundos: ";cin>>etapas[i].segundos;
		
		hrsT+=etapas[i].horas;
		minT+=etapas[i].minutos;
		if(minT>=60) {
			minT-=60;
			hrsT++;
		}
		
		segT+=etapas[i].segundos;
		if(segT>=60) {
			segT%=60;
			minT++;
		}
	}
	
	system("cls");	
	cout<<"Tiempo Total de las Etapas Transcurridas:"<<endl;
	cout<<"Horas: "<<hrsT<<endl;
	cout<<"Minutos: "<<minT<<endl;
	cout<<"Segundos: "<<segT<<endl;
				 
	
	
	
	
	getch();
	return 0;
}


