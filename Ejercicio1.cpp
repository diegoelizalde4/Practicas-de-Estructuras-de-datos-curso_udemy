/*
Utilice una pila para determinar, para un entero n y una secuende de enteros dada su longitud n
si la secuencia es un palindromo o no. Es decir, debe indicarse si la secuencia se lee igual de 
derecha a izquierda y al reves(sin invertir los digitos dentro de cada entero)
--ENTRADA--
La entrada consiste en un entero n y una secuenda de entero de longitud n
--SALIDA--
es necesario escribir "Si" o "NO" segun convenga
***OBSERVACION***
Para resolver este ejercicio basta con utilizar un monton de enteros para guardar la primera mitad
de la secuencia y tratar cada entero restante solo una vez
*/
#include <iostream>
#include <stack>
using namespace std;

int main(){

    int n;
    cin>>n;

    stack<int> pila;
    int value;
    int count = 0;

    for (int i = 0; i<n/2; i++){
        cin>>value;
        pila.push(value);
        ++count;
    }
    if(n%2 !=0) cin>>value; count++;

    bool palind = true;

    while(cin>>value and palind and count<n){
        if(value != pila.top()) palind= false;
        pila.pop();
        count++;
    }

    if(palind)cout<<"SI";
    else cout<<"No";
    cout<<endl;



    return 0;
}