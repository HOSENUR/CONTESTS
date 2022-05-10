//Lucky?
#include <iostream>
#include <string>
#define ll long long
using namespace std;

string judge(){
  string s;
  cin >> s;
  //s is the string to check
  if(int(s[0])+int(s[1])+int(s[2])==int(s[3])+int(s[4])+int(s[5])){
    //if its a lucky number returning YES 
    return "YES\n";
  }else{
    //if not a lucky number returning NO
    return "NO\n";
  }

}

int main(){
  ll n;
  //n is the number of test cases
  cin >> n;
  //getting the number of test cases 
  while(n--){
    //calling the judge function n times
    cout << judge(); 
  }
}
