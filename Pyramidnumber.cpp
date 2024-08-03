// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
   /*for(int r=1; r<=n; r++)
   {
       for(int j=1; j<=r; j++)
       {
           if(j!=r)
           {
            cout<<r<<"*";
           }
           else
           {
               cout<<r;
           }
       }
       cout<<endl;
   }
         for(int r=n; r>=1; r--)
   {
       for(int j=r; j>=1; j--)
       {
           if(j!=1)
           {
            cout<<r<<"*";
           }
           else
           {
               cout<<r;
           }
       }
      
       cout<<endl;
       
   }*/

    
  for(int i=0; i<n; i++)
  {
      
      for(int j=0; j<n-i-1; j++)
      {
          cout<< " ";
      }
      int start=i+1; 
      for(int k=0; k<=i; k++)
      {
          cout<<start; 
          start++;
      }

      
    int end=i*2; 
    for(int n=0; n<i; n++)
      {
        
        if(i!=0){
            cout<<end;
            end--;
        }
      }
      
      cout<<endl;
  }
  
  
        return 0;
}