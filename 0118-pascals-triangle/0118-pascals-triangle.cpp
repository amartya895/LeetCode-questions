class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pascal;

        for (int j = 0; j < numRows; j++) {
            vector<int> ans;
            ans.push_back(1);

            long long res = 1;

            for (int i = 0; i < j; i++) {
                res = res * (j - i);
                res = res / (i + 1);

                ans.push_back(res);
            }

            pascal.push_back(ans);
        }
        return pascal;
    }
};