class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int l=nums.size();
        if(l==0) return 0;
        vector<int> v; 
        for(int i=1;i<l;i++){
            int temp=nums[i]-nums[i-1];
            if(temp!=0)
                v.push_back(temp);  
        }
        int p=0,n=0,size=v.size(); 
        for(int i=0;i<size;i++){  
            if(v[i]<0){     
                 n++;
                 while(v[i]<0){
                     i++;
                     if(i>=size) 
                         break;
                } 
                i--;
            }
            else{   
                p++;
                while(v[i]>=0){
                    i++;
                    if(i>=size) 
                        break;
                } 
                i--;
            }
        }
        return n+p+1;
    }
};
