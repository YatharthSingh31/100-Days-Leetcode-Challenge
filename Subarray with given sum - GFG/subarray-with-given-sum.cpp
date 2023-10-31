//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector <int> v;
        int left =0, right =0;
        long long sum=arr[0];
        bool isfound = false;
        if(s==0){
            v.push_back(-1);
            return v;
        }
        while(right<=n){
            if(sum==s){
                isfound=true;
                break;
            }
            else if(sum>s){
                sum-=arr[left];
                left++;
            }
            else if(sum<s){
                right++;
                if(right<n){
                    sum+=arr[right];
                }
            }
        }
        if(isfound){
            v.push_back(left+1);
            v.push_back(right+1);
        }
        else{
            v.push_back(-1);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends