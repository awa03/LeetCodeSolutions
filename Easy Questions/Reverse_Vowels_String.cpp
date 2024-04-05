class Solution
{
    public:
        string reverseVowels(string s)
        {
            int i = 0;
            int j = s.size() - 1;	
            while (i < j)
        {
            if (!isVowel(s[i]))
            {
                i++;
                continue;
            }
            if (!isVowel(s[j]))
            {
                j--;
                continue;
            }
            
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
        }
    bool isVowel(char & l)
    {
        return (tolower(l) == 'a' || tolower(l) == 'e' || tolower(l) == 'i' || tolower(l) == 'i' || tolower(l) == 'o' || tolower(l) == 'u');
    }
};
