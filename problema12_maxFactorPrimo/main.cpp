#include <iostream>

using namespace std;
/*Program show what factor of a number is the greater prime number
 * Requires a number
 Prints the greater prime number according the joined number*/
int main()
{
    int numero,aux,contador,Factorprimo,contador2;
       cout<<"ingrese numero para conocer el max factor pirmo: "<<endl;cin>>numero;
       aux=1;
       Factorprimo=0;
       contador =1;
       contador2=0;
       while (aux<=numero){
           aux++;
           while (aux>=contador){
              if (aux%contador==0){//to takes dividers
               contador2++;
              }
              contador++;
           }
           if (contador2==2){
               if (numero%aux==0){//to take max divider
                   if (Factorprimo<aux){
                       Factorprimo=aux; /*to convert the divider in my max divider
                                          and the maximum prime factor number*/
                   }
               }
           }
           contador=1;//restart number
           contador2=0;//and try with following number

       }
       cout<<"The max prime factor of "<<numero<<" is:  "<< Factorprimo<<endl;
    return 0;
}
