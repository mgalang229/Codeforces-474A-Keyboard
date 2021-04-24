#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	char direction;
	string s;
	cin >> direction >> s;
	// store the appropriate format in this string
	string format = "qwertyuiopasdfghjkl;zxcvbnm,./";
	if (direction == 'R') {
		// if direction is equal to 'R' it means that all the characters
		// were moved to the right of the original character
		for (int i = 0; i < (int) s.size(); i++) {
			for (int j = 0; j < (int) format.size(); j++) {
				// find the current character being iterated upon in 's' in the 'format' string
				if (s[i] == format[j]) {
					// if it matches, then print the previous character
					cout << format[j - 1];
					break;
				}
			}
		}
	} else {
		// if direction is equal to 'L' it means that all the characters
		// were moved to the left of the original character
		for (int i = 0; i < (int) s.size(); i++) {
			for (int j = 0; j < (int) format.size(); j++) {
				// find the current character being iterated upon in 's' in the 'format' string
				if (s[i] == format[j]) {
					// if it matches, then print the next character
					cout << format[j + 1];
					break;
				}
			}
		}
	}
	cout << '\n';
	return 0;
}
