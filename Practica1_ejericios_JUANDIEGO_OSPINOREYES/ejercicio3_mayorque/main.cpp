#include <iostream>
using namespace std;
/* Program calculates what number is greater-than other number
 * Program call for a two int numbers.
 * Program prints what of these numbers is greater*/


int main()
{
    int num1,num2;
    cout<<"Ingrese numero 1:  ";
    cin>>num1;
    cout<<"Ingrese numero 2:  ";
    cin>>num2;
    if(num1>num2){//condition to evaluate what number is greater
        cout<<"El mayor es:  "<<num1<<endl;
    }
    else if(num1==num2){//case when numbers are equals
        cout<<"numeros iguales"<<endl;
    }
    else{
        cout<<"El mayor es:  "<<num2<<endl;
    }

    return 0;
}
