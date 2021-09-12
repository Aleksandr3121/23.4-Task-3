#include <iostream>

using namespace std;

#define SPRING 1
#define SUMMER 2
#define AUTUMN 4
#define WINTER 8

//в определение макроса SEASON вписываем нужный макрос определяющий сезон года
#define SEASON AUTUMN

int main() {
#if SEASON & SPRING
    cout << "spring" << endl;
#elif SEASON & SUMMER
    cout << "summer" << endl;
#elif SEASON & AUTUMN
    cout << "autumn" << endl;
#elif SEASON & WINTER
    cout << "winter" << endl;
#endif
    return 0;
}
