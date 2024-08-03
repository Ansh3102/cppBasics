#include <iostream>
using namespace std; 

int max_profit(int prices[], int max, int temp )
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            temp = prices[j] - prices[i];
            if(temp>max)
            {
                max = temp; 
            }
        }
    }
    return max; 

}

int main()
{
    int max = INT_MIN; 
    int temp = 0; 
    int prices[5]; 

    for(int i=0; i<5; i++)
    {
        cin>>prices[i]; 
    }

    cout<<"Max Profit = "<<max_profit(prices, max, temp); 


}