/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let set = new Set();
    let i = 0,j=0, ans = 0;
    if(s.length == 0) return 0;
    if(s.length == 1) return 1;
    
    while(j<s.length)
        {
            while(set.has(s[j]))
                {
                    set.delete(s[i]);
                    i++;
                }
            set.add(s[j]);
            ans = Math.max(ans,j-i+1);
            j++;
        }
    return ans;
};