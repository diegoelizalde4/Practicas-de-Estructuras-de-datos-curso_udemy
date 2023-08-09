#include <iostream>
#include <vector>

using namespace std;
void bubble_sort(vector<int>&v);
void imprime(const vector<int>&v);
int main(){

    vector<int> v = {2,4,5,1,3};
    cout<<"Vector sin ordenar: ";
    imprime(v);
    cout<<endl;
    cout<<"Ordenado: ";
    bubble_sort(v);
    imprime(v);

}

void bubble_sort(vector<int>& v){
    bool sorted = false;

    int last = v.size()-1;

    while(not sorted){
        sorted = true;
        for(int i=0; i<last; i++){
            if(v[i]>v[i+1]){
                //Intercambiar elementos
                swap(v[i], v[i+1]);
                sorted = false;
            }
        }
        --last;
    }

}
void imprime(const vector<int>& v){
    int n = v.size();
    for (int i =0; i<n; i++) cout<<v[i]<<' ';
    cout<<endl; 
}

