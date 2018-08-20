#include <iostream>

using namespace std;
/*Program prints digits of a number
 * requires a positive int number
 prints the digits of that number */
int main()
{
    long int num,aum=1,aux,digits=0;
    cout<<"ingrese numero: "<<endl;cin>>num;
    while(aum<=num){
        aux = num/aum;//to descompose the number
        if(aux<=num*10){
            digits++;//if descomposed number is less than num*10, its increase by 1 the digits
            aum *=10;//to increase by 10 aum, its allows count quantity of digits
        }
        else{
            aum *=10;
        }
    }
    cout<<"Digitos de: "<<num<<" son: "<<digits<<endl;

    return 0;
}
