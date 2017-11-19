/*
問題文
高橋君はお茶のペットボトルが A 本入った箱を買うことにしました。 高橋君は少なくとも B 本のお茶のペットボトルがほしいです。 箱を何箱買えばよいですか。
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