/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//calcular el promedio de la lista ejercisio 1
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<double> numeros = {1.0,2.6,5.6,7.8,8.0};
    double suma = 0.0;
    for(double n : numeros){
         suma +=n;
}
double promedio = suma/numeros.size();

    cout << "El promedio es: " << promedio << endl;

    return 0;
}


