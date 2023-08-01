#include <iostream>
#include <vector>

using namespace std;

//Busca el minimo y lo retorna
int pos_min(const vector<int>& v, int left, int right){
    int pos = left;
    for(int i=left+1; i<=right; i++){
        if(v[i]<v[pos])pos = i;
    }
    return pos;
}

void selection_sort(vector<int>&v){
    int last = v.size()-1;
    for(int i = 0; i<last; i++){
        int k = pos_min(v, i, last);
        swap(v[k], v[i]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>california(n);

    for(int i = 0; i<n; i++){
        cin>>california[i];
    }
    cout<<"El vector sin ordenar es: "<<endl;
    for(int j=0; j<n; ++j){
        cout<<california[j]<<' ';
    }
    cout<<endl;


    selection_sort(california);

    cout<<"El vector ordenado es : "<<endl;
    for(int k=0; k<n; ++k){
        cout<<california[k]<<' ';
    }
    cout<<endl;

}



