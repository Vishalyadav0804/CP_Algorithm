class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m=num1.size();
        int n=num2.size();
        string str="";
        vector<int> v(n+m);
        std::fill(v.begin(), v.end(), 0);
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int sum=v[i+j+1]+mul;
                v[i+j]+=sum/10;
                v[i+j+1]=sum%10;
            }
        }
        while(v[0]==0){
            v.erase(v.begin());
        }
        for(int i=0;i<v.size();i++){
            str+=to_string(v[i]);
        }
        return str;
    }
};
