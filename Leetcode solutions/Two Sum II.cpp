class Solution {
public:
    vector<int> v;
    void find(vector<int> numbers,int s,int e,int target){
        while(e>s){
            if(numbers[s]+numbers[e]==target){
                v.push_back(s+1);
                v.push_back(e+1);
                break;
            }
            if(numbers[s]+numbers[e]>target){
                e--;
            }
            else{
                s++;
            }
        }
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        find(numbers,0,n-1,target);
        return v;
    }
};
