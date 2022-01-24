//Time Complexity of the Program will be O(N)
#include <iostream>
using namespace std;

int main()
{
  int n;
   std:: cin >> n;

    int arr[n];
    for(int i =0; i < n; i++)
    {
      std::cin>>arr[i];
    }
    int ans = 0;
    int mx = - 1;
    for (int i = 0; i < n; i++)
    {
      if(arr[i] > mx && arr[i] > arr[i+1])
      {
        ans = ans + 1;
      }
      mx  = max(mx,arr[i]);
    }
    std :: cout <<ans;
  return 0;
}
