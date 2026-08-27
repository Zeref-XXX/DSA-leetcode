class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mpp;
        for (int i = 0; i < s.length();) {
            string temp = "";
            while (i < s.length() && s[i] != ' ' ) {
                temp += s[i];
                i++;
            }
            int index = temp[temp.length() - 1];
            temp.pop_back();
            mpp[index] = temp + " ";
            i++;
        }
        string ans;
        for (auto st : mpp) {
            ans += st.second;
        }
        ans.pop_back();
        return ans;
    }
};