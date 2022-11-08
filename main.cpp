#include <iostream>

#define STR(text) #text
#define DAY1 STR(Monday)
#define DAY2 STR(Tuesday)
#define DAY3 STR(Wednesday)
#define DAY4 STR(Thursday)
#define DAY5 STR(Friday)
#define DAY6 STR(Saturday)
#define DAY7 STR(Sunday)
#define TEXT(a) DAY##a

int main() {
    std::cout << "23.1 Day of week" << std::endl;
    std::cout << "Enter a number: " << std::endl;
    int i = 0;
    std::cin >> i;
    switch(i){
        case 1:  std::cout << TEXT(1) << std::endl; break;
        case 2:  std::cout << TEXT(2) << std::endl;  break;
        case 3:  std::cout << TEXT(3) << std::endl;  break;
        case 4:  std::cout << TEXT(4) << std::endl;  break;
        case 5:  std::cout << TEXT(5) << std::endl;  break;
        case 6:  std::cout << TEXT(6) << std::endl;  break;
        case 7:  std::cout << TEXT(7) << std::endl;  break;
        default: std::cout << "There is no such day of week" << std::endl;  break;
    }

    return 0;
}
