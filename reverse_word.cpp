#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        string ans = "";

        while (i >= 0) {
            // Skip spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0) break;

            int j = i;

            // Find beginning of word
            while (i >= 0 && s[i] != ' ')
                i--;

            // Add space if not first word
            if (!ans.empty())
                ans += " ";

            // Append word
            ans += s.substr(i + 1, j - i);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = obj.reverseWords(input);

    cout << "Reversed words string: " << result << endl;

    return 0;
}