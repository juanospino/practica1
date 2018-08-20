#include <iostream>

using namespace std;
/*Program prints approximate value for pi
 * requires a int positive number
 prints Leibniz formula for π */
int main()
{
    double pi=0.0;
    int aprox,aum;
    cout << "ingrese numero de aproximacion" << endl;cin>>aprox;
    if(aprox>0){
        for(aum=0;aum<aprox;aum++){//loop to generate Leibniz formula for π
            if(aum==2||aum%2==0){//Condition to exchange signs
                pi=pi+(1.0/(2*aum+1));//to put number according Leibniz formula for π
            }//note: 2*aum+1 becasue numbers are odd(impar)
            else{
                pi=pi-(1.0/(2*aum+1));//to put number according Leibniz formula for π
            }
        }
        pi=4*pi;
        cout<<"Valor aproximado de pi es: "<<pi<<endl;


    }
    return 0;
}
