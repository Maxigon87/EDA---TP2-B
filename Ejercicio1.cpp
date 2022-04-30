#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

struct Disco
{
    char nombre[40];
    char artista[40];
    int numCanciones;
    float precio;
    int añoLanzamiento;
}

disco1 = {"Opean Heaven","Hillsong",10,10.00,2014},
disco2 = {"Desahogo","Vico C",5,20.00,2000},
disco3 = {"viva","coldplay",5,15.00,2020}
;

int main(void){

    int cantLetras = 0;
    cantLetras = strlen(disco1.artista);

    if (cantLetras >10)
    {
        cout<<"Cantidad de letras del artista: " << cantLetras<<endl;
        
    }else
    {
        cout<<"El nombre del artista tiene menos de diez caracteres.\n";
    }
    
    if (disco1.artista == disco2.artista)
    {
        cout<<" Estos dos discos tiene el mismo artista ";
        }
    else
    {
        cout<<"Estos dos discos no tienen el mismo artista";
        }
    
    

}
