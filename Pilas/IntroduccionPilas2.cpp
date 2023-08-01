#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> S;

    for(int i=1; i<=10; i++){
        S.push(i);
    }
    //Al acabar el bucle el 10 se encuentra en el top de la pila
    //Se imprime el 10
    cout<<S.top()<<endl;
    //Se imprime el tamaño de la pila
    cout<<S.size()<<endl;

    //10 9 8 7 6 5 4 3 2 1 

    while(not S.empty()){
        cout<<S.top()<< " "; //Imprimo el elemento e
        S.pop();    //Elimino el elemento e

    }
    cout<<endl;

}