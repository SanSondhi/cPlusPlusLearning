#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;

    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=8-2*i;k++)
        {
            cout<<" ";
        }
        for(l=1;l<=i;l++)
        {
             cout<<"*";   
        }
        cout<<endl;
    }
     for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=8-2*i;k++)
        {
            cout<<" ";
        }
        for(l=1;l<=i;l++)
        {
             cout<<"*";   
        }
        cout<<endl;
    }
   
}