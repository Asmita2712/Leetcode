class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset;

        for(int num = 0; num < (1<<nums.size()); num++){
            vector<int> sub;
            for(int i=0; i<nums.size(); i++){
                if(num & (1<<i)){
                    sub.push_back(nums[i]);
                }
            }
            powerset.push_back(sub);
        }

        return powerset;
    }
};