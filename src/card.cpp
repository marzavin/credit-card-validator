#include "card.h"

const char* Card::VISA_TYPE = "Visa";
const char* Card::MASTERCARD_TYPE = "MasterCard";
const char* Card::UNKNOWN_TYPE = "Unknown";

Card::Card(char* number)
{
    this->number = number;
}

char* Card::getNumber()
{
    return this->number;
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
