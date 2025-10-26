/*Escriba un programa que ingrese un número de cinco dígitos, divida el número en sus dígitos
 individuales e imprima los dígitos separados entre sí por tres espacios cada uno. 
 [Sugerencia: use la división entera y el operador de módulo.] Por ejemplo, si el usuario ingresa 
 42339, el programa debe imprimir lo que se muestra en la salida de ejemplo.*/
 #include <iostream>
 #include <cmath>
 using namespace std;

 int main(){
    /*int n,r,x[5];
    
    cout<<"Inserte un numero "<<endl; cin>>n;
    for (int i = 0; i < 5; i++){
      x[i]=n%10;
      n/=10;
    }
    for (int i=4; i>=0; i--){
      cout<<x[i]<<" ";
    }
    
    return 0;*/

    /*Escribe un programa inverso, un programa que le pide al usuario tres números de un dígito 
    y los combina en un solo número de tres dígitos.*/

    int a[3],p=1,suma=0;

    for (int i = 0; i<3; i++){
      cout<<i+1<<". ingrese un numero"<<endl; cin>>a[i];

      a[i]*=p;
      p*=10;
      suma+=a[i];
    }
    cout<<suma;
    
return 0;
    
 }