#ifndef CARD_H
#define CARD_H

class Card
{
    private:
        char* number;
    public:
        Card(char*);
        char* getNumber();
        char* getType();
};

#endif
