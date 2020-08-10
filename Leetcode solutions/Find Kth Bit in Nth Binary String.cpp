class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        while(n>0){
            if(s.size()>=k)
                return s[k-1];
            string temp=s;
            s+="1";
            reverse(temp.begin(),temp.end());
            for (auto &ch : temp)
                ch = ch == '0' ? '1' : '0';
            s+=temp;
            n--;
        }
        return s[k-1];
    }
};
