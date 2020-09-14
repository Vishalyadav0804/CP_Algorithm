class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int counter1 = 0;
        int counter2 = 0;

        for (int i = 0; i < s1.size(); ++i)
            if (s1[i] != s2[i]) {
                if (s1[i] == 'x')
                    ++counter1;
                else
                    ++counter2;
            }

        if (counter1 % 2 == 0 && counter2 % 2 == 0)
            return (counter1+counter2)/2;
        else if (counter1 % 2 == 1 && counter2 % 2 == 1)
            return counter1/2 + counter2/2 + 2;

        return -1;
    }
};
