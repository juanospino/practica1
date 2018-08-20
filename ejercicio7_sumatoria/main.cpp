#include <iostream>
/*Program calculates summation in a range
 * Requires a N int number
 * Program prints summation since 0 to N
 */

using namespace std;

int main()
{
    int num,contador=0,sumatoria=0;
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin>>num;
    while(num>=0&&contador!=num){//summation is avaible to positive numbers
        sumatoria += contador;
        contador++; //to close the loop, when contador == num
    }
    if (num>=0){//to ensure num is greater than 0
        cout<<"Sumatoria =  "<<sumatoria+num<<endl;
    }
    else{//negative numbers generates error, infinity loop
        cout<<"Error"<<endl;
    }

    return 0;
}
