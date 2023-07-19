# Utility-Library
This is an ongoing project to contain general functions to be used in upcoming C++ projects. It currently includes functions for generating random numbers, characters, and words, filling arrays with random data, swapping values, shuffling arrays, and encrypting/decrypting text.  

## Features
1. Generate a random integer between two values with int GenerateRandomNumber(int From, int To)
2. Generate a random character with char GenerateRandomCharacter(enCharacterType CharacterType)  
3. Generate a random word of a given length and character type with string GenerateWord(enCharacterType CharacterType, short WordLength)  
4. Generate a random encryption key of a given character type with string GenerateKey(enCharacterType CharacterType = 
enCharacterType::CapitalLetter)  
5. Fill an array with random integers between two values with void FillArrayWithRandomNumbers(int Arr[100], int ArrayLength, int From, int To)  
6. Fill an array with random words of a given length and character type with void FillArrayWithRandomWords(string Arr[100], enCharacterType CharacterType, short WordLength, int ArrayLength)  
7. Swap the values of two integers with void Swap(int& Num1, int& Num2)  
8. Shuffle the values in an integer array with void ShuffleArray(int Arr[100], int ArrLength)  
9. Encrypt a string with a given encryption key with string EncryptText(string Text, short EncryptionKey)  
10. Decrypt an encrypted string with a given encryption key with string DecryptText(string Text, int EncryptionKey)  
