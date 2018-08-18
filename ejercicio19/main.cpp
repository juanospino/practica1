#include <iostream>

using namespace std;

int main()
{
    int num,aum=1,divisores=0;
    cout<<"ingrese numero: "<<endl;cin>>num;
    while(aum<=num&&num>1){
        if(num%aum==0){
            divisores+=1;
            aum+=1;
        }
        else{
            aum+=1;
        }
    }
    if (divisores<3){
        cout<<num<<"  es primo"<<endl;

    }
    else{
        cout<<num<<"   NO es primo"<<endl;
    }
    return 0;
}
