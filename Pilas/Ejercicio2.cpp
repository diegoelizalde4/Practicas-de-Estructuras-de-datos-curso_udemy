/*Dda una expresion con parentesis de dos tpos diferentes, escriba un programa que evalue su
correcion utilizando pilas
---Entrada---
Una secuencia de parentesis terminada en un punto
--Salida--
Correcto o Incorrecto segun sea el caso
*/
#include <iostream>
#include <stack>
using namespace std;

int main(){

    char x;
    stack<char>p;

    cin>>x;
    bool correcto = true;

    while(correcto and x != '.'){

        if(x == '[' or x == '('){
            p.push(x);
        }
        else if (x == ']'){
            if ( p.empty() or p.top() != '[')correcto = false;
            else p.pop();
        }

        else if(x == ')'){
            if( p.empty() or p.top() != '(') correcto = false;
            else p.pop();
        }
        cin>>x;
    }
    if(correcto and p.empty())cout<<"Correcto";
    else cout<<"Incorrecto";
    cout<<endl;







}