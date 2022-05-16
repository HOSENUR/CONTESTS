#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

string solve()
{
  int x,y,z;
  cin>>x>>y>>z;
  return (x*y<=z?"YES\n":"NO\n");
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin>>tc;
  while(tc--)
  {
    cout<<solve();
  }
  return 0;
}
