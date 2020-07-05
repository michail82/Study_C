#include <iostream>
using namespace std;
int main()     // заголовок главной функции, которая не возвращает результат
{
    setlocale(LC_ALL, "rus");
    cout << "\"Hello, World!\"\n"; 
    cout << "\\Dennis Ritchi!\\\n";  //вывод на консоль
    system("pause");             //задержка выполнения программы
    return 0;
}