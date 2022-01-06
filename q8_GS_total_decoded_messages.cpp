/*A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
You are an FBI agent. You have to determine the total number of ways that message can be decoded, 
as the answer can be large return the answer modulo 109 + 7.*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int mod = 1e9+7;
		    if(str[0] == '0'){
		        return 0;
		    }
		    if(str.length() == 1){
		        return 1;
		    }
		    
		    if(str[str.length() - 1] == '0' && str[str.length() - 2] >= '3'){
		        return 0;
		    }
		    
		    int arr[str.length()+1];
		    arr[0] = 1;
		    arr[1] = 1;
		    int i;
		    for(i = 2; i <= str.length(); i++){
		        arr[i] = 0;
		        
		        if(str[i-1] >= '1'){
		            arr[i] = arr[i - 1];
		        }
		        
		        if(str[i-2] == '1' || (str[i-2] == '2' && str[i-1] <= '6')){
		            arr[i] = (arr[i] + arr[i-2]) % mod;
		        }
		    }
		    
		    return arr[str.length()];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends