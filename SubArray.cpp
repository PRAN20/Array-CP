// Time Complexity Of the Program is O(n^2)
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >>  n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    std :: cin >> arr[i];
  }


  //Creating SubArray and Calculating Sum
  int value;
  for(int i =0; i < n; i++)
  {
    value = 0;
    for(int j = i; j < n; j++)
    {
      value += arr[j];
      std :: cout<<value<<endl;

    }
  }
} 
