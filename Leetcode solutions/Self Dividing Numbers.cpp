class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            int num=i,no=i;
            // if(num=0){
            //     v.push_back(num);
            // }
            int f=0,z=0;
            while(num>0){
                f++;
                int k=num%10;
                if(k!=0 && no%k==0){
                    z++;
                }
                num=num/10;
            }
            if(z==f){
                v.push_back(i);
            }
        }
        return v;
    }
};
