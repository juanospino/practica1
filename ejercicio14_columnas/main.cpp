#include <iostream>

using namespace std;
/*Program prints two columns
 * no requires any
 Program prints columns since 0 to 50(column1)and since 50 to 1(column2*/
int main()
{
    int creciente = 1,decreciente=50;
    while(creciente<=50&&decreciente>=1){
        cout<<creciente<<"  "<<decreciente<<endl;
        creciente++;
        decreciente--;
    }
    return 0;
}
