#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
	
	int *q = p; 
	
	cout<<"value of i = " << i <<" "<< *p << " " << *q << endl; 
    cout<<"value of address of i = " << &i <<" "<< p << " " << q << endl; 
	*p = *p + 1;
	cout << *p <<endl ; 
	q =q + 1; 
	cout << "After incrementing the address:"<< q<< endl;	
    return 0;
}
