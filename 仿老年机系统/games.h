#pragma once
#include<time.h>
#include<fstream>
#include<string>
#include"head.h"
#define GAME_01_PONIT "GUESS_NUMBER_POINTS"
#define FILE_NAME "games.heng"

class Games : public Base_Show {
	int guess_number_points;			//��������Ϸ���֣��洢��games.heng�ļ��У����ļ��ڿ�ʼ�������жϴ��ڣ���������򴴽�
	string guess_number_str;
public:
	Games() {
		guess_number_points = 0;
		ifstream ifs;
		ifs.open(FILE_NAME);
		string line;
		bool is = 0;
		while (getline(ifs, line)) {
			if (line.substr(0, 19) == GAME_01_PONIT) {
				guess_number_points = stoi(line.substr(20));
				is = 1;
				return;
			}
			else {
				cout << "wenjian" << endl;
				system("pause");
			}
		}
	}
	void show_type_01();
	void show_type_02();
	void show_type_03();
	void guess_number();
	void write_str();				//�����������е��ã�ʵ��games.heng�ĸ�����д
	~Games() { write_str(); }
};
