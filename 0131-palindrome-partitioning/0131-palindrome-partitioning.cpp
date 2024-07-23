class Solution {
public:
    bool isPal(string s , int left , int right)
    {
        while(left<= right)
        {
            if(s[left++]!= s[right--])
            {
                return false;
            }
        }

        return true;
    }
    void getPal(int idx , vector<vector<string>>&ans , vector<string>&path , string s)
    {
        if(idx == s.size())
        {
            ans.push_back(path);
            return;
        }

        for(int i = idx ; i < s.size() ; i++)
        {
            if(isPal(s , idx , i))
            {
                path.push_back(s.substr(idx, i - idx + 1));
                getPal(i+1 , ans  , path , s);
                path.pop_back();

            }
        }

    }
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> path;

        getPal(0 , ans , path , s);

        return ans;

    }
};