//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.


     int n = nums.size();

    vector<vector<int>> v(n);

    for(int i=0;i<nums.size();i++){

        for(int j=i+1;j<nums.size();j++){

            if(nums[j]>nums[i]){

             v[i].push_back(j);   

            }

        }

    }

    int ct = 0;

    for(int i=0;i<nums.size();i++){

        for(int j=0;j<v[i].size();j++){

            int a = v[v[i][j]].size();

            // int b = (a*(a-1))/2;

            ct+=a;

        }

    }

    return ct;

 }
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends