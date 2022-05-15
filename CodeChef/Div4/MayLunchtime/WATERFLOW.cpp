#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int a,b,c,d;
  cin >> a>>b>>c>>d;
  if(a+(d*c)>b)
  {
    cout<<"overFlow\n";
  }
  if(a+(d*c)==b)
  {
    cout<<"filled\n";
  }
  if(a+(d*c)<b)
  {
    cout << "unfilled\n";
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x;
  cin >> x;
  while(x--)
  {
    solve();
  }
  return 0;
}
