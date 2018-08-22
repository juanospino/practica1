#include <iostream>

using namespace std;
/*Program show the result of  add  all number's digits raised to itselfs
 * program requires a int positive number
 Proram prints the summation of that numbers's digitis raised to itselfs*/
int main()
{
    long int num,div=1,resto=1,descomponer,suma=0;
    cout << "Ingrese numero: " << endl;cin>>num;
    while(resto!=0){
        if(num/div>=9){//to descompose the number by digits
            div*=10;
        }
        else{
           descomponer = num/div;
           resto = num%div;//the rest of that number
           num =resto;
           div = 1;
           int contador=1,aux;
           aux = descomponer;
           while(contador<descomponer){//to do empowerment by number's digits
               aux =aux*descomponer;
               contador++;
           }
           suma += aux;//to add that empowerment of each digits and sum up
        }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}
