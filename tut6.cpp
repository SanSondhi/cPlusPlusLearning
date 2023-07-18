//there are two types of header files
// 1. system header files- it comes with the compiler
#include<iostream>

// 2. user defined header file- it is written by programmer
// #include"this.h" this will produce error if this.h is not present in current directory

using namespace std;
int main(){
    int a=5,b=6;
    cout<<"operators in c++"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    //Arithmatic operators
    cout<<"the value of a+b is "<<a+b;
    cout<<"\nthe value of a-b is"<<a-b;
    cout<<"\nthe value of a*b is"<<a*b;
    cout<<"\nthe value of a/b is"<<a/b;
    cout<<"\nthe value of a%b is"<<a%b;
    cout<<"\nthe value of a ++ is"<<a++;
    cout<<"\nthe value of a -- is"<<a--;
    cout<<"\nthe value of ++a is"<<++a;
    cout<<"\nthe value of --a is"<<--a;

    // Assignment operators --> used to assign values to operators
    // int a = 3, b=9;
    // char = 'd';

    // Comparison operators   
    cout<<"\nthe value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of the a == b"<<endl;

    // Logical operators
    cout<<"the value of logical operator ((a==b) && (a<b)) is "<<((a==b)&&(a<b));
    
    return 0;
}