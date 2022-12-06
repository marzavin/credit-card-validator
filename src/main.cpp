#include <iostream>

using namespace std;
  
int main(int argc, char** argv)
{
    if(argc <= 1)
    {
        cout << "Credit card number is required as a parameter." << endl;
        return 0;
    }
  
    for (int i = 0; i < argc; ++i)
    {
        cout << argv[i] << "\n";
    }
  
    return 0;
}
