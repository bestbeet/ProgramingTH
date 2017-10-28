#include <iostream>

using namespace std;

void ccpatt(string str[], int n, char ch) {
	string patt1b[] = {
		"..#.",
		".#.#",
		"#.-.",
		".#.#",
		"..#."
	};

	string patt1e[] = {
		".",
		".",
		"#",
		".",
		"."
	};

	string patt2b[] = {
		"..*.",
		".*.*",
		"*.-.",
		".*.*",
		"..*."
	};

	string patt2e[] = {
		".",
		".",
		"*",
		".",
		"."
	};

	string patt3b[] = {
		"..#.",
		".#.#",
		"*.-.",
		".#.#",
		"..#."
	};

	for (int i = 0; i < 5; i++) {
		switch (n) {
			case 10:
				patt1b[2][2] = ch;
				str[i] += patt1b[i];
				break;
			case 11:
				str[i] += patt1e[i];
				break;
			case 20:
				patt2b[2][2] = ch;
				str[i] += patt2b[i];
				break;
			case 21:
				str[i] += patt2e[i];
				break;
			case 30:
				patt3b[2][2] = ch;
				str[i] += patt3b[i];
				break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	string str;

	cin >> str;

	int len = str.length();
	string tmp[5];

	int bth = 4;

	for (int i = 1; i <= len; i++) {
		if (i % 3 == 0)
			ccpatt(tmp, 20, str[i - 1]);
		else if (i == bth)
			ccpatt(tmp, 30, str[i - 1]), bth += 3;
		else
			ccpatt(tmp, 10, str[i - 1]);
	}


	if (len % 3)
		ccpatt(tmp, 11, ' ');
	else
		ccpatt(tmp, 21, ' ');

	for (int i = 0; i < 5; i++)
		cout << tmp[i] << endl;

	return 0;
}
