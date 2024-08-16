#include <bits/stdc++.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        int cuil;
        string titulo;

    public:
        Persona(string, int, int, string);
        void mostrarPersona();
};

class Docente : public Persona{
    private:
        string codigoDocente;
        float notaFinal;

    public:
        Docente(string, int, int, string, string, float);
        void mostrarDocente();
};

Persona::Persona(string _nombre, int _edad, int _cuil, string _titulo){
    nombre = _nombre;
    edad = _edad;
    cuil = _cuil;
    titulo = _titulo;
}

Docente::Docente(string _nombre, int _edad, int _cuil, string _titulo, string _codigoDocente, float _notaFinal) : Persona(_nombre, _edad, _cuil, _titulo){
    codigoDocente = _codigoDocente;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Cuil: " << cuil << endl;
    cout << "Titulo: " << titulo << endl;
}

void Docente::mostrarDocente(){
    mostrarPersona();
    cout << "Codigo de docente: " << codigoDocente << endl;
    cout << "Nota final: " << notaFinal << endl;
}

int main(){
    Docente docente1("Silvana", 38, 27485095115, "Maestra", "9038130948", 8.5);
    docente1.mostrarDocente();

    Docente docente2("Jeremias", 37, 27485095115, "Maestra", "19023849023", 9.9);
    docente2.mostrarDocente();

    return 0;
}
