#include <iostream>

using namespace std;

int main()
{
    int num,mayor=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while(num!=0){
        cout<<"Ingrese numero: "<<endl;cin>>num;
        if(num>mayor){
            mayor=num;

        }

    }
    cout<<"Numero mayor es: "<<mayor<<endl;
    return 0;
}
