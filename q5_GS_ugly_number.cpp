/*Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … 
shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull result = 0;
	    set<ull> s;
	    s.insert(1);
	    n--;
	    while(n--){
	        auto itr = s.begin();
	        ull val = *itr;
	        s.erase(itr);
	        s.insert(val * 2);
	        s.insert(val * 3);
	        s.insert(val * 5);
	    }
	    
	    result = *s.begin();
	    return result;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends