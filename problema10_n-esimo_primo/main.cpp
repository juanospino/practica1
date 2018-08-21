#include <iostream>

using namespace std;

int main()
/*Program prints N-esime prime number
 * Needs the value of that n-esime prime number
 Prints the n-esime prime number according input value*/
{
    int value, number, d;
        int es_primo=0;//takes values  0 or 1

        cout<<("Buscar el N-esimo primo: ");
        cin>>value;

        number = 2;//first prime number is 2
        while (value > 0) {//to confirmate that value is positive

            /* determinate if number is prime */
            es_primo = 1;
            for (d = 2; d < number; d++) {
                if (number % d == 0) {//to take dividers
                    es_primo = 0;
                    break;

                }
            }
            if (es_primo!=0) {
                value--;

            }
            number++;

        }
        cout<<number-1<<endl;
    return 0;
}
