#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
//int main() {
//	int year, month;
//	bool flag;
//	cout << "请输入年份和月份:";
//	cin >> year >> month;
//	if (year % 4 == 0 && year % 100 != 0||year%400==0) {
//		flag =true;
//	}else {
//		flag = false;
//	}
//	char m[12] = {31,flag?29:28,31,30,31,30,31,30,31,30,31,30};
//	cout << year << "年的" << month << "月有" << int(m[month-1]) << "天" << endl;
//	system("pause");
//	return 0;
//}
int main() {
	while (1) {
		cout << "hello" << endl;
		goto ok;
	}
ok:cout << "haha" << endl;
	system("pause");
	return 0;
}