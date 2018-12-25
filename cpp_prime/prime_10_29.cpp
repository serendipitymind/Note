/*************************************************************************
# File Name: prime_10_29.cpp
# Author: Fujie
# mail: 1310341753@qq.com
# Created Time: 2018年12月25日 星期二 21时37分41秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main(int argc, char * argv[]){
	std::ifstream in(argv[1]);
	if(!in)
	{
		std::cout << "打开文件失败!"<< std::endl;
		std::exit(1);
	}
	std::istream_iterator<string> in_iter(in);
	std::istream_iterator<string> eof;
	std::vector<string> words;
	while(in_iter != eof){
		words.push_back(*in_iter++);
	}
	for (auto word: words)
		std::cout << word << " ";
	std::cout << std::endl;
	return 0;
}
