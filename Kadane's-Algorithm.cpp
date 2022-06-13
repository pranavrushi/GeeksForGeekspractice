// Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int a[], int n){
        long long maxh = 0, maxf = a[0];
        for(int i=0;i<n;i++) 
            {
                maxh+=a[i];
                if(maxf<maxh)
                maxf=maxh; 
                if(maxh<0)
                    maxh=0;
        }
            return maxf;
    }
};
int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
