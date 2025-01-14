class Solution {
public:

    void findCombination(int idx, int target, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(ds);
            return;
        }

        for(int i=idx; i<candidates.size(); i++){
            if(i>idx && candidates[i] == candidates[i-1]) continue;
            if(target < candidates[i]) break;

            ds.push_back(candidates[i]);
            findCombination(i+1, target - candidates[i], candidates, ds, result);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> ds;
        findCombination(0, target, candidates, ds, result);
        return result;
    }
};