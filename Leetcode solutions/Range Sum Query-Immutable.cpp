class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int i, int j) {
        int sum=0;
        for(int x=i;x<=j;x++){
            sum+=v[x];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
