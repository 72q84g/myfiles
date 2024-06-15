/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream> 
using namespace std;

int main(void)
{
	time_t start_time, end_time;
	string tango;
	int result = 0;
	int zikan;
	int point;
	string pointst;
	int grade = 0;
	int curasu = 0;	//classは変数名に使えない
	int number = 0;
	ofstream txt(" ", std::ios::app); //保存先のパスを指定する

	while (1) {
		printf("学年を入力してください　1年:1　2年:2　3年:3　その他:4\n");
		cin >> grade;
		if (grade == 1 || grade == 2 || grade == 3 || grade == 4) {
			break;
		}
		else {
			printf("半角で数字を入力してください\n\n");
		}
	}

	if (grade != 4) {
		while (1) {
			printf("クラスを入力してください　(1～7)\n");
			cin >> curasu;
			if (curasu >= 1 && curasu <= 7) {
				break;
			}
			else {
				printf("半角で数字を入力してください\n\n");
			}
		}
		while (1) {
			printf("出席番号を入力してください　(1～45)\n");
			cin >> number;
			if (number >= 1 && number <= 45) {
				break;
			}
			else {
				printf("半角で数字を入力してください\n\n");
			}
		}
	};

	printf("エンターキーを押すとスタートします\n");
	printf("表示される単語を入力してください\n");
	printf("次の単語に移るにはエンターキーを2回押してください\n");
	printf("ひらがなモードで入力してください");
	system("pause>nul");
	printf("\n\n");
	start_time = time(NULL);

	//"たんご"や"もじ"の部分を変える
	printf("たんご : ");
	cin >> tango;
	if (tango == "たんご") { result++; };

	printf("もじ : ");
	cin >> tango;
	if (tango == "もじ") { result++; };

	printf("ぶんしょう : ");
	cin >> tango;
	if (tango == "ぶんしょう") { result++; };

	//単語数を増やす

	end_time = time(NULL);
	zikan = end_time - start_time;
	printf("\n\n");
	printf("%d 単語正解しました\n", result);
	printf("%d 秒かかりました\n", zikan);
	point = result * 2 - zikan;				//ポイントの計算方法を変える
	printf("%d ポイントでした\n\n", point);

	cout << grade << "年" << curasu << "組" << number << "番" << point << "ポイント" << endl;
	txt << grade << "年" << curasu << "組" << number << "番" << point << "ポイント" << endl;

	system("pause>nul");
	system("pause>nul");
	system("pause>nul");
	return 0;
}

*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream> 
using namespace std;

int main(void)
{
	time_t start_time, end_time;
	string tango;
	int result = 0;
	int zikan;
	int point;
	string pointst;
	int grade = 0;
	int curasu = 0;	//classは変数名に使えない
	int number = 0;
	ofstream txt("result.txt", std::ios::app); //保存先のパスを指定する

	while (1) {
		printf("学年を入力してください　1年:1　2年:2　3年:3　その他:4\n");
		cin >> grade;
		if (grade == 1 || grade == 2 || grade == 3 || grade == 4) {
			break;
		}
		else {
			printf("半角で数字を入力してください\n\n");
		}
	}

	if (grade != 4) {
		while (1) {
			printf("クラスを入力してください　(1～7)\n");
			cin >> curasu;
			if (curasu >= 1 && curasu <= 7) {
				break;
			}
			else {
				printf("半角で数字を入力してください\n\n");
			}
		}
		while (1) {
			printf("出席番号を入力してください　(1～45)\n");
			cin >> number;
			if (number >= 1 && number <= 45) {
				break;
			}
			else {
				printf("半角で数字を入力してください\n\n");
			}
		}
	};

	printf("エンターキーを押すとスタートします\n");
	printf("表示される単語を入力してください\n");
	printf("次の単語に移るにはエンターキーを1回押してください\n");
	printf("半角英数モードで入力してください");
	system("pause>nul");
	printf("\n\n");
	start_time = time(NULL);

	//"たんご"や"もじ"の部分を変える
	printf("たんご : ");
	cin >> tango;
	if (tango == "tango"|| tango == "tanngo" || tango == "taxngo") { result++; };	//文字の入力の全パターンを考える

	printf("もじ : ");
	cin >> tango;
	if (tango == "mozi"||tango == "moji") { result++; };

	printf("ぶんしょう : ");
	cin >> tango;
	if (tango == "bunsyou"|| tango == "bunnsyou" || tango == "buxnsyou" || tango == "bunshou" || tango == "bunnshou" || tango == "buxnshou"
		||tango == "bunsixyou" || tango == "bunnsixyou" || tango == "buxnsixyou" || tango == "bunshixyou" || tango == "bunnshixyou" || tango == "buxnshixyou"
		||tango == "buncixyou" || tango == "bunncixyou" || tango == "buxncixyou" || tango == "bunsilyou" || tango == "bunnsilyou" || tango == "buxnsilyou"
		|| tango == "bunshilyou" || tango == "bunnshilyou" || tango == "buxnshilyou" || tango == "buncilyou" || tango == "bunncilyou" || tango == "buxncilyou") { result++; };

	//単語数を増やす

	end_time = time(NULL);
	zikan = end_time - start_time;
	printf("\n\n");
	printf("%d 単語正解しました\n", result);
	printf("%d 秒かかりました\n", zikan);
	point = result * 2 - zikan;				//ポイントの計算方法を変える
	printf("%d ポイントでした\n\n", point);

	cout << grade << "年" << curasu << "組" << number << "番" << point << "ポイント" << endl;
	txt << grade << "年" << curasu << "組" << number << "番" << point << "ポイント" << endl;

	system("pause>nul");
	system("pause>nul");
	system("pause>nul");
	return 0;
}
