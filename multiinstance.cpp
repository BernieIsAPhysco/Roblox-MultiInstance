#include <Windows.h>

#include <iostream>

int main()
{

    std::cout << "Roblox MultiInstance is on (Do not close this Window or it wont work) \n";
    std::cout << ":3  \n Made by bernie frr";
    CreateMutexW(NULL, TRUE, L"ROBLOX_singletonMutex");
    std::cin.get();
    return 0;
}
