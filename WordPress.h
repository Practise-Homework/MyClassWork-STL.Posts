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
	void Create(); // �������� ������
	void Read(); // ������ ������ ������
	void Read(int); // ������ ���� �������
	void Update(int); // ���������� ����������� ������
	void Delete(int); // �������� ������
};

