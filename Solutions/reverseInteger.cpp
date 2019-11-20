class Solution {
public:
    long int reverse(long int x) {
        long int y = 0;
        long int temp;
        
        if(x < 0)
        {
            x = abs(x);
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
};
