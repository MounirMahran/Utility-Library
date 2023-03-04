#pragma once
#include <iostream>
#include "clsDate.h"
#include "ReadInputsLib.h"
#include "clsString.h"

using namespace std;

class clsUtil
{
public:

	enum enCharacterType { SmallLetter = 1, CapitalLetter = 2, Digit = 3, Mix = 4, SpecialChar = 5 };

	static void Srand() {
		srand((unsigned)time(NULL));
	}

	static int GenerateRandomNumber(int From, int To) {
		return rand() % (To - From + 1) + From;
	}

	static char GenerateRandomCharacter(enCharacterType CharacterType) {
        switch (CharacterType) {
        case enCharacterType::SmallLetter:
            return char(GenerateRandomNumber(97, 122));
        case enCharacterType::CapitalLetter:
            return char(GenerateRandomNumber(65, 90));
        case enCharacterType::Digit:
            return char(GenerateRandomNumber(48, 57));
        case enCharacterType::Mix:
            return GenerateRandomCharacter((enCharacterType) GenerateRandomNumber(1, 3));
        case enCharacterType::SpecialChar:
            return char(GenerateRandomNumber(33, 46));
        }
    }

    static string GenerateWord(enCharacterType CharacterType, short WordLength) {
        string Word = "";
        for (int i = 0; i < WordLength; i++) {
            Word += GenerateRandomCharacter(CharacterType);
        }
        return Word;
    }

    static string GenerateKey(enCharacterType CharacterType = enCharacterType::CapitalLetter) {
        string Key = "";
        Key += GenerateWord(CharacterType, 4);
        Key += "-";
        Key += GenerateWord(CharacterType, 4);
        Key += "-";
        Key += GenerateWord(CharacterType, 4);
        Key += "-";
        Key += GenerateWord(CharacterType, 4);
        return Key;
    }

    static void GenerateKeys(enCharacterType CharacterType, int Num) {
        for (int i = 1; i <= Num; i++) {
            cout << "Key[" << i << "] : " << GenerateKey(CharacterType) << endl;
        }
    }

    static void FillArrayWithRandomNumbers(int Arr[100], int ArrayLength, int From, int To) {
        
        for (int i = 0; i < ArrayLength; i++) {
            Arr[i] = GenerateRandomNumber(From, To);
        }

    }

    static void FillArrayWithRandomWords(string Arr[100], enCharacterType CharacterType,short WordLength, int ArrayLength) {

        for (int i = 0; i < ArrayLength; i++) {
            Arr[i] = GenerateWord(CharacterType, WordLength);
        }

    }
 
    static void FillArrayWithRandomKeys(string Arr[100], enCharacterType CharacterType, int ArrayLength) {

        for (int i = 0; i < ArrayLength; i++) {
            Arr[i] = GenerateKey(CharacterType);
        }

    }
    
    static void Swap(int& Num1, int& Num2) {
        int Temp;

        Temp = Num1;
        Num1 = Num2;
        Num2 = Temp;
    }

    static void Swap(double& Num1, double& Num2) {
        double Temp;

        Temp = Num1;
        Num1 = Num2;
        Num2 = Temp;
    }

    static void Swap(bool& Val1, bool& Val2) {
        bool Temp;

        Temp = Val1;
        Val1 = Val2;
        Val2 = Temp;
    }

    static void Swap(char& Char1, bool& Char2) {
        char Temp;

        Temp = Char1;
        Char1 = Char2;
        Char2 = Temp;
    }

    static void Swap(string& Str1, string& Str2) {
        string Temp;

        Temp = Str1;
        Str1 = Str2;
        Str2 = Temp;
    }

    static void Swap(clsDate& Date1, clsDate& Date2) {
        clsDate Temp;

        Temp = Date1;
        Date1 = Date2;
        Date2 = Temp;
    }

    static void ShuffleArray(int Arr[100], int ArrLength) {
        for (int i = 0; i < ArrLength; i++) {
            Swap(Arr[GenerateRandomNumber(1, ArrLength) - 1], Arr[GenerateRandomNumber(1, ArrLength) - 1]);
        }
    }

    static void ShuffleArray(string Arr[100], int ArrLength) {
        for (int i = 0; i < ArrLength; i++) {
            Swap(Arr[GenerateRandomNumber(1, ArrLength) - 1], Arr[GenerateRandomNumber(1, ArrLength) - 1]);
        }
    }

    static void Tabs(short NumOfTaps) {
        for (short i = 0; i < NumOfTaps; i++) cout << "\t";
    }

    static string EncryptText(string Text, short EncryptionKey) {
        int Len = Text.length();

        for (int i = 0; i < Len; i++) {
            Text[i] = char(Text[i] + EncryptionKey);
        }
        return Text;
    }

    static string DecryptText(string Text, int EncryptionKey) {
        int Len = Text.length();

        for (int i = 0; i < Len; i++) {
            Text[i] = char(Text[i] - EncryptionKey);
        }
        return Text;
    }

};


