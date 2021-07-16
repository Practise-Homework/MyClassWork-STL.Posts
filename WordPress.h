#pragma once
#include <map>
#include <vector>
#include <string>
#include "Post.h"

class WordPress
{
     std::map<std::string, std::vector<Post *>> authors;
     std::map<std::string, std::vector<Post *>> cathegory;
	 std::map<int, Post*> posts;
public:
	void Run();
	void Create(); // Создание поезда
	void Read(); // Чтение одного поезда
	void Read(int); // Список всех поездов
	void Update(int); // обновление конкретного поезда
	void Delete(int); // удаление поезда
};

