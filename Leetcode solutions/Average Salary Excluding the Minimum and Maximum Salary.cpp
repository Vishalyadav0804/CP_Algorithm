class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size()<=2) return 0;
        sort(salary.begin(),salary.end());
        double sum=0;
        int n=salary.size();
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
        }
        return sum/(n-2);
    }
};
