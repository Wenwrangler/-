
#include"head.h"
using namespace std;
int main() {
	MOUSEMSG M;
	initgraph(1024+300, 750);//��ʼ������
	IMAGE t1, t2;
	loadimage(&t1, _T("timg.png"));//��ȡͼƬ
	setfillstyle(BS_DIBPATTERN, NULL, &t1);//���ͼƬ **����������
	setbkcolor(WHITE);
	fillrectangle(1024, 0, 1324, 750);
	//setfillcolor(WHITE);
	setlinecolor(LIGHTGRAY);
	int x = 100, y = 25;
	char s[] = "Hello World";
	ifstream open("excel.txt");
	if (open.fail()) {
		cout << "�ļ���ʧ�ܣ�";
		return 0;
	}
	queue<MyStruct> q;
	MyStruct temp;
	for (int i = 0; i < 20; i++)  {
		open >> temp.name >> temp.num >> temp.CourseNumber >> temp.results;
		q.push(temp);
	}
	for (int j = 1; q.empty()!=1; j++) {
		temp = q.front();
		q.pop();
		for (int i = 1; i < 5; i++) {
			fillrectangle(256*i-256, j*50-50, 256 * i, 50*j);
			setfillcolor(WHITE);
			setlinecolor(LIGHTGRAY);
			settextcolor(BLACK);
			if (j == 1) {
				switch (i) {
					case 1:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "����");
						break;
					case 2:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "ѧ��");
						break;
					case 3:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "�γ̱��");
						break;
					case 4:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "�ɼ�");
						break;
				}
			}
			else {
				switch (i) {
					case 1:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), temp.name);
						break;
					case 2:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), temp.num);
						break;
					case 3:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), temp.CourseNumber);
						break;
					case 4:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), temp.results);
						break;
				}
			}
			
		}
	}
	_getch();
	
	return 0;
}