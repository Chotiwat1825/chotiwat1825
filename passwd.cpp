#include <iostream>
using namespace std;

int main()
{
    string passwd, name;
    string p1 = "payut"; // Set : password
    int i = 0;

    cout << "--------LOGIN--------" << endl;

    cout << "Username : ";
    cin >> name;
    do
    {
        cout << "Enter Password : ";
        cin >> passwd;
        i++;

        if (i == 3) // Error :3 END
        {
            break;
        }

        if (passwd != p1)
        {
            cout << "Password Error !! " << i << endl;
        }

        cout << "\n";

    } while (!(passwd == p1));
    if (passwd == p1)
    {
        cout << "Welcome : " << name;
        cout << "\n\n\n";
    }
    else
    {
        cout << "\n\nEND Program";
    }

    return 0;
    system("pause");
}

// Cr : https://www.facebook.com/Chotiwat1825