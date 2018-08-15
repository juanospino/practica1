#include <iostream>
using namespace std;

int main()
{
    long int num1,num2,potencia;
    cout<<"Ingrese numero 1:  ";
    cin>>num1;
    cout<<"Ingrese numero 2:  ";
    cin>>num2;
    potencia=num1;
    if(num2>0){
        while(num2!=1){
            num1=potencia*num1;
            num2--;
        }
        cout<<"Potenciacion es: "<<num1<<endl;
    }
    else if(num2==0){
        cout<<"Potenciacion es: "<<1<<endl;
    }
    else if(num2<0){
        while(num2!=-1){
            num1=potencia*num1;
            num2++;
        }
        potencia=num1;
        cout<<"Potenciacion es: "<<1/potencia<<endl;


    }

    return 0;
}
