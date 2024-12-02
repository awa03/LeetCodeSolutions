class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string word;
        int i = 1;
        // will only get words, better solution
        while(stream >> word){
            if(word.find(searchWord) == 0){
                return i;
            }
            i++;
        }
        return -1;
    }
};
