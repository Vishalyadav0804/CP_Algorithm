class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        if(N==0){
            return cells;
        }
        N= (N-1) % 14;
        for(int i=0;i<=N;i++){
            vector<int> v(8,0);
            for(int j=1;j<cells.size()-1;j++){
                if(cells[j-1]!=cells[j+1]){
                    v[j]=0;
                }
                else{
                    v[j]=1;
                }    
            }   
            cells=v;
        }
        return cells;
    }
};
