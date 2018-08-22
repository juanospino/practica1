#include <iostream>

using namespace std;
/*Program calculates a perfect square number
 * requires an int positive number
 prints average of these numbers*/
int main()
{
    int num,contador=0,potencia;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while(contador<num&&num>=0){//contador arrives to num-1
        contador++;
        potencia = contador*contador;//to generate square number
        if (potencia==num){//evaluate if num is a square number when potencia is same that num
            cout<<num<<"  es un cuadrado perfecto"<<endl;
            break;
        }
    }
    if (potencia!=num){
        cout<<num<<"  No es cuadrado perfecto"<<endl;
    }

    return 0;
}
