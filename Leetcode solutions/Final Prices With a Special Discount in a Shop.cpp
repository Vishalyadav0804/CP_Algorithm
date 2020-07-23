class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        for(int i=0;i<prices.size();++i) {
            while(s.size() && prices[s.top()]>=prices[i]) {
                prices[s.top()]-=prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};
