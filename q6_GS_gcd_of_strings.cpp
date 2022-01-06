/*Given two strings str1 and str2. We say that str2 divides str1 if it's possible
to concatenate multiple str2 to get str1. For example, ab divides abab.
if str2 does not divide str1, return -1. Otherwise, return the smallest string 
str3 such that str3 divides both str1 and str2.*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i;
        int flag = 0;
        int big_length, small_length;
        if(str1.length() > str2.length()){
            big_length = str1.length();
            small_length = str2.length();
        }
        else{
            big_length = str2.length();
            small_length = str1.length();
        }
        int gcd = 0;
        for(i = 1; i <= small_length; i++){
            if(big_length % i == 0 && small_length % i == 0){
                gcd = i;
            }
        }
        
        string temp = str1.substr(0,gcd);
        
        for(i = 0; i < str1.length(); i=i+gcd){
            string s = str1.substr(i,gcd);
            if(s == temp){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            return "";
        
        for(i = 0; i < str2.length(); i=i+gcd){
            if(str2.substr(i,gcd) == temp){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            return "";
        
        return temp;
    }
};