#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc <= 2) {
		printf("INPUT ERROR");
		return 0;
	}
	FILE* stream1;
	freopen_s(&stream1, argv[2], "r", stdin);
	if (argv[1][1] == 'c') {
		char ch;
		int cnt = 0;
		while ((ch = getchar()) != EOF) cnt++;
		printf("字符数:%d\n", cnt);
	}
	else if (argv[1][1] == 'w') {
		char ch;
		int cnt = 0;
		while ((ch = getchar()) != EOF) {
			if (ch == ',' || ch == ' ' || ch == '.') {
				cnt++;
			}
		}
		printf("单词数:%d\n", cnt);
	}
	else {
		printf("INPUT ERROR");
	}

	return 0;
}