#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int x,y;
  cin>>x>>y;
  FL(i,x,y)
  {
    if(i%2==1){
      cout<<i<<" ";
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
