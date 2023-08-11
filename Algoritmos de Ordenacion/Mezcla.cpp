//merge sort
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &v, int left, int mid, int right){
    int n = right-left+1; //tamaño del vector
    vector<int> aux(n);
    int i = left;//secuencia para el vector de la izquierda
    int j = mid+1; // secuencia para el vector de la derecha
    int k = 0; //parametro para mi vector auxiliar
    while(i<=mid and j<= right){
        if(v[i]<= v[j]){ aux[k]=v[i]; ++i;}
        else{aux[k] = v[j];++j;}
        ++k;
    }
    while(i< mid){aux[k] = v[i]; ++k; ++i;} //Relleno auxiliar con v[i] - vector izquierda
    while(j<right){aux[k] = v[j]; ++k; ++j;}// relleno auxiliar con v[j] - vector de la derecha

    for(k=0; k<n; ++k){
        v[left+k] = aux[k];
    }

}

void merge_sort(vector<int> & v, int left, int right){
    if(left<right){
        int mid = (left+right)/2; //Posicion media
        merge_sort(v, left, mid);//Ordeno la primer mitad
        merge_sort(v, mid+1, right);//Ordeno la segunda mitad

        merge(v, left, mid, right);//fusiono el vector

    }
}

int main(){
    int n;//tamaño vector;
    cout<<"Ingresa tamaño del vector: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }
    //Imprimir sin ordenar
    for(int j =0; j<n; ++j){
        if(j==n-1)cout<<v[j]<<endl;
        else  cout << v[j] <<' ';
    }
    //ordenar
    merge_sort(v,0,n-1);
    //Imprimir el vector ordenado
    for(int k=0; k<n; ++k){
        if(k==n-1) cout << v[k] <<endl;
        else cout << v[k] << ' ';
    }

}