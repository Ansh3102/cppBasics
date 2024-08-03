#include <iostream>
#include<string>
using namespace std;
bool pallindromeCheck(string str , int s , int e){
  if(s>e){
    return false; 
  }
  if(str[s] == str[e]){
    return true;
  }
  else
    return false; 

  pallindromeCheck(str , s+1 , e-1); 
}
int main() {
  string str = "car"; 
  int s =0; 
  int e = str.length()- 1; 

bool ans = pallindromeCheck(str , s , e); 
cout<<ans; 
return 0 ; 
}