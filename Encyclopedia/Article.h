#pragma once
#include <string>
using namespace std;

class Article
{
public:
	Article();
	~Article();
	void setTitle(string str);
	void setContent(string str);
	string getInfo();

protected:
	string title;
	string content;
};

