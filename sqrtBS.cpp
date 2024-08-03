#include <iostream>
using namespace std;
int sqrt(int n){
int s=0; 
int e = n; 
int mid = s + (e - s)/2;
int ans;  
while(s<=e)
{
    if(mid * mid == n)
    {
        return mid; 
    }
    if(mid * mid < n)
    {
        ans = mid;
        s = mid + 1; 

    }
    else
    {
        e = mid - 1; 
    }
    mid = s + (e - s)/2; 


}
return ans; 


}
int main (){
    int n; 
    cin>>n; 
    int precision; 
    cout<<"Enter the precision "<<endl; 
    cin>>precision; 

    int ans = sqrt(n);

    double finalAns = ans; 
    double step = 0.1; 
    for(int i=0 ; i<precision ; i++)
    {
        for(double j = finalAns; j*j<=n; j = j+ step)
        {
            finalAns = j; 
        }
        step /= 10; 
    }


    cout<<"Square root of n with precision "<<precision<<"is "<<finalAns<<endl; 
}
