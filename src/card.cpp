#include "card.h"

Card::Card(char* number)
{
    this->number = number;
}

char* Card::getNumber()
{
    return this->number;
}

char* Card::getType()
{
    switch(this->number[0])
    {
        case '4':
            return "Visa";
        case '5':
            return "MasterCard";
        default:
            return "Unknown";
    }
}
