class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            //vector<int>::iterator itr;
            //int n=nums.size();
            for( int i=0;i<nums.size();i++)
            {
                for(int j=0;j<nums.size();j++)
                {
                   if( ((nums[i] + nums[j])==target) && i!=j)
                        return {i,j};
                }
            }
            return{};
    }
};


