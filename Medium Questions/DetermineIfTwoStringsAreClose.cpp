class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int> arr1(26);
       vector<int> arr2(26);

       for(int i =0; i < word1.size(); i++){
            arr1[word1[i] - 'a']++;
       }
       for(int i =0; i < word2.size(); i++){
            arr2[word2[i]-'a']++;
       }
       for(int i =0; i < arr1.size(); i++){
        if((arr1[i] > 0 && arr2[i] == 0) || (arr1[i] == 0 && arr2[i] > 0)){
            return false;
        }
       }

       sort(arr1.begin(), arr1.end());
       sort(arr2.begin(), arr2.end());

        for(int i =0; i < 26; i++){
            if(arr2[i] != arr1[i]){
                return false;
            }
       } 
       return true;
    }
};
