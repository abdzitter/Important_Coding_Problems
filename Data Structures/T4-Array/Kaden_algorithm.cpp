#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max_local_sum=a[0];
    int overall_sum=a[0];
    for(int i=1;i<n;i++)
    {
        if(max_local_sum>=0)
        {
            max_local_sum=max_local_sum+a[i];
        }
        else
        {
            max_local_sum=a[i];
        }
        if(max_local_sum>overall_sum)
        {
            overall_sum=max_local_sum;
        }
        
    }
    cout <<overall_sum;
	return 0;
}
