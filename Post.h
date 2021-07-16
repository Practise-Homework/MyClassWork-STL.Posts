#pragma once
#include <map>
#include <string>
#include <istream>
#include <ostream>
#include <ctime>
class Post
{
	friend std::istream& operator>>(std::istream&, Post&);
	friend std::ostream& operator<<(std::ostream&, Post&);
public:
	static int id;
	  std::string Title;
	  std::string Author;
	  std::string Category;
	tm time;
};
std::istream& operator>>(std::istream&, Post&);
std::ostream& operator<< (std::ostream&, Post&);
