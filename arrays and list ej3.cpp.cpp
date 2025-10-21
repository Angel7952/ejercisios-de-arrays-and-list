/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector> 
using namespace std;
int main(){
    vector <int>numeros  {6, 4, 2, 0, 10}; 
    int n = numeros.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(numeros[j]>numeros[j+1]){
                int temp=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=temp;
            }
        }
    }
  cout<<"numeros en orden ascendente:";
for(int num:numeros){
    cout<< num <<" ";
}

    return 0;
}