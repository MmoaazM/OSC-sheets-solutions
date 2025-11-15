class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return helper(s, i);
    }

    string helper(string& s, int& i) {
        string result = "";

        while (i < s.size() && s[i] != ']') {

          
            if (!isdigit(s[i])) {
                result += s[i];
                i++;
            }
            else {
               
                int k = 0;
                while (i < s.size() && isdigit(s[i])) {
                    k = k * 10 + (s[i] - '0');
                    i++;
                }

               
                i++;

               
                string decoded = helper(s, i);

                
                i++;

                
                while (k--) result += decoded;
            }
        }

        return result;
    }
};
