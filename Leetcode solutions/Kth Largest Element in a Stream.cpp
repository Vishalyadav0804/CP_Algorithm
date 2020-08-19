class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> minheap;
    int ks;
    KthLargest(int k, vector<int>& nums) {
        ks=k;
        for(int x:nums) add(x);
    }
    
    int add(int val) {
        if(minheap.size()<ks) minheap.push(val);
        else{
            if(val>minheap.top()){
                minheap.pop();
                minheap.push(val);
            }
        }
        return minheap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */