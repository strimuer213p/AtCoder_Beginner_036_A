/*
��蕶
�����N�͂����̃y�b�g�{�g���� A �{���������𔃂����Ƃɂ��܂����B �����N�͏��Ȃ��Ƃ� B �{�̂����̃y�b�g�{�g�����ق����ł��B �������������΂悢�ł����B
*/
#include<iostream>

int main(){
	int answer,num,want;
	std::cin >> num >> want;

	if (!(want%num)) {
		answer=want / num;
	}
	else {
		answer = want / num + 1;
	}

	std::cout << answer << std::endl;

	return 0;

}