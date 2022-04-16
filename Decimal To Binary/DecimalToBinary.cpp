#include <iostream>

using namespace std;

void dToB(int decimal)
{
    // Function to convert decimal number to binary
    int i, binary[33];
    for (i = 0; decimal != 0; i++)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    cout << endl;
}

int main()
{
    int num;

    while (num != 0)
    {
        cout << "num:";
        cin >> num;
        dToB(num);
    }
    return 0;
}