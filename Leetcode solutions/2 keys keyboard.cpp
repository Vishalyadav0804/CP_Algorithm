class Solution {
public:
    int minSteps(int n){
        int steps = 0;
        
        while(n!=1){
           int temp=1;
            while(n%temp!=0 || temp==1){
                temp++;  
            }
            n /= temp;
            steps += temp;
        }
		
        return steps;
    }
};
