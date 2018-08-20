#include <iostream>

using namespace std;
/*Program calculates MCM
 * requires a two int numbers
 prints MCM of these numbers*/
int main()
{
    int numA,numB,mcm,aum=1;
    cout<<"ingrese un numero: "<<endl;cin>>numA;
    cout<<"ingrese un segundo numero: "<<endl;cin>>numB;
    if(numA==numB){//case when numbers are same
        cout<<"MCM de: "<<numA<<" y "<<numB<<"  es: "<<numA<<endl;
    }
    else if(numA<=0||numB<=0){//case when number are negatives
        cout<<"MCM indefinido"<<endl;
    }
    else if(numA>numB&&numA%numB==0){//case when first number is a multiple of second number
        cout<<"MCM de: "<<numA<<" y "<<numB<<"  es: "<<numA<<endl;
    }
    else if(numB>numA&&numB%numA==0){//case when second number is a multiple of first number
        cout<<"MCM de: "<<numA<<" y "<<numB<<"  es: "<<numB<<endl;
    }
    else if(numA>numB){//case when numbers are differents
        while (aum!=0) {
            mcm = numA*aum;
            if(mcm%numB==0){//to evaluate if a multiple of a first number is a multiple of a second number
                cout<<"MCM de: "<<numA<<" y "<<numB<<"  es: "<<mcm<<endl;
                break;
            }
            else{
                aum++;
            }
        }
    }
    else if(numB>numA){
        while(aum!=0){
            mcm = numB*aum;
            if(mcm%numA==0){//to evaluate if a multiple of a second number is a multiple of a first number
                cout<<"MCM de: "<<numA<<" y "<<numB<<"  es: "<<mcm<<endl;
                break;
            }
            else{
                aum++;
            }
        }

    }
    return 0;
}
