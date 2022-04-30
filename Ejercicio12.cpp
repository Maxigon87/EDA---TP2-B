/*Ejercico 12:
Defina una estructura que sirva para representar a una persona. 
La estructura debe contener dos campos: 
el nombre de la persona y un valor de tipo lógico que indica si 
la persona tiene algún tipo de discapacidad. 
Realice un programa que dado un vector de personas rellene dos 
nuevos vectores: uno que contenga las personas que no tienen 
ninguna discapacidad y otro que contenga las personas con 
discapacidad.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Persona {
	char nombre[50];
	bool discapacidad;
};

int main() {
	Persona personas[10];
	Persona conDiscapa[10];
	Persona sinDiscapa[10];
	int n=0,t=0,f=0; 
	
	cout<<"Cuantas personas va a agregar: ";cin>>n; 
	cout<<"\nIngrese datos de las personas:\n\n";
	
	for(int i=0;i<n;i++) {
		fflush(stdin);
		cout<<"Nombre: "; 
		cin.getline(personas[i].nombre,50,'\n');
		cout<<"Presenta alguna discapacidad\nSi presione(1) No presione(0): "; cin>>personas[i].discapacidad;
		
		if(personas[i].discapacidad==1) {
			strcpy(conDiscapa[t].nombre,personas[i].nombre);
			t++;
		}
		if(personas[i].discapacidad==0) {
			strcpy(sinDiscapa[f].nombre,personas[i].nombre);
			f++;
		}
		cout<<"\n";
	}
	
	cout<<"\nPersonas con discapacidad"<<endl;
	for(int i=0;i<t;i++) {
		cout<<conDiscapa[i].nombre<<endl;
	}
	
	cout<<"\nPersonas sin discapacidad"<<endl;
	for(int i=0;i<f;i++) {
		cout<<sinDiscapa[i].nombre<<endl;
	}
		
	
	getch();
	return 0;
}


