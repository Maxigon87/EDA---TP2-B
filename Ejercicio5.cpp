#include <iostream>
using namespace std;

enum Color
{
    rojo,
    verde,
    azul
};

struct Libro
{
    char titulo[20], autor[20];
    int anio;
    Color color;
} libros[3];

int main()
{
    cout<<"###############################################"<<endl;
    cout<<"Registre tres libros: "<<endl;
    cout<<"###############################################"<<endl;
    cout<<"\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Titulo libro " << i + 1 << endl;
        cin.getline(libros[i].titulo, 20);
        cout << "Autor libro " << i + 1 << endl;
        cin.getline(libros[i].autor, 20);
        cout << "Año libro " << i + 1 << endl;
        cin >> libros[i].anio;
        cin.ignore();
    }
    libros[0].color = rojo;
    libros[1].color = verde;
    libros[2].color = azul;

    for (int i = 0; i < 3; i++)
    {
        cout << "Nombre del libro: " << libros[i].titulo << endl;
        cout << "Autor " << libros[i].autor << endl;
        cout << "Anio " << libros[i].anio << endl;
       
        switch (libros[i].color)
        {
        case rojo:
            cout << "Color: Rojo" << endl;
            cout<<"----------------------------------------------\n";
            break;
        case verde:
            cout << "Color: Verde" << endl;
            cout<<"----------------------------------------------\n";
            break;
        case azul:
            cout << "Color: Azul" << endl;
            cout<<"----------------------------------------------\n";
            break;
        }
    }
    }