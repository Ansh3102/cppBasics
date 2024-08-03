// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
int main() {
   int a[3], b[3], c[6]; 
   cout<<"Enter 1st array"<<endl;
   for(int i=0; i<3; i++)
   {
       cin>>a[i];
   }
   cout<<"Enter 2nd array"<<endl;
   for(int i=0; i<3; i++)
   {
       cin>>a[i];
   }
   int k=0,i=0,j=0; 
   while(i<3 && j<3)
   {
       if(a[i] < b[j])
       {
           c[k] = a[i];
           i++; 
           k++; 
       }
       else 
       {
           c[k] = b[j]; 
           j++; 
           k++; 
       }
   }
   if(i>3)
    {
       while(j<3)
       {
           c[k] = b[j]; 
           j++; 
           k++; 
        }
   }
   else
   {
       
   while(i<3)
   {
       c[k] = b[i]; 
       i++; 
       k++; 
   }
   
   }
   
   for(int i=0; i<6; i++)
   {
       cout<<c[i]<<" "; 
   }
    return 0;
}