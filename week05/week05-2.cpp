//week05-2.cpp 學習計畫Built-in Functions 第2題
//LeetCode 709. Yo Lower Case變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        //week02教過字串 s 的長度 .length
        for(int i=0; i < s.length(); i++){
            if (isupper(s[i])) s[i] = s[i] -'A' +'a';
        }//s[0] = 'h'; //先試試看吧(看起來就是錯的) 教你s[i]
        return s; //竟然直接送出去
    }
};
