#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    string s;
    cin >> s;
    int a = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    int b = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    if (a == b){
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
