#include <iostream>
/* Program calculates what number is less-than other number
 * Program call for a two int numbers.
 * Program prints what of these numbers is less*/

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Ingrese numero 1:  ";
    cin>>num1;
    cout<<"Ingrese numero 2:  ";
    cin>>num2;
    if(num1<num2){
        cout<<"El menor es:  "<<num1<<endl;
    }
    else if(num1==num2){
        cout<<"numeros iguales"<<endl;
    }
    else{
        cout<<"El menor es:  "<<num2<<endl;
    }

    return 0;
}
