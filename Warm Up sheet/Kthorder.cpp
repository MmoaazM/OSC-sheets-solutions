class Solution {
public:
    string word = "abbcbccd";
    string ChangeWord(string word)
    {
        for (int i = 0;i < word.size();i++)
        {
            word[i]++;
        }
        return word;
    }
    void UpgradeWord(string& word)
    {
        string NewWord = ChangeWord(word);

        word += NewWord;
    }
    char kthCharacter(int k)
    {
        if (k <= 8) return word[k - 1];

        while (k > word.size())
        {
            UpgradeWord(word);
        }

        return word[k - 1];
    }
};