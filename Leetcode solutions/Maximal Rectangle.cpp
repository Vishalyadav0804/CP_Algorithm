class Solution {
public:
    int largestRectangleArea(vector<int> hist) {
        stack<int> s; 
        int max_area = 0; 
        int tp; 
        int area_with_top; 
        int i = 0; 
        int n = hist.size();
        while (i < n) 
        { 
            if (s.empty() || hist[s.top()] <= hist[i]) 
                s.push(i++); 
            else
            { 
                while (!s.empty() && hist[s.top()] > hist[i]) { 
                tp = s.top(); 
                s.pop(); 
                area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
                if (max_area < area_with_top) 
                    max_area = area_with_top; 
               } 
               s.push(i++);
            } 
        } 
        while (!s.empty()) { 
            tp = s.top(); 
            s.pop(); 
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1); 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
        return max_area; 
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        vector<int> height(matrix[0].size(),0);
        int maxarea=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='0')
                    height[j]=0;
                else
                    height[j]++;
            }
            maxarea=max(maxarea,largestRectangleArea(height));
        }
        return maxarea;
    }
};
