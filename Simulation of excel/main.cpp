#include"head.h"
using namespace std;
int main() {
	GUI_Main();
	cout << "�Ƿ񱣴棿Y/N��" << endl;
	char prompt;
	cin >> prompt;
	if (prompt == 'Y') {
		Save_information();
	}
	return 0;
}