// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cstring>
#include <cctype>
#include <cmath>

unsigned int faStr1(const char* str) {
    unsigned int wordCount = 0;
    unsigned int noDigitsCount = 0;
    bool insideWord = false;

    for (const char* p = str; *p != '\0'; p++) {
        if (isspace(*p)) {
            insideWord = false;
        }
        else if (!insideWord) {
            insideWord = true;
            wordCount++;
            bool hasDigits = false;
            for (const char* q = p; !isspace(*q) && *q != '\0'; q++) {
                if (isdigit(*q)) {
                    hasDigits = true;
                    break;
                }
            }
            if (!hasDigits) {
                noDigitsCount++;
            }
        }
    }
    return noDigitsCount;
}


unsigned int faStr2(const char* str)
{
    unsigned int count = 0;
    bool is_word = false;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            if (!is_word)
            {
                is_word = true;
                if (i == 0 || isspace(str[i - 1]))
                {
                    bool only_lowercase = true;
                    for (int j = i + 1; j < strlen(str); j++)
                    {
                        if (isalpha(str[j]) && isupper(str[j]))
                        {
                            only_lowercase = false;
                            break;
                        }
                        if (!isalpha(str[j]))
                        {
                            break;
                        }
                    }
                    if (only_lowercase)
                    {
                        count++;
                    }
                }
            }
        }
        else if (!isalpha(str[i]))
        {
            is_word = false;
        }
    }
    return count;
}

unsigned int faStr3(const char* str)
{
    unsigned int count = 0;
    unsigned int sum = 0;
    bool is_word = false;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {
            if (!is_word)
            {
                is_word = true;
            }
            count++;
        }
        else
        {
            if (is_word)
            {
                is_word = false;
                sum += count;
                count = 0;
            }
        }
    }
    if (is_word)
    {
        sum += count;
    }
    return round(static_cast<double>(sum) / faStr1(str));
}
