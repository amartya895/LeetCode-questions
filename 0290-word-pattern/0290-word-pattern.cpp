class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
    string ans = "";
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' or i==s.length())
        {
            words.push_back(ans);
            ans = "";
            continue;
        }
        ans += s[i];
    }

        
        if(pattern.size() != words.size())
        {
            return false;
        }
        
        unordered_map<char , string > patternMatch;
        set<string> st;
        
        for(int i = 0 ; i < pattern.size() ; i++)
        {
            if(patternMatch.find(pattern[i]) != patternMatch.end())
            {
                if(patternMatch[pattern[i]] != words[i]){
                    return false;
                }
            }
            else
            {
                if(st.count(words[i]) > 0)
                {
                    return false;
                }
                
                    patternMatch[pattern[i]] = words[i];
                    st.insert(words[i]);
            
            }
        }
        
        return true;
    }
};