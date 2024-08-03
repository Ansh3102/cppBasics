#include <iostream>
using namespace std; 
int digit (int n, int& count){
    //Base case 
    if(n == 0){
        return 1; 
    }
     int dig =  n % 10;  
     count++; 
     

    digit(n/10, count);
     cout<<dig<<" "; 

}
int main (){
 int n; 
 cout<<"Enter the number : "; 
 cin>>n ;
 int count = 0; 

 if(n == 0){
    return 0; 
 }

 digit(n , count);
 cout<<endl<<count;  

}