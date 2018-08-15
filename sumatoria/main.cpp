#include <iostream>

using namespace std;

int main()
{
    int num,contador=0,sumatoria=0;
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin>>num;
    while(num>=0&&contador!=num){
        sumatoria += contador;
        contador++;
    }
    if (num>0){
        cout<<"Sumatoria =  "<<sumatoria+num<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }

    return 0;
}
