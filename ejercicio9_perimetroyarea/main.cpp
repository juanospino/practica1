#include <iostream>

using namespace std;
/*Program calculates perimeter and area of a circle
 * requires value of radiuos of  circle
 Program prints perimeter and area according radious*/

int main()
{
    double pi = 3.1416,radcuad;
    int radio;
    cout<<"ingrese el radio"<<endl;
    cin>>radio;
    if (radio>=0){//to ensure radious is positive
        radcuad = radio*radio;//radious raised to power 2
        cout<<"Perimetro es: "<<2*pi*radio<<endl<<"El area es: "<<pi*radcuad<<endl;

    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}
