#include<iostream>
#include<conio.h>

using namespace std;

struct promedio {
    float nota1;
    float nota2;
    float nota3;

};

struct alumno {
    char nombre[40];
    char sexo;
    int edad;

    struct promedio promedios;
};

int main (){
    struct alumno alumno1;

        cout<<"Ingrese el nombre del alumno: "<<endl;
        cin.getline(alumno1.nombre,40,'\n') ;

        cout<<"Ingrese edad:"<<endl;
        cin>>alumno1.edad;

        cout<<"Ingrese sexo: "<<endl;
        cin>>alumno1.sexo;


    cout<<endl<<"Cargue la nota 1:"<<endl;
    cin>>alumno1.promedios.nota1;
    cout<<"Cargue la nota 2: "<<endl;
    cin>>alumno1.promedios.nota2;
    cout<<"Cargue la nota 3: "<<endl;
    cin>>alumno1.promedios.nota3;

    float promedio = (alumno1.promedios.nota1 + alumno1.promedios.nota2 + alumno1.promedios.nota3) / 3;

    cout<<"El alumno "<<alumno1.nombre<<"tiene un promedio de : "<<promedio;


    return 0;
}