#include <iostream>

using namespace std;
/*Program calculates greater than  number
 * requires an int numbers
 prints what number was greather of these numbers*/
int main()
{
    int num,mayor=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while(num!=0){//condition to close loop
        cout<<"Ingrese numero(0 para salir): "<<endl;cin>>num;
        if(num>mayor){
            mayor=num;//replace each iteration the greater number

        }

    }
    cout<<"Numero mayor es: "<<mayor<<endl;
    return 0;
}
