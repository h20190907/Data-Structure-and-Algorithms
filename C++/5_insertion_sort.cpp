#include<iostream>
#include<math.h>
using namespace std;
void ISort(int *l,int n){
    for(int i=1;i<n;i++)
    {
        int t=l[i],in=i;
        for(int j=i-1;j>=0;j--)
        if(l[j]>t){
        in=j;
        l[j+1]=l[j];}
        else
        break;
        if(in!=i)
        l[in]=t;
    }
}
int main()
{
    int l[6]={6,1,5,10,4,7};
    int n=6;
    ISort(l,n);
    for(int i=0;i<n;i++)
    cout<<l[i]<<" ";
    return 0;
}