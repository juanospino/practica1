#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
/*Program creates a random number and user must be guess it
 * program requires numbers that user thinks that these are te hidden randon number
 prints the attempts that user takes in guess the number */
int main()
{
    int num,adivinar,contador=1,aux=1;
    srand(time(NULL));//to generate a random number every time that program runs
    adivinar = rand()%101;//to assign a random number in range [0,100]
    cout<<"Ingrese numero: "<<endl;
    cin>>num;
    while(aux!=0){
        if(num<adivinar){//condition that evaluates input number and hidden number
            cout<<num<<"  es menor a numero oculto"<<endl;
            contador++;//count attempts
            cout<<"Ingrese numero: "<<endl;cin>>num;

        }
        else if(num>adivinar){//condition that evaluates input number and hidden number
            cout<<num<<"  es mayor a numero oculto"<<endl;
            contador++;
            cout<<"Ingrese numero: "<<endl;cin>>num;
        }
        else if(num==adivinar){
            cout<<"Felicidades:  "<<num<<"   igual a: "<<adivinar<<endl<<"Intentos:  "<<contador<<endl;
            aux=0;

        }


    }


    return 0;
}
