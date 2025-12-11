#ifndef CHAPTER
#define CHAPTER

#include "author.h"
#include"article.h"


class Chapter{
    private:
    string title;
    Author author;
    int chapterNumber;

    public:

    Chapter();
Chapter(string chapterTitle, Author chapeterAuthor, int number);
Chapter(const Chapter &other);
Chapter(Article &article);
void displayInfo();
string getTitle();
Author getAuthor();
int getChapterNumber();


};
#endif