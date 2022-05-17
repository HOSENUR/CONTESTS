#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i*i<b; i++)

string solve()
{
  ll n;
  cin>>n;
  if(n>2 && n%2==0)
  {
    return "0";
  }
  ll c=0;
  FL(i,2,n)
  {
    if(n%i==0)
    {
      return "0";
    }
  }
  return "1";
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout<<solve();
}

