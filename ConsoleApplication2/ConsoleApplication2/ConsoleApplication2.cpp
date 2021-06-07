// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// dynamic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#pragma comment(lib, "C:\\Users\\eyary\\source\\repos\\nikita\\Dll1\\Debug\\Dll1.lib") //автоматически залинкует библиотеку
#include <iostream>
#include "windows.h"

typedef int(group_number)(int);
typedef void(name_sername)(char*);

int main()
{
    HINSTANCE Dll = LoadLibrary(L"Dll1.dll");
    if (Dll == NULL)
    {
        std::cout << L"Ошибка библиотеки!";
        return 1;
    }

    group_number* mygroup;
    name_sername* myname;
    mygroup = (group_number*)GetProcAddress(Dll, "mygroup");
    myname = (name_sername*)GetProcAddress(Dll, "myname");
    if (mygroup == NULL)
    {
        std::cout << L"Ошибка number";
        return 1;
    }
    if (myname == NULL)
    {
        std::cout << L"Ошибка name";
        return 1;
    }

    std::cout << "Group: RI-" << mygroup(561220) << "\n";
    char name1[20];
    myname(name1);
    std::cout << "Name: " << name1 << "\n";
    system("pause");
    FreeLibrary(Dll);
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
