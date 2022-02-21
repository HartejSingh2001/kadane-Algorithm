// kadane algo
#include <iostream>
#include <climits>
using namespace std;
void fun(int arr[],int n)
{
    int currsum=0; int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }
    }
    cout<<"The answer is :: "<<maxsum;
}
int main()
{
    cout<<"Hello World";
    int n;
    cout<<"Enter n ";
    cin>>n;
    int i,arr[n];
    cout<<"Enter array values ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fun(arr,n);

    return 0;
}
