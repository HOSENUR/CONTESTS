#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  ll a,b;
  cin>>a>>b;
  FL(i,a<b?a:b,a*b)
  {
    if(i%a==0 and i%b==0)
    {
      cout<<(a*b)/i<<" "<<i;
      return;
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
