class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>mp;
       for(int i=1;i<nums.size();i++){
           for(int j=0;j<i;j++){
               if(nums[i]+nums[j]==target){
                   mp.push_back(j);
                   mp.push_back(i); 
                   break;
               }
               
           }
       }
        return mp;
        
    }
};