#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

int main() {
  std::string line;
  std::basic_fstream<char> test("SomeFile.txt", std::ios::in | std::ios::out | std::ios::trunc);
  if (test) {
    std::string sent;
    std::cout << "Write your sentence : ";
    SetConsoleCP(1251);
    getline(std::cin, sent);
    test << sent;
    test.seekg(0, std::ios::beg);
    std::getline(test, line);
    std::cout << line << std::endl;
    SetConsoleCP(886);
  } else {
    std::cout << "file is not opened" << std::endl;
  }

  return 0;
}
