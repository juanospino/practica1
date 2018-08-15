#include <iostream>

using namespace std;

int main()
{
    int num,contador=1,divisores;
    cout<<"ingrese numero"<<endl;cin>>num;
    while(contador<=num){
        if(num%contador==0){
            cout<<"Divisores: "<<contador<<endl;
            divisores=num%contador;
        }
        contador++;
    }
    return 0;
}
