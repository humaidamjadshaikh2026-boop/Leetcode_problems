class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
    return "";

    sort(strs.begin(), strs.end());
    string start = strs.front();
    string end = strs.back();

    string result = "";
    for(int i=0;i<min(start.length(),end.length());i++){
        if(start[i]!=end[i])
        break;
        result +=start[i];
    }   
    return result; 
    }
};