func isAnagram(s string, t string) bool {

    if(len(s) != len(t)) { return false }
    cache := make(map[byte]int)

    // Count Occurances
    for i := 0; i < len(s); i++ {
        cache[s[i]]+=1
        cache[t[i]]-=1
    }

    // See if any unmatched
    for _,count := range cache {
        if count != 0 {
            return false;
        }
    }

    return true
}
