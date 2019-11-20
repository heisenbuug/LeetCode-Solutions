class Solution {
public:
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int num[7] = {1, 5, 10, 50, 100, 500, 1000};
    
    int compare(char z, int d)
    {
        for(int j = 0; j < 7; j++)
        {
            if(z == roman[j])
                return num[j];
        }
        return 0;
    }
    
    int romanToInt(string s) {
        int number = 0;
        int arr[s.length()+2] = {0};
        
        for(int i = 0; i < s.length(); i++)
            arr[i] = compare(s[i], s.length());
        
        for(int i = 0; i < s.length(); i++)
        {
            if(arr[i] >= arr[i+1])
                number = number + arr[i];
            else
                number = number - arr[i];
        }
        return number;
    }
};
