LEETCODE

class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        
        if(m.find(key)==m.end()) {
            return "";
        }

        int s=0;
        int e=m[key].size()-1;
        string ans;
        while(s<=e) {
            int mid=s+(e-s)/2;

            if(m[key][mid].first==timestamp) {
                return m[key][mid].second;
            }

            else if(m[key][mid].first<timestamp) {
                ans=m[key][mid].second;
                s=mid+1;
            }

            else {
                e=mid-1;
            }
        }
        return ans;
        }

    
};
