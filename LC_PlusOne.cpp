class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a;
        a = size(digits);
        for(int i = a - 1; i >= 0; i--)
        {
            if(i == a - 1)
            {
                digits[i] += 1;
            }
            if(digits[i] >= 10)
            {
                if(i - 1 < 0)
                {
                    break;
                }
                digits[i - 1] += 1;
                digits[i] -= 10;
            }

        }
        if(digits[0] >= 10)
        {
            digits[0] -= 10;
            digits.insert(digits.begin(), 1);
        }
        return digits;
        
    }
};