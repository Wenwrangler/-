#include"head.h"
IMAGE t1;
vector<MyStruct> v;
vector<MyStruct>::iterator it;
MyStruct temp;
int x = 100, y = 25;
void GUImain() {
	initgraph(1024 + 300, 750, SHOWCONSOLE);//��ʼ������
	loadimage(&t1, _T("timg.png"));//��ȡͼƬ
	setlinecolor(LIGHTGRAY);
	ifstream input("excel.txt");
	if (input.fail()) {
		cout << "�ļ���ʧ�ܣ�";
		return;
	}
	for (int i = 0; i < 100; i++) {
		input >> temp.name >> temp.num >> temp.CourseNumber >> temp.results;
		v.push_back(temp);
	}
	it = v.begin();
	GUIcycle();
	while (1) {
		MOUSEMSG m;
		m = GetMouseMsg();
		switch (m.uMsg)
		{
		case WM_LBUTTONDOWN:
			if (m.x >= 1160 && m.x <= 1324 && m.y >= 585 && m.y <= 750) {//���·�ҳ ��
				cleardevice();
				GUIcycle();
			}
			else if (m.x >= 1160 && m.x <= 1324 && m.y >= 388 && m.y <= 553) {//�˳� ��
				closegraph();
				return;
			}
			else if (m.x >= 1160 && m.x <= 1324 && m.y >= 192 && m.y <= 357) {//����
				//���֮�����򷽿顱��ɫ�仯������ѡ��ͬ��������������������ٴε���������


			}
			else if (m.x >= 1160 && m.x <= 1324 && m.y >= 0 && m.y <= 164) {//���Ϸ�ҳ ��
				for (int i = 0; i < 28 && it != v.begin(); i++) {
					it--;
				}
				cleardevice();
				GUIcycle();
			}
			break;
		default:
			break;
		}
	}
	return;
}
void GUIcycle() {
	setfillstyle(BS_DIBPATTERN, NULL, &t1);
	setbkcolor(WHITE);
	fillrectangle(1024, 0, 1324, 750);
	for (int i = 1; i < 5; i++) {
		fillrectangle(256 * i - 256, 0, 256 * i, 50 );
		setfillcolor(WHITE);
		setlinecolor(LIGHTGRAY);
		settextcolor(BLACK);
		switch (i) {
		case 1:
			outtextxy(x + (i * 256 - 256), y , "����");
			break;
		case 2:
			outtextxy(x + (i * 256 - 256), y , "ѧ��");
			break;
		case 3:
			outtextxy(x + (i * 256 - 256), y , "�γ̱��");
			break;
		case 4:
			outtextxy(x + (i * 256 - 256), y , "�ɼ�");
			break;
		}
	}
	for (int j = 2; j <= 15; j++) {
		temp = *it;
		it++;
		for (int i = 1; i < 5; i++) {
			fillrectangle(256 * i - 256, j * 50 - 50, 256 * i, 50 * j);
			setfillcolor(WHITE);
			setlinecolor(LIGHTGRAY);
			settextcolor(BLACK);
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