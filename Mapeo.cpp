#include <map>
#include <iostream>

using namespace std;

int main(){
    //Alumno tendra como key = ID
    //Alumno tendra como value =nota
    map <int, int> alumnoNota;

    alumnoNota[3] = 8;
    alumnoNota[6] = 4;
    alumnoNota[2] = 9;

    //alumnoNota.begin();//Retorna un iterador al primer elemento

    map<int, int>::iterator it; //Con esto tengo un iterador que apunta a map<int,int>

    it = alumnoNota.end(); //retorna un puntero al ficticio elemento que va despues del ultimo
    --it;
    it->first; //Accedo a la clave del map
    it->second; //Accedo a la value del map

    cout<<"La nota del alumno "<<it->first<<" es "<<it->second <<endl;



    return 0;
}