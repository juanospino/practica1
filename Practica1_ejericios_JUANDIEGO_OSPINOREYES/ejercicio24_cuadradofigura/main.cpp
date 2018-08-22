#include <iostream>

using namespace std;
/*Program prints a square
 * requires a positive int number (side)
 prints a square corresponding to number(side) */
int main()
{
    int lado,cont1=1,cont2=1;
    cout<<"Ingrese lado del cuadrado"<<endl;cin>>lado;
    while (cont2 < lado+1){
          cont1 = 1;

          while (cont1 < lado+1){
                if (cont2 == 1){
                   cout<<("+ ");//to print first line according to the number
                }
                if (cont2 != 1){//         }
                   if (cont2 != lado){//     }to print the next line according number
                      if (cont1 == 1){//   }
                         cout<<("+ ");
                      }

                      else{
                          if (cont1 < lado){
                             cout<<("  ");//to print void spaces
                          }
                          else{
                              cout<<("+ ");//to print character around
                          }
                      }
                   }
                   else{
                        cout<<("+ ");//to print character around
                   }
                }

                cont1++;

          }
          cout<<endl;
          cont2++;//to close loop
    }
    cout<<endl;




    return 0;
}
