#include <map>
#include <iostream>

using namespace std;

int main(){
    //Alumno tendra como key = Nombre
    //Alumno tendra como value =nota
    map <string, int> alumnoNota;

    alumnoNota["santiago"] = 8;
    alumnoNota["Ana"] = 4;
    alumnoNota["Carlos"] = 9;

    //ORDEN ALFABETICO "Los nombres"
    //alumnoNota.begin();//Retorna un iterador al primer elemento

    map<string, int>::iterator it; //Con esto tengo un iterador que apunta a map<int,int>

    //it = alumnoNota.begin(); //retorna un puntero al ficticio elemento que va despues del ultimo

    it = --alumnoNota.end();    //apunta al final
    
    it->first; //Accedo a la clave del map
    it->second; //Accedo a la value del map

    cout<<"La nota del alumno "<<it->first<<" es "<<it->second <<endl;

    

    return 0;
}