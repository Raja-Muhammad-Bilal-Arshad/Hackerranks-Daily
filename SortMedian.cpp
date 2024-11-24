#include<iostream>
using namespace std;

void swap(int &a, int &b);
void sort(int array[],int length);
int main()
{
    int array[100],length,MAX=0,index=0,n=0;
    cout<<"Enter the number of array length:";
    cin>>length;
    n=length-1;
    for(int i=0;i<length;i++)
        cin>>array[i];
// OUTPUT THE ORIGINAL ARRAY
cout<<"The original Array "<<endl;
//Sorting the array
    for(int i=0;i<length;i++)
     cout<<array[i]<<" ";
     cout<<endl<<endl;
     // For sorting the array
    sort(array,length);
    for(int i=0;i<length;i++)
    cout<<array[i]<<" ";
    cout<<endl<<endl;
    //Finding the median of the array
    cout<<" The Median in the array is: ";
    cout<<endl;
    //If the length of the array is even
    if(length%2==0)
    cout<<array[length/2]<<" , "<<array[length/2-1];
    //If the length of the array is odd
    else
    cout<<array[length/2];
}








void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void sort(int array[],int length)
{
    int MAX,index,n;
    n=length-1;
    for(int i=0;i<length;i++)
    {
        MAX=array[0];
        index=0;
        for(int j=0;j<=n;j++)
        {
            if(array[j]>MAX)
            {
                MAX=array[j];
                index=j;
            }
        }
        swap(array[index],array[n]);
        n--;
    }
}
