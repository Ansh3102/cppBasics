// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

int main() {
   int arr[5]; 
   
   int s=0, e=4, f=0; 
   
   for(int i=0; i<5; i++)
   {
       cin>>arr[i]; 
   }
   
   while(s<=e)
   {
       if(arr[s] != arr[e])
       {
           f=0;
       }
	else
	{
	   s++; 
	   e--; 
	}
   }
   
   if(f == 1)
   {
       cout<<"It is pallindrome"; 
   }
   else 
   {
       cout<<"It is not a pallindrome"; 
   }
    return 0;
}