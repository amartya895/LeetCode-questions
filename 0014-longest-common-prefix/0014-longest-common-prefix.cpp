class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        string res = "";

        for(int i = 0 ; i < strs[0].size() ; i++)
        {
            char ch = strs[0][i];
            bool match = true;

            //check match for rest of the string
           for(int j = 1 ; j < n ; j++)
           {
               if(strs[j][i] != ch || strs[j].size() < i)
               {
                   match = false;
                   break;
               }
               
               
           }

           if(match == false)
           {
               break;
           }
           else
           {
               res += ch;
           }

           
        }

        return res;
    }
};