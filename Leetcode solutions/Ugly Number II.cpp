class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==0) return 0;
        vector<int> v;
        v.push_back(1);
        int i=0,j=0,k=0;
        while(v.size()<n){
            int temp1=v[i]*2;
            int temp2=v[j]*3;
            int temp3=v[k]*5;
            int minNum= min(temp1,min(temp2,temp3));
            v.push_back(minNum);
            if(minNum==temp1) i++;
            if(minNum==temp2) j++;
            if(minNum==temp3) k++;
        }
        return v[v.size()-1];
    }
};
