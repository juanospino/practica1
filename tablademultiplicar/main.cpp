#include <iostream>

using namespace std;

int main()
{
    int num,contador=1,tabla;
    cout<<"Ingrese numero"<<endl;cin>>num;

    while (contador<=10) {
        tabla = contador*num;
        cout<<num<<" * "<<contador<<" = "<<tabla<<endl;
        contador++;

    }
    return 0;
}
