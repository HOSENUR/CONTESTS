#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int x,y;
  cin>>x>>y;
  cout<< (x*10)+(90*y)<<"\n";
}
int main()
{
  int tc;
  cin>>tc;
  ios::sync_with_stdio(0);
  cin.tie(0);
  while(tc--){
    solve();
  }
}
