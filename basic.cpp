// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
    // full pyramid
   for(int r=0; r<n; r++)
   {
       for(int j=0; j<n-r-1; j++)
       {
            cout<<" ";
       }
       for(int k=0; k<=r; k++)
       {
           cout<<"* ";

       }
       cout<<endl;
       
   }

   // Inverted full pyramid

  /* for(int r=0; r<n; r++)
   {
       for(int j=0; j<r; j++)
       {
            cout<<" ";
       }
       for(int k=0; k<n-r; k++)
       {
           cout<<"* ";

       }
       cout<<endl;
       
   }*/
        return 0;
}
        