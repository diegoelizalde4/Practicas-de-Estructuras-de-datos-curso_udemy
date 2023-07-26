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
    //.begin para el primer elemento del mapa
    //.end final de los elementos +1
    //Bucle for
    for(map<string,int>::iterator it = alumnoNota.begin(); it != alumnoNota.end(); ++it){
        cout<<"El alumno "<<it->first<< " tiene la nota: "<<it->second<<endl;
    }

    return 0;
}