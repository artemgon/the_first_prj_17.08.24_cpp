#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "\"U lukomor'a dub zelenij,\n" << "Zlataya zep na dupe tom,\n" << "I dnem i nochju kot uchenij\n" << "I dnem i nochju kot uchenij\n" << "vse hodit po cepi krugom\"";
	return 0;
}