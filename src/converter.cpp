#include "../include/converter.h"

/************************METOD_ConvertToBinary**************************/

void ConvertToBinary::getBooleanData(){
    int  temp = 0;
    int  bitMask = 32768;
    std::cout << "Двоичное представление: " << std::endl;
    std::cout << "0b";
    for (int i = 0; i < 16; i++) {
        temp = integerData & bitMask;
        if (temp != 0) {
            booleanData[i] = 1;
            std::cout << booleanData[i];
        } else {
            booleanData[i] = 0;
            std::cout << booleanData[i];
        }
        bitMask = bitMask >> 1;
    }
    std::cout << std::endl << std::endl;
}

/**************************METOD_Clear*************************************/

void ConvertToBinary:: clear() {
    for (int i = 0; i < (sizeof(booleanData)/sizeof(booleanData[0])); i++) {
        booleanData[i] = 0;
    }
}
/************************METOD_PrintBooleanData******************************/

void ConvertToBinary::printBooleanData() {
    std::cout << "По битам: " << std::endl;
    for (int i = 0; i < 16; i++) {
        if (booleanData[i] != 0) {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << "True" << std::endl;
        } else {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << "False" << std::endl;
        }
    }
}

/**************************METOD_ConvertToSIT*********************************/

void ConvertToSIT::printData() {
    std::cout << "Статусы SIT: " << std::endl;
    for (int i = 0; i < 16; i++) {
        if (booleanData[i] != 0) {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << dataSIT[15 - i] << std::endl;
        } else {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << "Нет" << std::endl;
        }
    }
}

/***************************METOD_ConvertToSCIB*******************************/

void ConvertToSCIB::printData() {
    std::cout << "Статусы SKIB: " << std::endl;
    for (int i = 0; i < 16; i++) {
        if (booleanData[i] != 0) {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << dataSIT[15 - i] << std::endl;
        } else {
            std::cout << "Бит ";
            if ((15 - i) < 10) {std::cout << "0";}
            std::cout << (15 - i);
            std::cout << " = ";
            std::cout << "Нет" << std::endl;
        }
    }
}

/****************************METOD_END**************************************/