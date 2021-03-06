class Solution {
public:
    unordered_map<string, string> monthMap{
        {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"},
        {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"},
        {"Nov", "11"}, {"Dec", "12"}
    };
    vector<string> split(string str) {
        vector<string> res;
        string curr;
        for (char ch : str) {
            if (ch == ' ') {
                res.push_back(curr);
                curr.clear();
            } else {
                curr += ch;
            }
        }
        res.push_back(curr);
        return res;
    }
    string reformatDate(string date) {
        vector<string> splittedDate = split(date);
        string day = splittedDate[0], month = splittedDate[1], year = splittedDate[2];
        
        // Day
        day.pop_back();
        day.pop_back();
        if (day.size() == 1) day = string("0") + day;
        
        // Month
        month = monthMap[month];
        
        return year + '-' + month + '-' + day;
    }
};
