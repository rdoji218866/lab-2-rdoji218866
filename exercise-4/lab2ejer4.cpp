/* Escriba un programa de C ++ que lea tres números del teclado y encuentre el número 
del medio entre los tres números. Suponga que los tres números son diferentes. [Sugerencia: 
encuentre primero los valores más grandes y más pequeños.]*/
#include <iostream>
using namespace std;

int main(){
    int n[3],mayor=0, menor=1000, medio;
    cout<<"Inserte numeros diferentes"<<endl;

    for (int i = 0; i<3; i++){
       cout<<i+1<<". Inserte un numero"<<endl;cin>>n[i];
       if (n[i]>mayor){
        mayor=n[i];
       }
       if (n[i]<menor){
        menor=n[i];
       }
       if (n[i]<mayor && n[i]>menor){
        medio=n[i];
       }
    }
    cout<<"el numero medio es: "<<medio<<endl;
    return 0;
}
