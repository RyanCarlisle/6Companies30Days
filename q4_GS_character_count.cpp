/*Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
(Modified version of question named Cute Monkeys)*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string result;
  int count = 1, i;
  for(i = 0; i < src.length(); i++){
      while(src[i] == src[i + 1]){
          count++;
          i++;
      }
      result.push_back(src[i]);
      result.append(to_string(count));
      count = 1;
  }
  return result;
}     
 
