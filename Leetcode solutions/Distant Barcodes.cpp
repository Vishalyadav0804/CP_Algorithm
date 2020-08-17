class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map <int,int> m;
        priority_queue <pair<int,int>> pq;
        vector <int> v;
            for(int i=0;i<barcodes.size();i++)
            m[barcodes[i]]++;
        for(auto i:m){
            pair <int,int> p;
            p.first=i.second;
            p.second=i.first;
            pq.push(p);
        }
        for(int i=0;i<barcodes.size();i++){
            if(i==0){
                pair <int,int> p;
                auto k=pq.top();
                pq.pop();
                k.first--;
                p.first=k.first;
                p.second=k.second;
                pq.push(p);
                v.push_back(p.second);
                //continue;
            }
            else if(pq.top().second!=v[(i-1)]){
                pair <int,int> p;
                auto k=pq.top();
                pq.pop();
               k.first--;
                p.first=k.first;
                p.second=k.second;
                pq.push(p);
                v.push_back(p.second);
                //continue;
            }
            else if(pq.top().second==v[(i-1)]){
                vector <pair <int,int>> temp;
                while(pq.top().second==v[(i-1)])
                {
                    auto k=pq.top();
                    temp.push_back(k);
                    pq.pop();
                }
                pair <int,int> p;
                auto k=pq.top();
                pq.pop();
                k.first--;
                p.first=k.first;
                p.second=k.second;
                pq.push(p);
                v.push_back(p.second);
                for(auto i:temp){
                    pq.push(i);
                }
            }
        }
        return v;
    }
};
