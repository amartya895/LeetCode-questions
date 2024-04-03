class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        unordered_map<string , vector<string>> anaGrp;
        
        for(auto word : strs)
        {
            string sortedWord = word;
            
            sort(sortedWord.begin() , sortedWord.end());
            
            anaGrp[sortedWord].push_back(word);
        }
        
        vector<vector<string>> ans;
        
        for(auto ana : anaGrp)
        {
            ans.push_back(ana.second);
        }
        
        return ans;
        
    }
};