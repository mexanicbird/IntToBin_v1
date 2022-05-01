#ifndef INTTOBIN_V1_CONVERTER_H
#define INTTOBIN_V1_CONVERTER_H

#include <iostream>
#include <cstdlib>
#include <string>

/**********************CLASS_ConvertToBinary**************************/

class ConvertToBinary {
protected:
    int16_t integerData;
    bool booleanData[16];
public:
    ConvertToBinary(int16_t _integerData) : integerData(_integerData){
    }
    void getBooleanData();
    void printBooleanData();
    void clear();
    ~ConvertToBinary() = default;
};

/**********************CLASS_ConvertToSIT******************************/

class ConvertToSIT : public ConvertToBinary {
protected:
    std::string const dataSIT[16] = {
            "Модуль отключен или не отвечает",
            "Превышен зарядный ток",
            "Превышен разрядный ток",
            "Отключение группы датчиков температуры",
            "Низкая температура 1 ступень",
            "Высокая температура 1 ступень",
            "Низкая температура 2 ступень",
            "Высокая температура 2 ступень",
            "Низкая температура 2 ступень (дублирующий)",
            "Высокая температура 2 ступень (дублирующий)",
            "В СКИБе низкое напряжение 1 ступень",
            "В СКИБе высокое напряжение 1 ступень",
            "В СКИБе обнаружено напряжнение конца заряда",
            "В СКИБе обнаружено напряжнение конца заряда",
            "В СКИБе низкое напряжение 2 ступень",
            "В СКИБе высокое напряжение 2 ступень",
    };
public:
    ConvertToSIT(int16_t integerData) : ConvertToBinary (integerData){
    }
    void printData();
    ~ConvertToSIT() = default;
};

/***********************CLASS_ConvertToSCIB****************************/

class ConvertToSCIB : public ConvertToBinary {
protected:
    std::string const dataSIT[16] = {
            "Модуль АЦП отключен или не отвечает",
            "нет сообщения",
            "Отключен датчик напряжения",
            "Отключение группы датчиков температуры",
            "Низкая температура 1 ступень",
            "Высокая температура 1 ступень",
            "Низкая температура 2 ступень",
            "Высокая температура 2 ступень",
            "Низкая температура 2 ступень (дублирующий)",
            "Высокая температура 2 ступень (дублирующий)",
            "В СКИБе низкое напряжение 1 ступень",
            "В СКИБе высокое напряжение 1 ступень",
            "В СКИБе обнаружено напряжнение конца заряда",
            "В СКИБе обнаружено напряжнение конца заряда",
            "В СКИБе низкое напряжение 2 ступень",
            "В СКИБе высокое напряжение 2 ступень",
    };
public:
    ConvertToSCIB (int16_t integerData) : ConvertToBinary (integerData){
    }
    void printData();
    ~ConvertToSCIB() = default;
};

/***************************CLASS_END************************************/
#endif //INTTOBIN_V1_CONVERTER_H
