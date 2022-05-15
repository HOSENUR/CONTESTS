#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin >>x>>y;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    int c=arr[x-1],d;
    int j =x-1;
    while(arr[j]==c)
    {
        j--;
    }
    d=arr[j];
    int sum=0;
    if((c-d)<y)
    {
        sum=c+d;
        int temp=(arr[x-1]-d)%y;
        temp=y-temp;
        sum=sum+temp;
    }
    if(sum>arr[x-1]*2)
    {
        cout<<sum<<"\n";
    }
    else{
        cout<<arr[x-1]*2<<"\n";
    
}
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
