#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

string solve()
{
  ll n;
  cin>>n;
  ll c=0;
  FL(i,1,sqrt(n))
  {
    if(n%i==0)
    {
      c+=i;
      if(i!=1)
      {
        c+=n/i;
      }
    }
  }
  if(c==n)
  {
    return "YES";
  }
  else {  
  return "NO";
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout<<solve();
}
