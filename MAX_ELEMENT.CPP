// The time Complexity of this program is O(N)
#include<iostream>
using namespace std;
int main()
{
    int mx = -100000;
    int n;
    std::cin>>n;

    int arr[n];
    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i ++)
    {
        if(mx < arr [i])
        {
            mx = arr[i];
        }
    }
    std::cout<<mx;
    return 0;
}
