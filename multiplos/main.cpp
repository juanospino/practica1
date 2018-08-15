#include <iostream>

using namespace std;

int main()
{
    int num,contador=1,multiplo=0;
    cout<<"ingrese un numero"<<endl;cin>>num;
    while(num>0&&multiplo<=100){
        multiplo = num*contador;
        contador++;
        if (multiplo>100){
            break;
        }
        cout<<"Numeros: "<<multiplo<<endl;
    }
    return 0;
}
