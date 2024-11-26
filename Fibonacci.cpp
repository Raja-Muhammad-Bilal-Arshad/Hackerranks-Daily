#include<iostream>
using namespace std;
int fibonacci(int n);


int main()
{
    int n,fib;
    cout<<"Enter nth Fibonacci Number: ";
    cin>>n;
    if(n==1)  {        cout<<"Fibonacci of the given number you entered is: 1";     return 0;}

    if(n==0)   {        cout<<"Fibonacci of the given number you entered is: 0";     return 0;}


    fib=fibonacci(n);
    cout<<"Fibonacci of the given number you entered is: "<<fib;

}


int fibonacci(int n)
{
    int x=0,y=1,z;
    for(int i=2;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }
    return z;
}