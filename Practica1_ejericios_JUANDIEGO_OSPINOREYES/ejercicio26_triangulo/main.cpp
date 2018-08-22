#include <iostream>

using namespace std;
/*Program prints type of triangle
 * requires three numbers, they must be compose the sides of a triangle
 prints the triangle's class */
int main(){
    short int ladoA,ladoB,ladoC;
    cout<<"ingrese lado 1"<<endl;cin>>ladoA;
    cout<<"ingrese lado 2"<<endl;cin>>ladoB;
    cout<<"ingrese lado 3"<<endl;cin>>ladoC;
    if(ladoA>0&&ladoB>>0&&ladoC>>0){//to evaluate if numbers are positive
        if(ladoA+ladoB>ladoC&&ladoA+ladoC>ladoB&&ladoB+ladoC>ladoA){//to evaluate general equation of a triangle
            if(ladoA==ladoB&&ladoA!=ladoC){//case when only two sides are same
                cout<<"Triangulo isoceles"<<endl;
            }
            else if (ladoA==ladoC&&ladoA!=ladoB) {//case when only two sides are same
                cout<<"Triangulo isoceles"<<endl;

            }
            else if (ladoB==ladoC&&ladoB!=ladoA) {//case when only two sides are same
                cout<<"Triangulo isoceles"<<endl;
            }
            else if(ladoA==ladoB&&ladoA==ladoC){//case when all sides are same
                cout<<"Triangulo equilatero"<<endl;
            }
            else if (ladoA!=ladoB&&ladoA!=ladoC&&ladoB!=ladoC) {//case when all sides are different
                cout<<"Triangulo escaleno"<<endl;

            }
        }
        else{
            cout<<"No son medidas para formar un triangulo"<<endl;
        }
    }
    else{
        cout<<"Medida de lados incorrecta"<<endl;
    }
}

