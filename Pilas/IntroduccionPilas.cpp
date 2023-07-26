#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int>S;

    //Insertar elementos en una pila mediante metodo push
    S.push(2);
    S.push(8);
    //El stack tiene dos elementos
    //El 8 es el primer elemento, ya que fue el ultimo en ingresarse.
    cout<<S.top()<<endl;

    //Ahora la cima es el 10
    S.push(10);
    
    //Eliminar el elemento que esta en el top que vendria siendo el 10
    S.pop();

    //Calcular el tamaño de una pila 
    cout<<"El tamaño de la pila es: "<<S.size()<<endl;


}