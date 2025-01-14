class Solution {
public:

    void help(string path, int open, int close, vector<string>& nums, int n){
        if(path.length() == n*2){
            nums.push_back(path);
            return;
        }

        if(open < n){
            help(path + '(', open+1, close, nums, n);
        }
        if(close < open){
            help(path + ')', open, close+1, nums, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        string ans = "";
        vector<string> res;
        help(ans,0, 0, res, n);
        return res;
    }
};