#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct corredor {
    char nombre[50];
    int  edad;
    char sexo;
    char club[50];
    char catCompeticion[40];
}

correrin;


int main(){

        cout<<"Ingrese el nombre del corredor: ";
        cin.getline(correrin.nombre,40,'\n') ;

        cout<<"Ingrese edad:"<<endl;
        cin>>correrin.edad;

        cout<<"Ingrese sexo: "<<endl;
        cin>>correrin.sexo;

        cout<<"Ingrese club:"<<endl;
        cin>>correrin.club;

        if(correrin.edad <= 18){
            strcpy (correrin.catCompeticion,"Juvenil Menor"); 
        }
        if(correrin.edad >= 18 && correrin.edad <=25){
            strcpy (correrin.catCompeticion,"Señor Menor");
        }

        if(correrin.edad <= 40){
            strcpy (correrin.catCompeticion,"Mayor");
        }

        cout<<"El nombre es: "<<correrin.nombre<<" tiene: "<<correrin.edad<<" anos."<<"Es del club: "<<correrin.club<<" Su sexo es: "<<correrin.sexo<<" y su categoria es: "<<correrin.catCompeticion;


    getch ();
    return 0;
}