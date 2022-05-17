#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

int solve()
{
  ll a,b;
  cin>>a;
  cin>>b;
  return (a-(a%b));
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout<<solve();
}
