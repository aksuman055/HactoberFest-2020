#include <bits/stdc++.h>
#include <string>
using namespace std;
string words[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

void printEncoding(string ques, string ans)
{
    if (ques.length() == 0)
    {
        cout << ans << " ";
    }

    int res = ques[0] - '0';
    string word = words[res];
    printEncoding(ques.substr(1), ans + word);

    string ch2 = ques.substr(0,2);
    int idx2 = (ch2[0]-'0')*10+(ch2[1]-'0');
    if (idx2 < 26)
    {
        string word = words[idx2];
        printEncoding(ques.substr(2), ans + word);
    }
}

int main()
{
    string no;
    getline(cin, no);
    printEncoding(no, "");
}