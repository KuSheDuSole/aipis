#include <iostream>
#include <string>

// Главная фунция - точка входа в программу
int
main()
{

  std::string name; // Переменная имени пользователя
  std::cout << "Enter your name: ";
  std::cin >> name; // Чтение ввода пользователя

  std::cout << "Hello_world from " << name
            << std::endl; // Вывод приветственного сообщения
}