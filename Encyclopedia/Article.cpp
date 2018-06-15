#include "Article.h"

Article::Article()
{
}


Article::~Article()
{
}

void Article::setTitle(string str) {
	title = str;
}
void Article::setContent(string str) {
	content = str;
}
string Article::getInfo() {
	return "<h1>" + title + "</h1><p>" + content + "</p>";
}