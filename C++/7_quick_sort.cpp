#include<iostream>
#include<math.h>
using namespace std;
void QSort(int *ll,int l,int r)
{
    if(r-l>1){
    int x=l;
    for(int i=l+1;i<r;i++)
    {
        if(ll[i]<ll[l])
        {
            x++;
            int temp=ll[i];
            ll[i]=ll[x];
            ll[x]=temp;
        }
    }
    if(x!=l)
    {
        int temp=ll[l];
        ll[l]=ll[x];
        ll[x]=temp;
    }
    if(x+1!=l && x!=l)
    QSort(ll,l,x);
    if(x+2!=r && x+1!=r)
    QSort(ll,x+1,r);
}
}
int main()
{
    int a[6]={4,2,6,3,1,5};
    int n=6;
    QSort(a,0,n);
    for(int ij=0;ij<n;ij++)
    cout<<a[ij]<<" ";
    cout<<"\n";
    return 0;
}