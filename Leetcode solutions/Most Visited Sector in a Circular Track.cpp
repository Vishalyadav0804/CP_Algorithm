class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> v(n,0);
        vector<int> ans;
        if(rounds.size()<=1) return v;
        for(int i=1;i<rounds.size();i++){
            int start=rounds[i-1];
            int end=rounds[i];
            if(i==1){
                if(start<=end){
                    for(int j=start;j<=end;j++){
                        v[j-1]++;
                    }
                }else{
                    for(int j=start;j<=n;j++){
                        v[j-1]++;
                    }
                    for(int j=1;j<=end;j++){
                        v[j-1]++;
                    }
                }
                
            }else{
                if(start<=end){
                    for(int j=start+1;j<=end;j++){
                        v[j-1]++;
                    }
                }else{
                    for(int j=start+1;j<=n;j++){
                        v[j-1]++;
                    }
                    for(int j=1;j<=end;j++){
                        v[j-1]++;
                    }
                }
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,v[i]);
        }
        for(int i=0;i<n;i++){
            if(v[i]==res){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
