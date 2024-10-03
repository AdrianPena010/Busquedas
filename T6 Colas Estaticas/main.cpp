#include<iostream>
#include "colat5.h"
#include<conio.h>

using namespace std;

int main()
{
    ColaT5 MiCola;
    Constancia x;
    int opc;

    do{
    cout<<"\n1.Dar de alta solicitud.\n2.Elaborar constancia.\n3.Buscar Persona/Constancia.\n4.Salir\nIngrese la opcion: ";
    cin>>opc;

    switch(opc)
    {
    case 1:
        //for(int i=1;i<=2; i++){
        cin>>x;
        MiCola.enqueue(x);
        break;
    case 2:
        //for(int i=1;i<=2; i++)
        cout<<MiCola.dequeue();
        break;
    case 3:
        cout<<"\n Ingrese la persona a buscar"<<endl;
        cin>>x;
    if(MiCola.busquedaLineal(x)==-1){
        cout<<"\n Ese usuario no ha generado una constancia"<<endl;
    }
    else{
        cout<<"\n Personas delante del usuario: "<<MiCola.busquedaLineal(x)<<endl;
    }
        break;
    case 4:
        cout<<"Saliendo...";
    default:
        cout<<"Ingrese una opcion valida";
    }

    }while(opc!=4);

    getch();
    return 0;
}
