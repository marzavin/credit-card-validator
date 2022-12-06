#ifndef CARD_H
#define CARD_H

class Card
{
    private:
        static const char* VISA_TYPE;
        static const char* MASTERCARD_TYPE;
        static const char* UNKNOWN_TYPE;

        char* number;
    public:
        Card(char*);
        char* getNumber();
        const char* getType();
};

#endif
