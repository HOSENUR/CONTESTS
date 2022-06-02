#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int x,a,b;
  cin >> x;
  cin >> a >>b;
  if(a+b<=x)
  {
    cout<<"YES";
  }
  else {
    cout << "NO";
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
