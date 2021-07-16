#include "Post.h"
#include <iostream>
#include <istream>

int Post::id = 0;

std::istream & operator>>(std::istream &in, Post &className)
{
	std::cout << "Entry id: "; in >> className.id;
	std::cout << "Entry Author: "; in >> className.Author;
	std::cout << "Entry Category: "; in >> className.Category;
	std::cout << "[ENTRY TIME FOR READING YOUR POST : " << std::endl;
		std::cout << "Entry hours: "; in >> className.time.tm_hour;
		std::cout << "Entry minute: "; in >> className.time.tm_min;
		std::cout << "Entry second:"; in >> className.time.tm_sec;
 return in;
}

std::ostream & operator<<(std::ostream &out, Post &className)
{
  system("cls");
  out << "[GET ALL DATA:] " << std::endl
	  << "ID: " << className.id << "   "
	  << "Authors: " << className.Author << "   "
	  << "Category: " << className.Category
	  << "[Entry Time for reading: ]"
		 << className.time.tm_hour <<" Hours " << "  " 
		 << className.time.tm_min << " Minutes" << "  " 
		 << className.time.tm_sec << " Second" << std::endl
      << "Press any key for exit... ";
  std::cin.get();
 std::getc(stdin);
return out; 
}
