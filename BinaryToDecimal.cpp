#include <iostream>
#include <string>
using namespace std;

int binaryToDecimalRecursive(const  string& binary, int index) 
{
    if (index < 0) 
    {
        return 0; 
    }

    int digit = binary[index] - '0';  // Convert char to int (0 or 1)
    int power = binary.size() - 1 - index;

    return digit * (1 << power) + binaryToDecimalRecursive(binary, index - 1);
}

int binaryToDecimal(const  string& binary) 
{
    return binaryToDecimalRecursive(binary, binary.size() - 1);
}

int main() 
{
     string binary;
     cout << "Enter a binary number: ";
     cin >> binary;

    int decimal = binaryToDecimal(binary);
     cout << "Decimal equivalent: " << decimal <<  endl;

    return 0;
}
