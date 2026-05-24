class Solution {
public:
    bool isAnagram(string s, string t) {
            if(s.length() != t.length()) return false;
            std::unordered_map<char, int> strings;
            std::unordered_map<char, int> stringt;
            for(char letters : s){
                strings[letters]++;
            }
            for(char lettert : t){
                stringt[lettert]++;
            }
            if(strings == stringt) return true;
            return false;
        }
    };
