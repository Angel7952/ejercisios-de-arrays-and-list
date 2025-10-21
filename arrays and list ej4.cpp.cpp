/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector> 
using namespace std;
int mcd(int a ,int b){
    while(b!=0){
        int resto= a % b;
        a=b;
        b=resto;
    }
    return a;
}
int main(){
    vector <int> numeros {21 , 49};
    int n= numeros.size(); 
  int resultado = numeros[0];
  for(int i=1;i<n;i++){
      resultado =mcd(resultado,numeros[i]);
  }
cout<<"el maximo comun divisor es:"<<resultado <<endl;
    return 0;
}