#include <iostream>
#include <string>
using namespace std;
int lastOccur(string str , char x, int i, int& ans ){
  //Base case 
  if(i>=str.length()){
    return 0; 
  }
  

  if(str[i] == x){
    ans = i; 
      
  }
  lastOccur(str , x, i-1, ans); 
  return ans; 
}
int main() {
 string str = "abcddedd"; 
 char x = 'a';
 int i=str.length() - 1;  
 int ans; 

 int res =   lastOccur(str , x, i, ans);
 cout<<res;  
}