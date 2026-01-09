#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersy;
    Cricketer(string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};
int main()
{

    Cricketer *dhoni = new Cricketer("India", 10);
    Cricketer *kohli = new Cricketer("India", 12);
    // cout << dhoni->country << endl;
    // kohli = dhoni; // evabe value assign korle memory ref soho assign hoi.
    kohli->country = dhoni->country;
    kohli->jersy = dhoni->jersy;
    delete dhoni;
    // cout << dhoni->jersy << endl;
    cout << kohli->country << " " << kohli->jersy << endl;
    return 0;
}