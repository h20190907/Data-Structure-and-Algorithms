#include<iostream>
#include<math.h>
using namespace std;
void MSort(int *a,int l,int r)
{
    int arr[r-l+1],i=l,mid=floor((l+r)/2),j=mid,k=0;
    if(r-l>1){
    MSort(a,l,mid);
    MSort(a,mid,r);
    while(i!=mid&&j!=r)
    {
        if(a[i]<a[j])
        arr[k++]=a[i++];
        else
        arr[k++]=a[j++];
    }
    while(i!=mid)
    arr[k++]=a[i++];
    while(j!=r)
    arr[k++]=a[j++];
    for(int k=0;k<r-l;k++)
    a[k+l]=arr[k];
    }
}
int main()
{
    int a[6]={4,2,6,3,1,5};
    int n=6;
    MSort(a,0,n);
    for(int ij=0;ij<n;ij++)
    cout<<a[ij]<<" ";
    cout<<"\n";
    return 0;
}