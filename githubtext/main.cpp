#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//�û��������ĳ��ĳ��,�������µ�����
//�ж��Ƿ�������,����2����29��:
//��ͨ����:�ܱ�4���������ܱ�100����
//��������:�ܱ�400����

int main(void) {
	int year;
	int month;

	string leapyear[13] = { "��","31","29","31","30","31","30","31","31","30","31","30","31" };
	string commonyear[13] = { "��","31","28","31","30","31","30","31","31","30","31","30","31" };

	while (1) {
		system("cls");
		cout << "���������:" << endl;
		cin >> year;
		cout << "�������·�:(1-12)" << endl;
		cin >> month;

		if (month > 0 && month < 13) {
			break;
		}
		else {
			cout << "�������,����������" << endl;
		}
		system("pause");
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << year << "��" << month << "��:" << (leapyear[month]) << "��" << endl;
	}//else if (year % 400 == 0) {
		//cout << year << "��" << month << "��:" << (leapyear[month]) << "��" << endl;
	//}
	else {
		cout << year << "��" << month << "��:" << (commonyear[month]) << "��" << endl;
	}

	system("pause");
	return 0;

}