/*
Given an arbitrary ransom note string and another string containing letters from all the magazines,
write a function that will return true if the ransom note can be constructed from the magazines ; 
otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

// ----Solution----

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazinesCharacterMap;
        for(auto m: magazine) {
            if(magazinesCharacterMap.find(m) != mmagazinesCharacterMap.end()) 
                magazinesCharacterMap[m]++;
            else
                magazinesCharacterMap.insert(make_pair(m, 1));
        }
        
        for(auto r: ransomNote) {
            if(magazinesCharacterMap.find(r) != magazinesCharacterMap.end()) {
                if(magazinesCharacterMap[r] > 0)
                    magazinesCharacterMap[r]--;
                else
                    return false;
            } else {
                return false;
            }    
        }
        
        return true;
    }
};