//Algoritmo de divide y venceras
//Diseño de un algoritmo para encontrar el top de la secuencia unimodal
#include <iostream>
#include <vector>
using namespace std;

int top(const vector<int>& v, int l, int r){
    //CASO BASE: Cuando el vector tiene tamaño <= a 2

    if(l+1>=r) return max(v[l],v[r]);

    else{
        int m = (l+r)/2; //El elemento del medio
        //Top esta por la derecha
        if(v[m]<v[m+1]) top(v,m+1,r);

        //Top esta por la izquierda
        else if(v[m-1]>v[m]) top(v,l,m-1);

        else return v[m]; //v[m] es el top ya que
                          //v[m] > v[m+1] y v[m]> V[m-1]
}
}
int main(){

    return 0;
} 