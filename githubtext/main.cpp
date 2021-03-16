#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//用户随便输入某年某月,输出这个月的天数
//判断是否是闰年,闰年2月有29天:
//普通闰年:能被4整除但不能被100整除
//世纪闰年:能被400整除

int main(void) {
	int year;
	int month;

	string leapyear[13] = { "无","31","29","31","30","31","30","31","31","30","31","30","31" };
	string commonyear[13] = { "无","31","28","31","30","31","30","31","31","30","31","30","31" };

	while (1) {
		system("cls");
		cout << "请输入年份:" << endl;
		cin >> year;
		cout << "请输入月份:(1-12)" << endl;
		cin >> month;

		if (month > 0 && month < 13) {
			break;
		}
		else {
			cout << "输入错误,请重新输入" << endl;
		}
		system("pause");
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << year << "年" << month << "月:" << (leapyear[month]) << "天" << endl;
	}//else if (year % 400 == 0) {
		//cout << year << "年" << month << "月:" << (leapyear[month]) << "天" << endl;
	//}
	else {
		cout << year << "年" << month << "月:" << (commonyear[month]) << "天" << endl;
	}

	system("pause");
	return 0;

}