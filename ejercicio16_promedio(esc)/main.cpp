#include <iostream>

using namespace std;
/*Program calculates average
 * requires an int numbers
 prints average of these numbers*/

int main()
{
    int num,promedio=0,contador=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while (num!=0) {
        promedio+=num;//means summation(numerator)
        contador++;//means quantity of numbers (denominator)
        cout<<"Ingrese numero:(0 para salir) "<<endl;cin>>num;

    }
    cout<<"Promedio es: "<<promedio/contador<<endl;//operation to average



    return 0;
}
