#include <iostream>

using namespace std;

int main()
{
    int num,contador=0,potencia;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while(contador<num&&num>=0){
        contador+=1;
        potencia = contador*contador;
        if (potencia==num){
            cout<<num<<"  es un cuadrado perfecto"<<endl;
            break;
        }
    }
    if (potencia!=num){
        cout<<num<<"  No cuadrado perfecto"<<endl;
    }

    return 0;
}
