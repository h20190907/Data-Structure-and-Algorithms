#include<iostream>
#include<math.h>
using namespace std;
int BSearch(int *l,int n,int elem)
{
    int left=0,right=n-1,mid;
    if(n!=0)
    while(left<right){
        mid=floor((left+right)/2);
        if(elem==l[mid])
        return mid;
        else if(elem<l[mid])
        right=mid-1;
        else
        left=mid+1;
    }
    return -1;
}
int main()
{
    int l[6]={1,2,4,6,8,10};
    int n=6,elem=8;
    cout<<BSearch(l,n,elem)<<"\n";
    return 0;
}