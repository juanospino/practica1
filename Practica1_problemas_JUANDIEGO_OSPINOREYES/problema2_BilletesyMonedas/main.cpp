#include <iostream>
/*Program decides minimun quantity of bills and coins for a quantity of money
 * Needs number(quantity of money).
 * Program prints bills and coins needed to represent the quantity of money*/
using namespace std;

int main()
{
    int plata,i,total,resto=0;
    cout<<"Ingrese plata: "<<endl;cin>>plata;
    int billcoins[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};//string of int type,contains bills and coins
    for(i=0;i<10;i++){
        total = plata/billcoins[i];//to know how many bills or coins are needed
        resto = plata-(total*billcoins[i]);//to take the rest
        cout<<billcoins[i]<<"  :  "<<total<<endl;
        plata = plata%billcoins[i];//to kwon the residue(what is missing)(lo que falta)

    }
    cout<<"Faltante: "<<resto<<endl;


    return 0;
}
