class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        vector<int> ans;
        ans.reserve(q.size()); 

        unordered_map<int, int> ball,color; 
        ball.reserve(q.size());
        color.reserve(q.size());
        

        for (auto& i : q) {
            int a = i[0], b = i[1];

           
            if (ball[a]) {
                int prevColor = ball[a];
                color[prevColor]--;
                if (color[prevColor] == 0) {
                    color.erase(prevColor); 
                }
            }

            
            ball[a] = b;
            color[b]++;
            

            ans.push_back(color.size());
        }

        return ans;
    }
};

static int fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();