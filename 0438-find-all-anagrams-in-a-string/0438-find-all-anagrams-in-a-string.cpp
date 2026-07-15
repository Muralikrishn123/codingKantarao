// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> ac(26, 0);
//         vector<int> arr;
//         for (char x : p) {
//             int i = x - 'a';
//             ac[i] ++;
//         }
//         int n = s.size();
//         int l = 0;
//         int m = p.size();
//         vector<int> c(26, 0);
//         for (int i = 0; i < m; i++) {
//             int idx = s[i] - 'a';
//             c[idx] ++;
//         }
//         if(ac == c){
//                 arr.push_back(0);
//         }
//         for (int i = m; i <n ;i++) {
//             int idx = s[l] - 'a';
//             c[idx]--;
//             l++;
//             int x = s[i] - 'a';
//             c[x] ++;
//             if (ac == c) {
//                 arr.push_back(l);
//             }
//         }
       
//         return arr;
//     }
// };
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.length() > s.length()) return {};

        vector<int> pCount(26, 0);
        vector<int> window(26, 0);
        vector<int> ans;

     
        for (int i = 0; i < p.length(); i++) {
            pCount[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

    
        if (pCount == window) {
            ans.push_back(0);
        }


        int left = 0;
        for (int right = p.length(); right < s.length(); right++) {
           
            window[s[right] - 'a']++;
           
            window[s[left] - 'a']--;
            
            left++;

        
            if (pCount == window) {
                ans.push_back(left);
            }
        }

        return ans;
    }
};