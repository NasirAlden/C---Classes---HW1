#pragma once
using namespace std;
class Blog
{
public:
	unsigned int blogLength;
	unsigned int filledLength;
	char* allBlogStr;
	char blogName[20];

	Blog(unsigned int maxLength);
	void addLine();
	void deleteLine();
	void printBlog();
	void saveToFile();
	void loadFromFile();

};

