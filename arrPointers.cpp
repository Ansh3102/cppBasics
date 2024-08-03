#include <iostream>
using namespace std;

int main(){
	
	int arr[10] = {10,28,27,18,37};
	
	cout<<"Address of 1st memory block of array :"<< arr<<" "<<&arr[0]<<endl;
	cout<<"value of 1st memory block of array :"<< arr[0]<<endl;
	
	
	cout<< *arr<<" "<<*arr + 1<<endl;
	cout<< *(arr+1)<<endl;
	cout<< *arr + 1<<endl;
	cout<< *arr + 2<<endl;
	cout<<*(arr + 2)<<endl;
	
	int i = 0;
	
	cout<<arr[i]<<" "<<i[arr]<<endl;
	
	
}
