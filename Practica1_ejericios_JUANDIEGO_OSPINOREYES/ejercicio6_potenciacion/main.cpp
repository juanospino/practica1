#include <iostream>
using namespace std;
/*Program calculates power between two numbers
 * Requires two int numbers(A,B)
 Program prints the result of A raised to the power B*/
int main()
{
    long int num1,num2,potencia;
    cout<<"Ingrese numero 1:  ";
    cin>>num1;
    cout<<"Ingrese numero 2:  ";
    cin>>num2;
    potencia=num1;
    if(num2>0){
        while(num2!=1){// != 1 if not, num2 gets value 0
            num1=potencia*num1;
            num2--;//To stop the while loop
        }
        cout<<"Potenciacion es: "<<num1<<endl;
    }
    else if(num2==0){//case when power is 0
        cout<<"Potenciacion es: "<<1<<endl;
    }
    else if(num2<0){//when power is negative
        while(num2!=-1){// != -1 if not, num2 gets value 0
            num1=potencia*num1;
            num2++;//To stop the while loop
        }
        potencia=num1;
        cout<<"Potenciacion es: "<<1/potencia<<endl;//Put (1/potencia) because power is negative


    }

    return 0;
}
