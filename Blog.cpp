#pragma warning(disable:4996)
#include "Blog.h"
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS



char fileName[20] = { '\0' };

//Constructor
Blog::Blog(unsigned int maxLength) {
	blogLength = maxLength;
	allBlogStr = (char*)malloc(sizeof(maxLength));
	//reset allBlogStr
	int l = strlen(allBlogStr);
	for (int i = 0;i <= l;++i) {
		allBlogStr[i] = '\0';
	}
	filledLength = 0;
	std::cout << "What is the Blog Name? ";
	std::cin >> blogName;
	sprintf_s(fileName, "%s%s", blogName, ".TXT");
}

void Blog::addLine() {
	string	line;
	while (1) {
		int allowedSize = blogLength - filledLength;
		std::cout << "\nInsert text line (max "<<allowedSize<<" chars) to add to the file : \n";
		if (strlen(allBlogStr) == 0){
			cin.ignore();
		}
		std::getline(cin, line);
		if (line.length() <= allowedSize) {
			filledLength += line.length();
			strcat(allBlogStr, line.c_str());
			strcat(allBlogStr, " ");
			break;
		}  
		else {
			std::cout << "your line is too long please try again!\n";
			continue;
		}
	}
	
}
void Blog::deleteLine() {

}

void Blog::printBlog() {
	char* readChar=allBlogStr;
	std::cout << readChar;
		
	
}

void Blog::saveToFile() {
	FILE* f = fopen(fileName, "w");
	char* readChar = allBlogStr;
	while (*readChar!='\0') {
		fputc(*readChar, f);
		readChar++;
	}
	fputc('\n',f);
	fclose(f);
}

void Blog::loadFromFile() {
	//reset allBlogStr
	int l = strlen(allBlogStr);
	for (int i = 0;i <= l;++i) {
		allBlogStr[i] = '\0';
	}
	int j = 0;
	FILE* fLoad = fopen(fileName, "r");
	char readChar= fgetc(fLoad);
	while (readChar != EOF) {
		allBlogStr[j++] = readChar;
		readChar = fgetc(fLoad);
	}
	fclose(fLoad);
}


