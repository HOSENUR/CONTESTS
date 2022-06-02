#include<bits/stdc++.h>
using namespace std;
string solve()
{
  int x;
  cin>>x;
  return(x>30?"YES\n":"NO\n");
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
