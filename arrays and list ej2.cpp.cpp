/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> numeros={4,5,7,8,9,18,0,9,6,5,10};
    int pares=0;
    int impares=0;
    for(int n : numeros){
        
        if (n % 2 == 0)
            pares++;
        
        else
        impares++;
}
cout<<"cantiudad de numeros pares es :"<<pares<<endl;
cout<<"cantidad de numeros impares es "<<impares<<endl;
    return 0;
}