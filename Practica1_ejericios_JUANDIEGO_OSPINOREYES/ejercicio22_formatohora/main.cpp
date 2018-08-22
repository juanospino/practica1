#include <iostream>

using namespace std;
/*Program prints a hour format
 * requires a int number
 prints the hour format corresponding by the number*/
int main()
{
    int num,hora,aux,min,seg;
    cout<<"ingrese numero para convertir: "<<endl;cin>>num;
    hora = num/3600;//to take hours
    aux = num%3600;//take the residue
    min = aux/60;//convert the residue to minutes
    seg = aux%60;//take seconds
    cout<<"Formato en horas/minutos/segundos: "<<hora<<":"<<min<<":"<<seg<<endl;

    return 0;
}
