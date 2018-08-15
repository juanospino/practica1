#include <iostream>

using namespace std;

int main()
{
    int cantidad;
    int contadorPlata,descomposicion;
    int cincuentaB=50000;
    int veinteB=20000;
    int diezB=10000;
    int cincoB=5000;
    int dosB=2000;
    int mil=1000;
    int quinini=500;
    int dosiM=200;
    int cien=100;
    int cincuentaM=50;

    cout<<"Ingrese cantidad"<<endl;cin>>cantidad;

    if (cantidad>=cincuentaB){
        descomposicion = cantidad/50000;
        cout<<descomposicion;


    }

    return 0;
}
