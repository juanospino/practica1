#include <iostream>

using namespace std;

int main()
{
    long int num,contador=1,aux;
    cout << "Ponga un numero" << endl;cin>>num;
    aux = num;
    while (contador<=5) {
        cout<<num<<" ^ "<<contador<<" = "<<aux<<endl;
        aux = aux*num;
        contador++;

    }
    return 0;
}
