/*Given an array of positive integers nums and a positive integer target, return the minimal length 
of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. 
If there is no such subarray, return 0 instead.*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long int sum = 0;
        int front = 0, last = 0, minimum = 9999999;
        while(last < nums.size()){
            sum += nums[last];
            
            if(sum < target){
                last++;
            }
            
            else{
                while(sum >= target){
                    minimum = min(minimum, last - front + 1);
                    sum -= nums[front];
                    front++;
                }
                last++;
            }
        }
        
        if(minimum == 9999999){
            return 0;
        }
        else{
            return minimum;
        }
    }
};