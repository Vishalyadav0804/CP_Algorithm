class Solution {
public:
    bool lemonadeChange(vector<int>  &bills)
    {
    int v5 = 0;
    int v10 = 0;
    int v20 = 0;

        for(const auto & el: bills)
        {
            if(el == 5)
            {
                v5++;
            }
            else if(el == 10)
            {
                v10++;
            }
            else if(el ==20)
            {
                v20++;
            }

            if(el == 10)
            {
                if (v5 < 1)
                    return false;

                v5--;
            }

            if(el == 20)
            {
                if(v10 < 1 && v5 < 3)
                    return false;

                if(v10 >= 1 && v5 < 1)
                    return false;

                if(v10 <= 0) 
                {
                    v5--;
                    v5--;
                    v5--;
                }
                else
                {
                    v10--;
                    v5--;
                }
            }
        }

        return true;
    }
};
