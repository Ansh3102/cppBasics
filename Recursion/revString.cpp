#include <iostream>
#include <string>
using namespace std;

void revString (string& str , int s , int e){
  if(s>e){ 
    return; 
  }
  swap(str[s] , str[e]);
  revString(str , s+1 , e-1);  
}
int main() {
  string str = "t"; 
  int s = 0; 
  int e = str.length()-1; 

  cout<<"before swapping : "; 
  for(int i=0; i<str.length() ; i++){
    cout<<str[i]; 
  }
  cout<<endl; 
  revString(str , s , e); 
  cout<<"after swappping : ";
  for(int i=0; i<str.length() ; i++){
    cout<<str[i]; 
  }
}