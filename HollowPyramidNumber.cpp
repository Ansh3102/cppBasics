  #include<iostream>
  using namespace std; 
int main()
{
  int n; 
  cin>>n;

  for(int i=0; i<n; i++)
  {
      
      for(int j=0; j<n-i-1; j++)
      {
          cout<<" ";
      }

      for(int k=0; k<2*i + 1; k++)
      {
        int start=i+1;
        if(i==0 || i==n-1)
        {
            if(k%2 ==0)
            {
                cout<<start;
                start++;
            }
            else{
                cout<<" ";
            }
        }
        else if(k==0)
        {

        }
      }
      cout<<endl;
  }
  return 0; 
}