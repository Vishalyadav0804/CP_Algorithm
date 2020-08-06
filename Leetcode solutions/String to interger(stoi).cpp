class Solution {
public:
    int myAtoi(string str) {
        if(str.size()==0) return 0;
        int i=0;
        while(str[i]==' '){
            i++;
        }
        int sign=1;
        long res=0;
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
            return 0;
        if (str[i] == '-' || str[i] == '+') sign = 44 - str[i++];
        for(int j=i;j<str.size();j++){
            if(!isdigit(str[j])) break;
            res=res*10+str[j]-'0';
            if(res>INT_MAX && sign==-1) return INT_MIN;
            else if(res>INT_MAX && sign==1) return INT_MAX;
        }
        return sign*res;
    }
};
