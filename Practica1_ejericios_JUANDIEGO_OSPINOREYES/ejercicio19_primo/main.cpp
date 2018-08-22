#include <iostream>

using namespace std;
/*Program calculates prime number
 * requires an int number
 prints average of these numbers*/
int main()
{
    int num,aum=1,divisores=0;
    cout<<"ingrese numero: "<<endl;cin>>num;
    while(aum<=num&&num>1){
        if(num%aum==0){//to take dividers
            divisores+=1;//count how many dividers there are
            aum++;
        }
        else{
            aum++;
        }
    }
    if (divisores<3){//when dividers are greater than 3, so, the number isn't a prime number
        cout<<num<<"  es primo"<<endl;

    }
    else{
        cout<<num<<"   NO es primo"<<endl;
    }
    return 0;
}
