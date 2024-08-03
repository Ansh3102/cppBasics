// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sumDigits(int n)
{
    int r=0; 
    while(n != 0)
    {
    
        r += (n%10) * (n%10); 
        n = n/10;
    }
    return r;
}

int main() {
 int n; 
 cin>>n;
 int r =0,f; 
 
 r = sumDigits(n);
 if(r!=1)
 {
 for(int i=0; r<10; r++)
 {
     sumDigits(r); 
     f=0; 
     
 }
 }
 else
 {
     f=1;
    
 }
 
 if(f==1)
 {
      cout<<"It is an Happy number";
 }
 else
 {
      cout<<"It is not an Happy number";
 }
  
    return 0;
}