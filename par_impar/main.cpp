#include <iostream>
using namespace std;
/* Program show parity or no parity of a number
 * Program requires a int number
 * Program prints "even" or "odd" according the number.*/
int main()
{
    int num;
    cout<<"ingrese numero";
    cin>>num;


    if(num%2==0){  //Condition to evaluate if a entered number is even
        cout<<"El numero: "<<num<<" es par"<<endl;


    }
    else{
        cout<<"El numero: "<<num<<" es impar"<<endl;
    }
    return 0;
}
