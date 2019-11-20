class Solution {
public:
    long int reverse(unsigned int x) {
        unsigned int y = 0;
        long int temp;
        
        if(x < 0)
        {
            while(x > 0)
            {
                temp = x % 10;
                y = y*10 + temp;
                x = x/10;
            }
            if(y > INT_MAX)
                return 0;
            else
                return -y;
        }
        
        else
        {
            while(x > 0)
            {
                temp = x % 10;
                y = y*10 + temp;
                x = x/10;
            }
            if(y > INT_MAX)
                return 0;
            else
                return y;    
        }
    } 
    bool isPalindrome(int x) {
        if(reverse(x) == x)
            return 1;
        else
            return 0;
    }
};
