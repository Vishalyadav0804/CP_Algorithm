class Solution {
public:
    int kthFactor(int n, int k) {
        int z=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                z++;
                if(z==k)
                    return i;   
            }
        }
        return -1;
    }
};
