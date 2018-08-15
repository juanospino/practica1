#include <iostream>
using namespace std;
/* Program calculates divition by two numbers
 * Program request for two int numbers.
 * program prints the result of that divition, also it rounds it.*/

int main()
{
    int num1,num2;
    cout<<"Ingrese numero 1:  ";
    cin>>num1;
    cout<<"Ingrese numero 2:  ";
    cin>>num2;
    if(num2!=0){
        cout<<num1<<" / "<<num2<<"  es: "<<num1/num2<<endl;

    }
    else{
        cout<<"DivisiÃ³n no perteneciente en los R"<<endl;
    }

    return 0;
}
