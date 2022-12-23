#include <iostream>
using namespace std;

char *write_chars(char *dest, const char *st)
{
    *dest = st;
    return dest;
}

void escape(char *src, char *dest)
{
    string x = "&lt";
    string y = "&gt";
    string z = "&quot";

    if (*src == '<') {
        write_chars(*src, x);
    }
    else if (*src == '>') {
        write_chars(*src, '&gt');
    }
    else if (*src == '"') {
        write_chars(*src, '&quot')
    }
}

int main()
{
    char st[1000];
    char out[1000];
    int l;

    cin.getline(st, 1000);
    escape(st, out);

    cout << out << endl;
}