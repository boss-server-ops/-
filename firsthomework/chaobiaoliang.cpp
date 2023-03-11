#include<iostream>
using namespace std;
void recursion(int a[],int n)
{
    if(n==1)
    {
        return;
    }
    else
    {
         for(int i=0;i<n/2;i++)
         {
             a[i]+=a[n-i-1];
         }
        n=n/2;
        recursion(a,n);
    }
}
int main()
{
    int a[8];
    for(int i=0;i<10;i++)
    {
        a[i]=i;
    }
//    for(int m=8;m>1;m/=2)
//    {
//        for(int i=0;i<m/2;i++)
//        {
//            a[i]=a[2*i]+a[2*i+1];
//        }
//    }
//    cout<<a[0];
//    int sum1=0;
//    int sum2=0;
//    int sum=0;
//    for(int i=0;i<8;i+=2)
//    {
//
//        sum1+=a[i];
//        sum2+=a[i+1];
//    }
//    sum=sum1+sum2;
//    cout<<sum;
    recursion(a,8);
    cout<<"µÝ¹éº¯Êý"<<a[0];
}
