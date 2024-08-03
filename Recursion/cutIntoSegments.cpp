#include<iostream>
#include<limits.h>
using namespace std; 

int solve (int n , int x, int y, int z){

    //base case 
    if(n ==0){
        return 0; 
    }
   if(n < 0){
    return INT_MIN;
   }

//Baakki recursion sambhal lega
    int a = solve(n-x , x ,y, z ) + 1;
    int  b = solve(n-y , x , y, z ) + 1; 
    int c = solve (n-z , x , y, z) + 1 ; 
    
    return max (a , max(b,c)); 
    

}
int main (){
    int n = 8; 
    int x = 3; 
    int y = 2; 
    int z = 3; 

    int maxi = INT_MIN; 
    
    int ans = solve(n , x, y, z); 
    if(ans < 0)
      return 0; 
    cout<<ans ;
}