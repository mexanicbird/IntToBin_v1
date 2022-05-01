#include "include/converter.h"

using namespace std;

int16_t command = 0;
int16_t exitProg = 0;
int16_t userData = 0;

int main() {

/************************************MAIN_CIRCLE******************************************/
    do {
        std::cout << "РАСШИФРОВКА КОДА НЕИСПРАВНОСТИ СКИБ И СИТ" << std::endl;
        std::cout << "Перевод числа в бинарный вид  - НАЖМИТЕ: 1 и INTER" << std::endl;
        std::cout << "Расшифровка кода статуса СИТ - НАЖМИТЕ: 2 и INTER" << std::endl;
        std::cout << "Расшифровка кода статуса СКИБ  - НАЖМИТЕ: 3 и INTER" << std::endl;

        cin >> command;
        if (!cin)
        {
            cout << "Ввод не корректен" << endl;
            cin.clear();
            fflush(stdin);
        }

        switch (command)
        {
            case 1:
            {
                std::cout << "Введите число для обработки: " << std::endl;
                cin >> userData;
                ConvertToBinary a1(userData);
                a1.getBooleanData();
                a1.printBooleanData();
                a1.clear();
                std::cout << std::endl;
                break;
            }
            case 2:
            {
                std::cout << "Введите число для обработки: " << std::endl;
                cin >> userData;
                ConvertToSIT b1(userData);
                b1.getBooleanData();
                b1.printData();
                b1.clear();
                std::cout << std::endl;
                break;
            }
            case 3:
            {
                std::cout << "Введите число для обработки: " << std::endl;
                cin >> userData;
                ConvertToSCIB c1(userData);
                c1.getBooleanData();
                c1.printData();
                c1.clear();
                std::cout << std::endl;
                break;
            }
            default: {
                std::cout << "Такой команды не существует" << std::endl;
            }

        }
        std::cout << "***************************END***************************" << std::endl;
        std::cout << std::endl;
        std::cout << "ПРОДОЛЖИТЬ?" << std::endl;
        std::cout << "ДА - 1; НЕТ - ЛЮБАЯ ДРУГАЯ ЦИФРА" << std::endl;
        cin >> exitProg;

    } while (exitProg == 1);
    /* system("pause"); */
    return 0;

/*********************************OUTPUT******************************************/
}

