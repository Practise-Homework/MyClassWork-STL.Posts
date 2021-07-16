#include "WordPress.h"
#include <iostream>
#include <string>


void WordPress::Run()
{
	char choice = '\0';
	int id;
	std::cout << "What do you wanna do: " << std::endl
			  << "[R] - Saw entry position " << std::endl
			  << "[C] - Create" << std::endl 
			  << "[A] - Show All " << std::endl
			  << "[D] - Delete " << std::endl
			  << "[U] - Update " << std::endl
			  << "Your choice: ";  std::cin >> choice;
	
	switch (choice)
	{
		case 'R' : 
				std::cout << "Entry position: "; 
				std::cin >> id;
				Read(id);
			break;
	    case 'C' : Create(); break;
		case 'A':  Read(); break;
		case 'D':
			//int id; 
			  std::cout << "Entry interested ID : "; 
			  std::cin >> id; Delete(id); 
			break;
		case 'U':
			//int id; 
			  std::cout << "Entry interested ID: ";
			  std::cin >> id; 
			Update(id); 
			break;
	   default:
		   std::cout << "Wrong option! ReEntry your choice!" << std::endl; 
	}
}

void WordPress::Create()
{
	// Создаём динамический объект 
	Post *feeds = new Post(); 
	std::cin >> *feeds;
	// Инкрементация счётчика постов помере их добавления при помощи оператора ++
    Post::id++;

	// В свойство Cathegory класса Post добавляю значение `News`
	//feeds->Category = "News";

    // Пушим в мапы категорий и авторов указатели на авторов и категории ...
	//posts[feeds->id].push_back(feeds);
	posts[feeds->id] = feeds;
	authors[feeds->Author].push_back(feeds); 
	cathegory[feeds->Category].push_back(feeds);
	
	//----------------------Конец -------------------------------------------

}

void WordPress::Read()
{
	/*for (auto i : posts)
	{
		Post* p = i.second;
	  std::cout << "ID: " << i.first << "  " << " Contains: " << p->Category << "  " << "Autor: " << p->Author << std::endl;
    }
	std::cout << std::endl<< "Press any key for exit ... ";
	std::cin.get();
	std::getc(stdin);*/
	for (auto i : posts)
	{
		Post* p = i.second;
		std::cout << "ID: " << i.first << "  " << *p << std::endl;
	}
	std::cout << std::endl << "Press any key for exit ... ";
	std::cin.get();
	std::getc(stdin);
}

void WordPress::Read(int n)
{
	std::cout << *posts[n];
	std::cin.get();
	std::getc(stdin);
}

void WordPress::Update(int)
{
}

void WordPress::Delete(int)
{
}
