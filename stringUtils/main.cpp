#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int printLineSeparator(char c = '*', int len = 13);
void generateStringStats(string s);

struct {
    int characters;
    int numbers;
    int space;
    int special;
} stats;

int main()
{
    string name;
    bool terminate = false;

    while(!terminate) {
        cout << "String: ";
        getline(cin, name);
        printLineSeparator();
        generateStringStats(name);
        cout << "characters : " << stats.characters << endl;
        cout << "numbers    : " << stats.numbers << endl;
        cout << "space      : " << stats.space << endl;
        cout << "special    : " << stats.special << endl;
        printLineSeparator();
        cout << "Press any key to terminate or 'r' to repeat..." << endl;
        if (cin.get() != 'r') {
            break;
        }
    }

    return 0;
}

int printLineSeparator(char c, int len) {
    for (unsigned int i = 0; i <= len; i++) {
        cout << c;
    }
    cout << '\n';
    return 0;
}

void generateStringStats(string s) {

    for(unsigned int i = 0; i < s.size(); i++) {
        if(isalpha(s[i])){
           stats.characters++;
        } else if(isdigit(s[i])) {
           stats.numbers++;
        } else if(isspace(s[i])) {
           stats.space++;
        } else if(ispunct(s[i])) {
           stats.special++;
        }
    }

    return void();

}
