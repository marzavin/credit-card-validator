#include <iostream>

#include "card.h"

using namespace std;
  
int main(int argc, char** argv)
{
    if(argc <= 1)
    {
        cout << "Credit card number is required as a parameter." << endl;
        return 0;
    }
  
    for (int i = 1; i < argc; ++i)
    {
        Card card(argv[i]);
        cout << "Card number: " << argv[i] << endl;
        cout << "Card type: " << card.getType() << endl;
    }
  
    return 0;
}
