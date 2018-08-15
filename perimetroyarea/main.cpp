#include <iostream>

using namespace std;

int main()
{
    double pi = 3.1416,radcuad;
    int radio;
    cout<<"ingrese el radio"<<endl;
    cin>>radio;
    if (radio>=0){
        radcuad = radio*radio;
        cout<<"Perimetro es: "<<2*pi*radio<<endl<<"El area es: "<<pi*radcuad<<endl;

    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}
