#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int x[6];

    for (int i = 0; i<6; i++){
        x[i]= pow(i,3)-pow(i,2)+5;
    }

    cout<<"***********"<<endl;
    cout<<"x  f(x)    "<<endl;
    cout<<"***********"<<endl;
    for (int i = 0; i<6; i++){
        cout<<i<<"  "<<x[i]<<endl;;
    }
    cout<<"***********"<<endl;
    
    return 0;
}