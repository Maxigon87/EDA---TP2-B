/*9. Hacer un arreglo de estructura llamada atleta para 
N atletas que contenga los siguientes campos: 
nombre, país, numero_medallas. 
En el main pedir que digite el número de atletas, y a 
medida que los carga, devuelva los datos (Nombre, país) 
del atleta que ha ganado el mayor ‘número de medallas’.
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Atleta {
	char nombre[50];
	char pais[50];
	int nroMedallas;
}atleta[100];

int main() {
	int n=0,nroMaxMedallas,ind=0;
	char nombre,pais;
	
	cout<<"Ingrese numero de atletas: ";cin>>n;
	
	for(int i=0;i<n;i++) {
		fflush(stdin);
		
		cout<<"\nIngrese datos del Atleta "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(atleta[i].nombre,50,'\n');
		cout<<"Pais: ";
		cin.getline(atleta[i].pais,50,'\n');
		cout<<"Numero de Medallas: ";
		cin>>atleta[i].nroMedallas;
		
		nroMaxMedallas=atleta[0].nroMedallas;
		for(int j=1;j<n;j++) {
			
			if(nroMaxMedallas>atleta[j].nroMedallas)
				nroMaxMedallas=atleta[i].nroMedallas;
				ind=j;
		} 
	}	
	system("cls");
	
	cout<<"\nEl atleta con Mayor Numeros de Medallas"<<endl;
	cout<<"********************************************"<<endl;
	cout<<"Nombre: "<<atleta[ind].nombre<<endl;
	cout<<"Pais: "<<atleta[ind].pais<<endl;
	cout<<"Numero de medallas ganadas: "<<atleta[ind].nroMedallas<<endl;
	
	
	
	getch();
	return 0;
}
