#include <iostream>
using namespace std;
/* Program calculates residue between two int numbers
 * Program requires two int numbers
 * Program has warranty to show the residue of that numbers.*/

int main()
{
    int num1,num2;
    cout<<"Ingrese numero 1"<<endl;
    cin>>num1;
    cout<<"Ingrese numero 2"<<endl;
    cin>>num2;

    if(num2!=0){  //Condition that resolves divided by 0 problem.
        cout<<"Residuo es: "<<num1%num2<<endl;

    }
    else{
        cout<<"Solucion no perteneciente a los R"<<endl;
    }
    return 0;
}
