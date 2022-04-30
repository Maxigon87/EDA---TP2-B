/*Ejercicio 13: 
Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día. 
Luego defina un arreglo en el que cargara todos estos datos para un mes. Realice un programa 
que cargue la estructura antes definida y calcule el promedio de temperaturas máximas y el 
promedio de temperaturas mínimas del mes.
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

struct Dia {
	double max,min;
};

int main() {
	Dia mes[30];
	double proMesMax,proMesMin;

	
	cout<<"Ingrese temperaturas maximas y minimas del mes\n";
	for(int i=0;i<30;i++) {
		cout<<"Dia "<<i+1<<endl;
		cout<<"Max: ";cin>>mes[i].max;
		cout<<"Min: ";cin>>mes[i].min;
		
		proMesMax+=mes[i].max;
		proMesMin+=mes[i].min;
	}
	system("cls");
	cout<<"\nPromedio de temperaturas maximas del mes"<<endl;
	cout<<"Maxima: "<<setprecision(4)<<proMesMax/30<<endl;
	cout<<"Minima: "<<setprecision(4)<<proMesMin/30<<endl;
	
	
	getch();
	return 0;
}

