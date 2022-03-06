#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    enum Gender
    {
        male,
        femail
    };
    Gender gender;
    gender = male;

    switch (gender)
    {
    case male:
        cout << "male";
        break;
    case femail:
        cout << "femail";
        break;
    default:
        cout << "trans";
    }

    return 0;
}