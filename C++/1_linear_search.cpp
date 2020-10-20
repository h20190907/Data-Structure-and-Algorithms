#include<iostream>
using namespace std;
int LSearch(int *l,int n,int elem)
{
    if(n!=0)
    for(int i=0;i<n;i++)
    {
        if(l[i]==elem)
        return i;
    }
    return -1;
}
int main()
{
    int l[6]={1,2,3,7,5,6};
    int n=6,elem=7;
    cout<<LSearch(l,n,elem)<<"\n";
    return 0;
}