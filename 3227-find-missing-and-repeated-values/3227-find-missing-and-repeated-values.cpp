class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int rep, miss;
        long long sum = 0;
        long long sumSQ = 0;
        long long  c1, c2;
        long long n = grid.size()*grid[0].size();

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
               sum += grid[i][j];
               sumSQ += (grid[i][j] * grid[i][j]);
            }
        }
        c1 = sum - (n*(n+1)/2);
        c2 = (sumSQ - (n*(n+1)*((2*n)+1)/6))/c1;

        rep = (c1+c2)/2;
        miss = c2-rep;

        return {rep, miss};

    }
};