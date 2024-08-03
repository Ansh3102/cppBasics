#include<iostream>
#include<string>
#include<limits.h>
using namespace std ;   
int pallinSubSeq(string A , int& maxCount , string res ,int i){
        if(i>=A.length())
        {
            //pallindrome logic
            cout<<res<<endl; 
            int s =0; 
            int e = res.length() - 1; 
            bool check = false; 
            int size = res.length();
            
            while(s<=e){
                if(res[s] == res[e]){
                    s++;
                    e--; 
                    check = true; 
                }
                else{
                    check = false ; 
                    break; 
                }
            }
            if(check == true ){
                if(maxCount < size ){
                    maxCount =  size; 
                }
            }
            res = ""; 
             
            return 0; 
        }
        
        //exclude 
        pallinSubSeq(A , maxCount , res, i + 1); 
        
        //include 
        res+=A[i]; 
        pallinSubSeq(A , maxCount , res , i + 1); 
       return maxCount; 
        
        
         
    }
    
    int main() {
        string A = "bab";
        int maxCount = INT_MIN; 
        string res=""; 
        int i=0; 
        
      int maxC = pallinSubSeq(A, maxCount , res, i); 
      cout<<maxC; 
    }
