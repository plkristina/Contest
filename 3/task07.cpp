#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
	ifstream file("data.txt");
	string word, target;
	int cnt = 0, max = 0;
	map<string, unsigned> words;
	cin >> target;
	file >> word;
	while (word != "stopword") {
		if (cnt == 1) {
			++words[word];
			if (words[word] > max) {
				max = words[word];
			}
			cnt = 0;
			continue;
		}
		if (word == target) {
			cnt = 1;
		}
		file >> word;
	}
	if (words.size() == 0) {
		cout << "-";
	} else {
		int j = 3;
		while (j != 0) {
			if (words.size() == 1) {
				j = 1;
			}
			else if (words.size() == 2) {
				j = 2;
			}
			for (auto& answer : words) {
				if (j == 0) {
					break;
				}
				if (answer.second == max) {
					cout << answer.first << " ";
					--j;
				}
			}
			--max;
		}
	}

	return 0;
}
