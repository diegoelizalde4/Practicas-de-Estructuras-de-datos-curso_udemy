#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& v){
    for(int i=1; i<v.size(); i++){//v.size es el tamaño del vector
        int x = v[i];
        int j = i;

        while(j>0 and v[j-1] >x){
            v[j] = v[j-1];
            --j;
        }
        v[j] = x;
    }
}
int main(){
    int n;
    cout<<"Ingresa tamaño del vector: ";
    cin>>n;
    cout<<endl;
    cout<<"Ingresa los elementos del vector: ";
    vector <int> sanfrancisco(n);
    for (int i=0; i<n; ++i){
        cout<<"Ingresa: ";
        cin>>sanfrancisco[i];
    }
    cout<<"Vector sin ordenar: "<<endl;
    for(int j=0; j<n; ++j){
        cout<< sanfrancisco[j]<<' ';
    }
    cout<<endl;
    
    cout<<"Vector ordenado: "<<endl;
    insertion_sort(sanfrancisco);
    for(int k=0; k<n; ++k){
        cout<<sanfrancisco[k]<<' ';
    }
    cout<<endl;
}