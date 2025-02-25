#include <iostream>
#include <cmath>
#include <map>

using namespace std ;

int main()
{
	ios_base::sync_with_stdio(0) ;
	cin.tie(0) ;
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s; cin >> s;
        map <char, int> letters;

        // the letters in the second substring
        map <char, int> lettersb;

        int fa = 0, fb = 0, max_value = 0;
        for (int i = 0; i < s.length(); i++)
        {
            letters[s[i]]++;
            if (letters[s[i]] == 1) fa++;
        }

        for (int i = s.length() - 1; i >= 0; i--)
        {
            lettersb[s[i]]++;
            letters[s[i]]--;

            if (lettersb[s[i]] == 1) fb++;
            if (letters[s[i]] == 0) fa--;

            // cout << fa << ' ' << fb << endl;
            max_value = max(max_value, fa + fb);
        }
        cout << max_value << '\n';
    }
    return 0;
}
