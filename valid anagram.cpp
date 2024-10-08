bool CheckAnagrams(string str1, string str2)
{
  // Case 1: when both of the strings have different lengths
  if (str1.length() != str2.length())
    return false;
 
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
 
  // Case 2: check if every character of str1 and str2 matches with each other
  for (int i = 0; i < str1.length(); i++)
  {
    if (str1[i] != str2[i])
      return false;
  }
  return true;
}

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        int freq[26] = {0};
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};