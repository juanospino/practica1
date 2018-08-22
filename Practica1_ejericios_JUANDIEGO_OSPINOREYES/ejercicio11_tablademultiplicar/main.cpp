#include <iostream>

using namespace std;
/*Program prints multiply table by 10 for a number
 * requires a number
 prints multiply table 10 for that number*/

int main()
{
    int num,contador=1,tabla;
    cout<<"Ingrese numero"<<endl;cin>>num;

    while (contador<=10) {
        tabla = contador*num;//to generate a multiply table
        cout<<num<<" * "<<contador<<" = "<<tabla<<endl;
        contador++;//to stop loop

    }
    return 0;
}
