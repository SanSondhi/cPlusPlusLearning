#include<iostream>
 using namespace std;

 int c = 45;

int main(){
    // **********Built in data types*************

    // int a,b,c;
    // cout<<"enter the value of a: "<<endl;
    // cin>>a;  
    // cout<<"enter the value of b: "<<endl;
    // cin>>b;

    // c=a+b;
    // cout<<"the sum is " <<c<<endl;
    // cout<<"the global c is " <<::c;

    // **********float,double and long double literals**********
    
    // float d = 34.4f;             
    // long double e =34.4L;
    // cout<<"the size of 34 is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34F is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34l is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34L is "<<sizeof(34.4f)<<endl;
    // cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;

    // **************Reference variables*******************
    // rohan das----> monty -----> rohu ----> dangerous coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
 }