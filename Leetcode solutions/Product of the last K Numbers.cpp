class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        if(num==0) v.clear();  
        else if(v.size()==0) v.push_back(num);
        else v.push_back(num*v[v.size()-1]);
    }
    
    int getProduct(int k) {
        if(k>v.size()) return 0;
         if(k==v.size()) return v[k-1];
         return v[v.size()-1]/v[v.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
