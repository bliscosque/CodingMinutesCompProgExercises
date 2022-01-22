#include <iostream>
#include <map>
using namespace std;

int firstUniqChar(string s) {
    map<char, int> m;
    for (char ch : s) {
        if (m.count(ch) == 0) 
            m[ch] = 1;
        else m[ch] = m[ch] + 1; //apenas esta linha dentro do for ja bastaria, uma vez que int inicia com 0 neste caso
    }
    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] == 1) return i;
    }
    return -1;
}

int mainFUC()
{
    cout << firstUniqChar("codingminutes") << endl;
    cout << firstUniqChar("aabb") << endl;
    return 0;
}

