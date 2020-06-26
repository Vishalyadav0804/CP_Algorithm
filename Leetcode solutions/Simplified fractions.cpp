class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        if(n==0 || n==1){
            return v;
        }
        int j,i;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                if (i < j && (i == 1 || __gcd(i, j) == 1)){
                    string a=to_string(i);
                    string b=to_string(j);
                    v.push_back(a+"/"+b);   
                }
            }
        }
        return v;
    }
};
