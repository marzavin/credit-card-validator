#include <cstring>
#include "card.h"

using namespace std;

const char* Card::VISA_TYPE = "Visa";
const char* Card::MASTERCARD_TYPE = "MasterCard";
const char* Card::UNKNOWN_TYPE = "Unknown";

Card::Card(char* sourceString)
{
    length = strlen(sourceString);
    if(length > 0)
    {
        source = new char(length);
        number = new int(length);
        for(int i = 0; i < length; i++)
        {
            source[i] = sourceString[i];
            number[i] = sourceString[i] - '0';
        }
    }
}

Card::~Card()
{
    delete[] number;
    delete[] source;
}

char* Card::getNumber()
{
    return source;
}

const char* Card::getType()
{
    switch(this->number[0])
    {
        case '4':
            return VISA_TYPE;
        case '5':
            return MASTERCARD_TYPE;
        default:
            return UNKNOWN_TYPE;
    }
}

bool Card::validate()
{
    return true;
}
