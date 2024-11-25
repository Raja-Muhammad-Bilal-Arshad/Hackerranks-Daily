#include<iostream>
using namespace std;

long long factorial(long long n);

int main()
{
    long long factorial_n,factorial_r,factorial_nr;
    int n,r;


    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    factorial_n=factorial(n);
    factorial_r=factorial(r);
    factorial_nr=factorial(n-r);
    if(r>n || r<0 || n<0)
    {
        cout<<"Invalid Input";
        return 0;
    }
    
       cout<<endl<<" The value of n! is "<< factorial_n <<endl;
       cout<<endl<< "The value of r! is "<< factorial_r <<endl;
       cout<<endl<< "The value of (r-n)! is "<< factorial_nr <<endl;
        cout<<endl<< "The Binomial Answer is :   "<< factorial_n/(factorial_r*factorial_nr) <<endl;

    
}

long long factorial(long long n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
        
        return fact;
}
