/*An encoded string (s) is given, the task is to decode it. The pattern in which the strings were encoded were as follows
original string: abbbababbbababbbab 
encoded string : 3[a3[b]1[ab]]*/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        string result = "", temp="", temp2="", number = "";
        stack<char> stak;
        int n;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ']'){
                stak.push(s[i]);
            }
            else if(s[i] == ']'){
                while(stak.top() != '['){
                    temp = stak.top() + temp;
                    stak.pop();
                }
                stak.pop();
                
                while(isdigit(stak.top())){
                    number = stak.top() + number;
                    stak.pop();
                    if(stak.empty()){
                        break;
                    }
                }
                
                n = stoi(number);
                while(n--){
                    temp2 = temp2 + temp;
                }
                
                result = temp2;
                if(stak.empty()){
                    break;
                }
                
                for(int j = 0; j < temp2.length(); j++){
                    stak.push(temp2[j]);
                }
                
                temp = "";
                temp2 = "";
                number = "";
            }
        }
        return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends