class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(int nums:nums){
            if(count==0){
                candidate=nums;
            }
            if(nums==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;

        
    }
};