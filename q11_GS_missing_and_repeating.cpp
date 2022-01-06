/* Given an unsorted array Arr of size N of positive integers. One number
'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr, arr + n);
        int i;
        int *result = new int[2];
        for(i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                result[0] = arr[i];
                break;
            }
        }
        
        for(i = 0; i < n; i++){
            if(arr[i] != i + 1 && (i < n && arr[i+1] != i+1)){
                result[1] = i+1;
                break;
            }
        }
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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends