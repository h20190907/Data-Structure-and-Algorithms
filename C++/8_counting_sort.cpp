//array elements must be positive and be small integers
#include<iostream>
using namespace std;
void CSort(int *l,int n,int max=50)
{
    if(n>1)
    {
        int a[max];
        for(int i=0;i<max;i++)
        a[i]=0;
        for(int i=0;i<n;i++)
        a[l[i]-1]+=1;
        int j=0;
        for(int i=0;i<max;i++)
        if(a[i]!=0){
        for(int k=0;k<a[i];k++)
        l[j+k]=i+1;
        j+=a[i];
        }
    }
}
int main()
{
    int a[6]={4,2,6,3,1,5};
    int n=6,max=10;
    CSort(a,n);
    for(int ij=0;ij<n;ij++)
    cout<<a[ij]<<" ";
    cout<<"\n";
    return 0;
}