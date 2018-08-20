#include <iostream>

using namespace std;
/*Program calculates dividers
 * requires a positive int number
 Program prints dividers of that number*/
int main()
{
    int num,divisores=1;
    cout<<"ingrese numero"<<endl;cin>>num;
    while(divisores<=num){
        if(num%divisores==0){//to take dividers, when residue is 0, also, gets divider
            cout<<"Divisores: "<<divisores<<endl;
        }
        divisores++;
    }
    return 0;
}
