#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FL(i,a,b) for(int i= a; i<= b; i++)

void solve()
{
  int n;
  cin>>n;
  FL(i,1,n/2){
    cout<<(i*10)<<" "<<((i*10)/5)<<" ";
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
