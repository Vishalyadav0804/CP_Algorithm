class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==0 || num==1){
            return false;
        }
        int z=0;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                z+=i;
            }
        }
        if(z==num){
            return true;
        }
        return false;
    }
};
