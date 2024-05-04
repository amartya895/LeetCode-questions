class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        
        unordered_map<char , int> textCount;
        unordered_map<char , int> balloon;
        
        for(auto it : text)
        {
            textCount[it]++;
        }
        
        for(auto it : std::string("balloon"))
        {
            balloon[it]++;
        }
        
        
        int res = text.size();
        
        for(const auto [key , value] : balloon)
        {
            res = min(res , textCount[key]/value);
        }
        
        return res;
        
        
        
    }
};