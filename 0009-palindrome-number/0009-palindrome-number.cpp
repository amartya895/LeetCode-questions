class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long newNum = 0;

        while( num > 0)
        {
             newNum = newNum *10 + num%10;
            num  = num/10;
        }

        if(newNum == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};