#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

int solve(int n)
{
  if(n%3!=0)
  {
    return -1;
  }
  if(n%3==0 && n%2==0)
  {
    return 0;
  }
  else{
    return 1;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  cout<<solve(n);
}
