/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector> 
using namespace std;
int main(){
   vector <int>numeros{20,49,79,80};
    numeros.erase(numeros.begin());
   cout<<"lita depues de elimiar el primer elemento:";
   for(int num :numeros){
       cout<<num<<" ";
   }
    return 0;
}