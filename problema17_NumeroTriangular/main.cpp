#include <iostream>

using namespace std;

int main()
{
    int kDivisores,numTri,aum=1,aux=1,div=0,aumDiv=1;
    cout<<"Ingrese k divisores"<<endl;cin>>kDivisores;
    while(aux!=0){
        numTri=aum*(aum+1)/2;//to generate triangular number
        if(numTri%aumDiv==0){//to take dividers
            div++;
            if(div==kDivisores+1){//to evaluate if dividers are same that input user + 1
                cout<<"El numero es: "<<numTri<<"  que tiene  "<<div<<" Divisores"<<endl;
                aux = 0;//close loop
            }
            aumDiv++;//to generate other dividers
        }
        else if(aumDiv>numTri){/*when Triangular number isn't the required, program
                                changes triangular number to following triangular number*/
            aum++;
            div=0;
            aumDiv=1;
        }
        else{//when divider isn't greater than triangular number
            aumDiv++;
        }
    }

    return 0;
}
