//displaying the string combinations 
//input = "a1b1"
// output = "a1b1" ,"A1b1", "a1B1", "A1B1" 
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

void findCombStr(string s , vector<string>& res, int i){ 
     
  string rs = ""; 
  int k=0; 
      while(k<s.length()){
        if(s[k] == s[i]){
          rs += s[k] - 'a' + 'A'; 
          k++; 
        }
        else{
          rs+=s[k]; 
          k++; 
        }
      }
      res.push_back(rs); 
      

}

void getWords(string s , vector<string>& res, int i){
  if(i>=s.length())
    return; 
 
  if(s[i] >= 'a' && s[i] <= 'z'){
    findCombStr(s, res, i );
    getWords(s, res, i+1); 
  }
  else{
    getWords(s , res , i+1); 
    
  }
}




// string getRemainStr(string s , int i , char ch){
//     if(i>=arr.size){
//       return ""; 
//     }
//     string rs = ""; 
//     if(s[i]!=ch){
//       rs+=s[i]
//     }
// }

int main() {
  string s; 
  getline(cin , s); 
  vector<string> res; 
  string rs=""; 
  int i =0; 
  int k=0; 
  getWords(s, res, i);

   string result= ""; 
  while(i<=s.size()){
   if(s[i] >= 'a' && s[i] <= 'z'){
    result += s[i] - 'a' + 'A';
    i++; 
   }
   else{
    result+= s[i]; 
    i++; 
   }
  }

  res.push_back(result); 

  for(auto i : res){
    cout<<i<<" "; 
  }

}