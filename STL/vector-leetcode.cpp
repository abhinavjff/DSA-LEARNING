//this is q 136 .single number question from lc 
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. You must implement a solution with a linear runtime complexity and use only constant extra space.

class Solution {
public:
    int singleNumber(vector<int>& nums)//here we have seen that the function takes a vector as the input 
//goal of the question is to find the element that occurs only once 
    {
        int ans=0;
        for (int it : nums ){
            ans=ans^it;
        }
        return ans;
    }
};