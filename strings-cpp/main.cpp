#include <iostream>
#include <string>

using namespace std;

string capitalizeString(string);

int main()
{
    string animal = "dog";
    cout << "Animal: " << animal << endl;
    cout << "Has " << animal.length() << " letters." << endl;

    animal[0] = 'D';
    cout << "Animal: " << animal << endl;

    animal += " is the best friend!";
    cout << animal << endl;

    cout << "'friend' starts at " << animal.find("friend") << " position." << endl;
    cout << "\nWhat is the dog? " << endl;
    cout << animal.substr(7, 17) << endl;

    animal.insert(0, "T");
    animal.insert(1, "h");
    animal.insert(2, "e");
    animal.insert(3, " ");
    cout << animal << endl;

    // new characters inserted, then index position of prior characters have changed/increased
    animal.replace(20, 7, "buddy!");
    cout << animal << endl;

    // Capitalize
    animal[0] = toupper(animal[0]);
    cout << "Capitalized: " << animal << endl;
    cout << "String size: " << animal.size() << endl;

    // all UPPER CASE
    cout << capitalizeString(animal) << endl;
    return 0;
}

string capitalizeString(string s) {
    /* Processes character per character from 's', transforming the whole string into UPPER case format. */
    string new_s = s;
    for (int i=0; i < s.size(); i++) {
        new_s[i] = toupper(s[i]);
    }
    return new_s;
}
