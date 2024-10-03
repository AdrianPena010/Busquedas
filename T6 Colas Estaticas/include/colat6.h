#ifndef COLAT5_H
#define COLAT5_H
#include<iostream>

using namespace std;

const int TAM=100;

class Constancia
{
private:
    string alumno;
    string carrera;
    int materias_aprob;
    float promedio;

public:
    Constancia();
    void operator=(Constancia& x);
    Constancia(string a, string c, int m, float p);
    friend ostream& operator<<(ostream&, Constancia&);
    friend istream& operator>>(istream&, Constancia&);
     bool operator==(Constancia &c)
    {
        return c.alumno==alumno&&c.carrera==carrera&&c.materias_aprob==materias_aprob&&c.promedio==promedio;
    }
    bool operator<(Constancia& c)
        {
           return c.alumno==alumno&&c.carrera==carrera&&c.materias_aprob==materias_aprob&&c.promedio==promedio;
        }

};

class ColaT5
{
    public:
    ColaT5():ult(-1) {}
    bool vacia()const;
    bool llena()const;
    int ultimo()const;
    friend ostream& operator<<(ostream & o, ColaT5& L);
    void enqueue(Constancia& elem);
    Constancia& dequeue();
    int busquedaLineal(Constancia&);
    int busquedaBinaria(Constancia&,int,int);

    private:
    Constancia datos[TAM];
    int ult;
    bool elimina(int pos);
    int inserta(Constancia& elem, int pos);
};

#endif // COLAT5_H
