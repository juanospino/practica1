#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*Program guess a number
 * program dosn't requires number as input
 prints the attempts that program takes in  guess the number */
int main()
{
    int aleatorio,aux=0,contador=1;
    char condicion=1;
    srand(time(NULL));//to generate a random number every time that program runs
    aleatorio= 0+ rand()%(101-1);//to assign a random number in range [0,100]

    cout<<aleatorio<<endl;
    cout<<"Es mayor o menor o igual?(use > or < or =) "<<endl;cin>>condicion;
    while(condicion!=0){


        if(condicion==60){//60 equals less than in ASCII
            aux=aleatorio;
            aleatorio=0+rand()%((aux+1)-1);//to generate random number in range (last random number,100]
            cout<<aleatorio<<endl;
            cout<<"Es mayor o menor o igual?(use > or < or =) "<<endl;cin>>condicion;
            contador++;//count Attempts

        }
        else if(condicion==62){//62 equals greater  than in ASCII
            aux=aleatorio;
            aleatorio=aux+rand()%((100+1)-aux);//to generate random number in range [0,last random number)
            cout<<aleatorio<<endl;
            cout<<"Es mayor o menor o igual?(use > or < or =) "<<endl;cin>>condicion;
            contador++;

        }
        else if (condicion== 61){//61 equals "equal" in ASCII
            cout<<"Adivine :D "<<endl<<"intentos:  "<<contador<<endl;
            condicion=0;
        }
        else{
            cout<<"error de ingreso"<<endl;
            break;
        }
    }





    return 0;
}
