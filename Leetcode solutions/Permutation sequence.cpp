class Solution {
public:
    vector<int> fact;
    void findFact(int n){
        fact=vector<int>(n);
        fact[0]=1;
        if(n==1) return;
        fact[1]=1;
        for(int i=2;i<n;i++){
            fact[i]=fact[i-1]*i;
        }
    }
    string getPermutation(int N, int K) {
        int n=N-1,k=K-1;
        findFact(N);
        vector<int> num(N);
        for(int i=0;i<N;i++){
            num[i]=i+1;
        }
        string ans="";
        while(n>=0){
            int nt = k/fact[n];
            int kt = k%fact[n];

            ans += (num[nt]+'0');
            //vector<int>::iterator it = num.begin(); 
            num.erase(num.begin()+nt);
            n--;
            k = kt;
        }
        return ans;
    }
};
