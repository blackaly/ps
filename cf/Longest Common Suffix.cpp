#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

struct trie {
	trie* child[MAX_CHAR];
	bool isLeaf;

	trie() {
		memset(child, 0, sizeof(child));
		isLeaf = 0;
	}

	void insert(char *str) {
		if(*str == '\0')
			isLeaf = 1;
		else {
			int cur = *str - 'a';
			if(child[cur] == 0 )
				child[cur] = new trie();
			child[cur]->insert(str+1);
		}
	}

	bool wordExist(char* str) {
		if(*str == '\0')
			return isLeaf;

		int cur = *str - 'a';
		if(child[cur] == 0 )
			return false;	// such path don't exist

		return child[cur]->wordExist(str+1);
	}

	bool prefixExist(char* str) {
		if(*str == '\0')
			return true;

		int cur = *str - 'a';
		if(child[cur] == 0 )
			return false;	// such path don't exist

		return child[cur]->prefixExist(str+1);
	}
};

int main() {
    makefast;

    int tt = 0; cin >> tt;
    while(tt--){
        int n, m; cin >> n >> m;

        int mx = max(n, m);

        for(int i = 0; i < mx; ++i){
            if()
        }
    }

    return 0;
}
