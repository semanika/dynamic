// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// dynamic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#pragma comment(lib, "C:\\Users\\eyary\\source\\repos\\nikita\\Dll1\\Debug\\Dll1.lib") //автоматически залинкует библиотеку
#include <iostream>
#include "windows.h"

typedef int (group_num)(int);
typedef std::string(mname)(const char*);

int main()
{
    HINSTANCE Dll = LoadLibrary(L"C:\\Users\\eyary\\source\\repos\\nikita\\Dll1\\Debug\\Dll1.dll");

    group_num* group;
    mname* myname;
    group = (group_num*)GetProcAddress(Dll, "group");
    myname = (mname*)GetProcAddress(Dll, "myname");

    std::cout << "group: " << group(561220) << "\n";
    std::cout << "name: " << myname("Nikita Semisotov") << "\n";
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
