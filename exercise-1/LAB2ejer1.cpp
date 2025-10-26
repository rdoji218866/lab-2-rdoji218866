/*Escriba un programa que lea tres números enteros del teclado e 
imprima la suma, el promedio, el producto, el más pequeño y el 
más grande de estos números. */

#include<iostream>
using namespace std;

int main(){
    int n[3], mayor=0,menor=10000;
    float suma=0,producto=1,promedio;

    for (int i=0; i<3; i++){
        cout<<i+1<<". inserte un numero"<<endl; cin>>n[i];
        suma+=n[i];
        producto*=n[i];

        if (n[i]>mayor){
            mayor=n[i];
        }
        if (n[i]<menor){
            menor=n[i];
        }
    }
    
    promedio=suma/3;

    cout<<"La suma de los numeros es de: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El producto es: "<<producto<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;

    return 0;
}