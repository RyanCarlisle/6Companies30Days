/*Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs 
such that sum of every pair is divisible by k.*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int, vector<int>> maps;
        int i,flag = 0;
        if(nums.size() % 2 != 0){
            return false;
        }
        for(i = 0; i < nums.size(); i++){
            maps[nums[i] % k].push_back(nums[i]);
        }
        if(maps[0].size() % 2 == 0){
            flag = 1;
        }
        for(i = 1; i < k/2 + 1; i++){
            if(maps[i].size() == maps[k-i].size() && i != k-i){
                flag = 1;
            }
            else if(i == k-i && maps[i].size() % 2 == 0){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        return flag;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends