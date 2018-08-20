#include <iostream>

using namespace std;
/*Program converts majus to minus or vice versa
 * requires a character of type letter
 Program prints letter converted */
int main()
{
    char letra;
    cout<<"Ingrese una letra: "<<endl;cin>>letra;
    if (letra>=65&&letra<=90){//range Majuscules in ASCII
        letra = letra+32;/*while letter in range majuscules, if we plus 32 by letter,
                           we gets letter in minuscule*/
        cout<<"Letra convertida a: "<<letra<<endl;
    }
    else if(letra>=97&&letra<=122){// range minuscule in ASCII
        letra= letra-32;/*while letter in range minuscules, if we rest 32 by letter,
                           we gets letter in majuscule*/
        cout<<"Letra convertida a: "<<letra<<endl;
    }
    else{
        cout<<"Caracter ingresado distinto a letra"<<endl;//when character isn't a letter
    }


    return 0;
}
