#include <iostream>

using namespace std;
/*program calculates the factorial
 * requires a number, but a short int number
 * program prints factorial of number
 */

int main()
{
    long int decre,num,factorial=1;
    cout<<"ingrese numero (no muy largo por favor)";
    cin>>num;
    decre = num-1;
    while (decre!=0&&num>0)//num must be positive and decre can't be 0
    {
        factorial *= decre;//multiply each iteration by decre
        decre--;// when decre arrives to 0, factorial is 0, therefore, decre can't be 0
    }
    if(num<0){//if num is negative, loop never ends
        cout<<"Error"<<endl;
    }
    else{
        cout<<"factorial es: "<<factorial*num<<endl;
    }


    return 0;
}
