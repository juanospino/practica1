#include <iostream>
/*Program says when a number is palindrome
 * requires an int positive number
 Program prints "palindrome" when the number is effectively palindrome  */
using namespace std;

int main()
{
    int num,aux,res,numInv=0;
    cout<<"Ingrese numero: "<<endl;cin>>num;
    aux = num;

    while (aux>0) {
        res = aux%10;//}
                     // }To descompose the number
        aux = aux/10;//}
        numInv = numInv*10+res;// to Invest number(num)
    }
    if (numInv==num){//when invested number is equal to number,so, number is plindrome
        cout<<num<<"  Es Palindormo"<<endl;
    }
    else{
        cout<<num<<"  NO es Palindormo"<<endl;
    }

    return 0;
}
