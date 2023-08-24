//Implementacion de grafo en programacion
#include <iostream> 
#include <vector>
using namespace std;



int main(){
    int n; //Numero de vertices (filas en mi matriz)
    int m; //Numero de aristas d

    cout<<"Ingresa el numero de filas: ";
    cin>>n;
    cout<<endl;

    cout<<"Ingresa el numero de aristas: ";
    cin>>m;
    cout<<endl;

    //DECLARAR LA MATRIZ DE ADYACENCIA

    vector<vector<int> >G(n);//Grafo g

    //Leer el grafo por la consola
    cout<<"Introduce las aristas: ";

    for(int i=0; i<m; ++i){
        int x,y;
        cin>>x>>y; //Leo arista (x,y) del grafo
        cout<<endl;
        //Voy a la fila x y introduzco el vertice y
        G[x].push_back(y);
        //voy a la fila y Y introduzco el vertice x
        G[y].push_back(x);


    }
    //Imprimir el grafo
    for(int i=0; i<n; ++i){
        cout<<"Vertices adyacentes a "<< i << ": ";
        for(int j =0; j<G[i].size(); ++j){
            cout<< G[i][j] <<' ';
            
        }cout<<endl;
    }



}