class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> str1(26), str2(26);
	for(auto it : s1)
        str2[it - 'a']++;
	for(int i = 0; i < s2.size(); i++) {
		str1[s2[i] - 'a']++;
		if(i >= s1.size())
            str1[s2[i - s1.size()] - 'a']--;
		if(str2 == str1)
            return true;
	}
	return false;
    }
};