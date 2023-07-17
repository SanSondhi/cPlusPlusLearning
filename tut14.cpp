#include<iostream>
using namespace std;
int main(){
    // int a = 34;
    // cout<<"the value of a was "<<a;
    // a = 45;
    // cout<<"the value of a is "<<a;

    //  constants in c++
    // const int = 3.11;
    // cout<<"the value of a was "<<a;
    //  a = 45; // you will get error because a is a constant
    // cout<<"the value of a is "<<a;

    // manuplaters in c++
    int a = 3 ,b= 78 , c=1233;
    cout<<"the value of a without setw is "<<a<<endl;
    cout<<"the value of b without setw  is "<<b<<endl;
    cout<<"the value of c without setw  is "<<c<<endl;

    cout<<"the value of a is "<<setw(4)<<a<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;
    return 0;

}