#include<iostream>
using namespace std;
void swap (int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void BSort(int *l,int n)
{
    if(n>1)
    for(int i=0;i<n;i++){
        int temp=i;
        for(int j=i+1;j<n;j++)
        if(l[temp]>l[j])
        temp=j;
        if(temp!=i)
        swap(l[i],l[temp]);
    }
}
int main()
{
    int l[6]={10,5,2,3,8,1};
    int n=6;
    BSort(l,n);
    for(int i=0;i<n;i++)
    cout<<l[i]<<" ";
    return 0;
}