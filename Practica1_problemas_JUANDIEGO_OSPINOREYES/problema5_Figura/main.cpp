#include <iostream>
/*Program prints a rhombus
 * Program requires size of rhombus
 Prints a rhombus according size*/
using namespace std;

int main()
{

    int quebrado,numero;
    double aux;
        int counter,contB,contC, entero;
        cout<<"ingrese un numero entero positivo impar:"<<endl;cin>>numero;
        counter=0;
        entero=numero/2;//to create middle part
        aux=entero+(1/2);//spaces
        quebrado=numero/2;//
        if(numero<0){
            cout<<"Error"<<endl;
        }
        else if (aux<=quebrado){
            entero++;//aproximation to next number
        }
        contC=1;
        contB=entero-1;

        while (counter!=entero&&numero>0){
            while (counter<contB){//print first spaces
                cout<<" ";
                contB--;
            }
            while (counter!=contC){
                cout<<"*";//print character
                counter++;
            }
            counter=0;
            contB=entero-1;
            while (counter<contB){
                cout<<" ";//end spaces
                contB--;
            }
            contC=contC+2;//to control spaces each break line
            entero--;
            contB=entero-1;
            cout<<" "<<endl;
        }
        counter=0;
        entero=numero/2;//update values
        contC=numero-2;
        contB=1;

        while (counter!=entero+1&&numero>0){
            while (counter<contB){
                cout<<" ";//print spaces down part
                counter++;
            }
            counter=0;
            while (counter<contC){
                cout<<"*";//print char down part
                counter++;
            }
            counter=0;
            while (counter<contB){
                cout<<" ";//end spaces
                counter++;
            }
            contC=contC-2;
            entero--;//control spaces and chaars
            contB++;
            counter=0;
            cout<<" "<<endl;
        }

    return 0;
}
