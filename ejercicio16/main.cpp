#include <iostream>

using namespace std;

int main()
{
    int num,promedio=0,contador=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    while (num!=0) {
        promedio+=num;
        contador+=1;
        cout<<"Ingrese numero: "<<endl;cin>>num;

    }
    cout<<"Promedio es: "<<promedio/contador<<endl;



    return 0;
}
