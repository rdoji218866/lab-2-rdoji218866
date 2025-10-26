/*Escriba un programa que lea en dos números enteros y determine e imprima si el
 primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    /*
    cout<<"Inserte dos numeros "<<endl; cin>>a>>b;

    if (a%b==0){
        cout <<a<<" es multiplo de "<<b<<endl;
    }else{
        cout <<a<<" no es multiplo de "<<b<<endl;
    } */
    cout<<"Ahora ingrese un numero"<<endl; cin>>c;
    
    if (c%2==0){
        cout <<c<<" es par"<<endl;
    }else{
        cout <<c<<" no es par"<<endl;
    }
    
    return 0;
}