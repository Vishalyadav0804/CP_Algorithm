class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<>> min_heap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        max_heap.push(num);    
        while(max_heap.size()>min_heap.size()){
            int top=max_heap.top();
            max_heap.pop();
            min_heap.push(top);
        }
            
        while(max_heap.size()<min_heap.size()){
            int top=min_heap.top();
            min_heap.pop();
            max_heap.push(top);
        }
    }
    
    double findMedian() {
        if(max_heap.size()==min_heap.size()){
            
            double result=((max_heap.top()+min_heap.top()));
            result/=2;
            return result;
        }
        
        return max_heap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
