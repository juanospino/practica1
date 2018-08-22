#include <iostream>

using namespace std;
/*Program that works at bassic calculator
 * requires two numbers,and the operator
 prints the result of do the specific operator */
int main()
{
    double numA,numB,operacion;
    char operador;
    cout<<"Ingrese numero: "<<endl;cin>>numA;
    cout<<"Ingrese el operador (+,-,*,/)"<<endl;cin>>operador;
    cout<<"Ingrese un segundo numero: "<<endl;cin>>numB;

    if (operador=='+'){//to do sum
        operacion=numA+numB;
        cout<<numA<<" + "<<numB<<" = "<<operacion<<endl;
    }
    else if(operador=='-'){//to do subtraction
        operacion=numA-numB;
        cout<<numA<<" - "<<numB<<" = "<<operacion<<endl;

    }
    else if(operador=='*'){//to  multiply
        operacion=numA*numB;
        cout<<numA<<" * "<<numB<<" = "<<operacion<<endl;

    }
    else if(operador=='/'){// to divide
        if(numB!=0){//divide by 0 is not possible
            operacion=numA/numB;
            cout<<numA<<" / "<<numB<<" = "<<operacion<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }


    }

    return 0;
}
