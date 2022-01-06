/*Given a pattern containing only I's and D's. I for increasing and D
for decreasing.Devise an algorithm to print the minimum number following that pattern.*/

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        int i,j,max;
        string result = "";
        result.append("1");
        max = 1;
        for(i = 0; i < S.length(); i++){
            if(S[i] == 'I'){
                result.append(to_string(max + 1));
                max += 1;
            }
            else if(S[i] == 'D'){
                result.append(to_string(result[i] - '0'));
                j = i;
               while(S[j] == 'D'){
                   result[j] = result[j] + 1;
                   j--;
               }
               max += 1;
            }
        }
        
        return result;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends