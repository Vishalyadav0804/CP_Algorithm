class Solution {
public:
    int largestRectangleArea(vector<int>& hist) {
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
};
