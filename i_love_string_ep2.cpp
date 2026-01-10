#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        string t;
        cin >> s >> t;
        int s_size = s.size(), t_size = t.size();
        int l_size = max(s_size, t_size);
        string newstr;
        for (int i = 0; i < l_size; i++)
        {
            if (i < s_size)
                newstr.push_back(s[i]);
            if (i < t_size)
                newstr.push_back(t[i]);
        }
        cout << newstr << endl;
    }
    return 0;
}