#include <iostream>

using namespace std;
/*Program calculates power to 5
 * requires a int number
 prints number raised power to 5*/
int main()
{
    long int num,contador=1,aux;
    cout << "Ponga un numero" << endl;cin>>num;
    aux = num;
    while (contador<=5) {//condition to calcute power o 5
        cout<<num<<" ^ "<<contador<<" = "<<aux<<endl;
        aux = aux*num;//to generate the power
        contador++;

    }
    return 0;
}
