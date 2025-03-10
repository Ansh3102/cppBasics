#include <iostream>
using namespace std;

void merge(int* arr , int s , int e){
  int mid = (s + e)/2; 

  int len1 = mid - s + 1; 
  int len2 = e - mid ; 

  int* left = new int[len1]; 
  int* right = new int[len2]; 

  int k = s; 
  for(int i=0; i<len1; i++){
    left[i] = arr[k]; 
    k++; 
  }
  k = mid + 1; 
  for(int i=0; i<len2; i++){
    right[i] = arr[k]; 
    k++; 
  }

  //Logic of merge 
  int leftIndex = 0; 
  int rightIndex = 0;
  int mainIndex = s; 
  while(leftIndex < len1 && rightIndex < len2){
  if(left[leftIndex] < right[rightIndex]){
    arr[mainIndex++] = left[leftIndex++]; 
  } 
  else{
    arr[mainIndex++] = right[rightIndex++]; 
  }
  }
  while(leftIndex < len1){
    arr[mainIndex++] = left[leftIndex++]; 
  }
  
  while(rightIndex < len2){
    arr[mainIndex++] = right[rightIndex++]; 
  }

}



void mergeSort(int* arr , int s , int e){
    //Base case 
    if(s >= e){
      return; 
    }
  int mid = (s + e)/2; 
  //recusion will sort the left part
  mergeSort(arr , s , mid); 

  //recusion will sort the right part
  mergeSort(arr , mid + 1  ,e ); 
  
  //Merge
  merge(arr , s ,e); 
}

int main() {
 int arr[] = {5 ,21, 3, 1, 9, 4}; 
 int n = 6; 
 int s = 0 ;
 int e = n-1; 

 mergeSort(arr , s , e); 

 for(int i=0; i<n ; i++){
  cout<<arr[i]<<" "; 
 }

}