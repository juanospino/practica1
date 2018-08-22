#include <iostream>

using namespace std;
/*Program to calculate multiples by a number, they have be less than 100
 * Requires an int positive number(num)
 Program prints multiples by the number(num)*/
int main()
{
    int num,contador=1,multiplo=0;
    cout<<"ingrese un numero"<<endl;cin>>num;
    while(num>0&&multiplo<=100){//num must be positive, because is number is negative, loop never ends
        multiplo = num*contador;//create multiples
        contador++;
        if (multiplo>100){//To stop the loop
            break;
        }
        cout<<"Numeros: "<<multiplo<<endl;
    }
    return 0;
}
