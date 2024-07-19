#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *ptr[2];
    ptr[0]=&a;
    ptr[1]=&b;
    cout<<ptr[0]<<endl;
    cout<<ptr[1];
    
}