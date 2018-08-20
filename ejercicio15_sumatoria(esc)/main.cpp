#include <iostream>
/*Program calculates summation
 * requires an int numbers
 Program prints summation between these numbers*/

using namespace std;

int main()
{
    int num=1,sumar=0;
    while(num!=0){//when user puts 0, loop ends
        cout<<"Ingrese numero(0 para salir) "<<endl;cin>>num;
        sumar += num;//summation

    }
    cout<<"Suma de todos los numeros: "<<sumar<<endl;
    return 0;

}
