#include <iostream>

using namespace std;

int main()
{
    int num,aux,res,numInv=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    aux = num;

    while (aux>0) {
        res = aux%10;
        aux = aux/10;
        numInv = numInv*10+res;// Invest number(num)
    }
    if (numInv==num){
        cout<<num<<"  Es Palindormo"<<endl;
    }
    else{
        cout<<num<<"  NO es Palindormo"<<endl;
    }

    return 0;
}
