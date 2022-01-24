//Time Complexity of the Program will be O(N)
//Google Kickstart Question
#include <iostream>
using namespace std;

int main()
{
  int test;
  std :: cin>>test;
  int n;
  while(test >= 0)
  {
   std:: cin >> n;

    int arr[n];
    for(int i =0; i < n; i++)
    {
      std::cin>>arr[i];
    }
    int ans = 2;
    int pd = arr[1]- arr[0];
    int cur = 2;
    for(int j = 2; j < n; j++)
    {
      if(arr[j]- arr[j-1] == pd)
      {
        cur = cur + 1;
      }
      else{
        pd = arr[j] - arr[j-1];
        cur = 2;
      }
      ans = max (pd, cur);
    }
    std :: cout << ans;

    test = test - 1;
  }
  return 0;
}
