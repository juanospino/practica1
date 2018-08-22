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
    if(num2!=0){//Condition that resolves divided by 0 problem.
        cout<<num1<<" / "<<num2<<"  es: "<<num1/num2<<endl;

    }
    else{
        cout<<"Division no perteneciente en los R"<<endl;
    }

    return 0;
}
