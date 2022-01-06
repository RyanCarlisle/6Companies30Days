/*Find the kid which gets tha damaged toy*/

// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int first_round = M + K - 1;
        if(first_round <= N){
            return first_round;
        }
        
        first_round = first_round % N;
        if(first_round == 0){
            return N;
        }
        else
            return first_round;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends