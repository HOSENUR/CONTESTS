#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int n;
  cin>>n;
  if(n%5==0||n%6==0)
  {
    cout<<"YES\n";
  }
  else {
    cout<<"NO\n";
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
