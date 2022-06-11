#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SplitInteger{
private:
    vector<int> zahlen;
public:
    void split(string zeichenkette);
    void split(string zeichenkette, string trennzeichen);
    auto begin();
    auto end();
    void splitby(string zeichenkette, char trennzeichen);
    void leeren();
    vector<int> getZahlen();
    void add(int eingabe);
    void add(string eingabe);
    void ausgabe();
    void sortieren();
    void operator=(vector<int> other);
    int size();
    int operator[](int index);
    string operator=(string eingabe);
    int operator=(int eingabe);
    int getIndexOf(int zahl);
    int getPositionBiggest();
    int max();
    int min();
    void einzelnesEntfernen(int index);
    void primfaktorzerlegung(int zahl);
    bool contains(int zahl);
    void zusammenfassen();
};



int SplitInteger::operator=(int eingabe){
    split(to_string(eingabe));
    return eingabe;
}

string SplitInteger::operator=(string eingabe){
    split(eingabe);
    return eingabe;
}

int SplitInteger::getIndexOf(int zahl){
    for (int i = 0; i < size(); i++)
        if (zahlen[i] == zahl)
            return i;
    return -1;
}

int SplitInteger::getPositionBiggest(){
    return getIndexOf(max());
}

void SplitInteger::add(string eingabe){
    if (!eingabe.empty())
        add(stoi(eingabe));
}

void SplitInteger::splitby(string zeichenkette, char trennzeichen){
    string original = zeichenkette;
    int anfang = 0, vorschub = 0;
    for (int i = 0; i < original.length(); i++){
        if(original[i] == trennzeichen){
            add(original.substr(anfang, vorschub));
            anfang = i;
            vorschub = 1;
        }
        else{
            vorschub++;
        }
    }
    zahlen.push_back(stoi(original.substr(anfang, original.length() - anfang)));
}

void  SplitInteger::einzelnesEntfernen(int index){
    zahlen.erase(zahlen.begin() + index);
}

void SplitInteger::leeren(){
    zahlen.clear();
}

void SplitInteger::split(string zeichenkette){
    leeren();
    string original = zeichenkette;
    for (int i = 0; i < original.length(); i++)
        zahlen.push_back(stoi(original.substr(i, 1)));
}

void SplitInteger::add(int eingabe){
    zahlen.push_back(eingabe);
}

void SplitInteger::operator=(vector<int> other){
    zahlen.clear();
    for (int i = 0; i < other.size(); i++)
        zahlen.push_back(other[i]);
}

int SplitInteger::max(){
    SplitInteger temp;
    temp = zahlen;
    temp.sortieren();
    return temp[temp.size()-1];
}

int SplitInteger::min(){
    SplitInteger temp;
    temp = zahlen;
    temp.sortieren();
    return temp[0];
}

void SplitInteger::sortieren(){
    sort(zahlen.begin(), zahlen.end());
}

int SplitInteger::operator[](int index){
    return zahlen[index];
}

int SplitInteger::size(){
    return zahlen.size();
}

vector<int> SplitInteger::getZahlen(){
    return zahlen;
}

void SplitInteger::ausgabe(){
    for (int i = 0; i < zahlen.size(); i++)
        cout << zahlen[i] << endl;
}

void SplitInteger::split(string zeichenkette, string trennzeichen){
    string original = zeichenkette;
    int anfang = 0, vorschub = 0;
    for (int i = 0; i < original.length(); i++){
        if (original.substr(i, 1) == trennzeichen){
            zahlen.push_back(stoi(original.substr(anfang, vorschub)));
            anfang = i + 1;
            vorschub = 0;
        }
        else{
            vorschub++;
        }
    }
    zahlen.push_back(stoi(original.substr(anfang, original.length() - anfang)));
}

auto SplitInteger::begin() {
    return zahlen.begin();
}

auto SplitInteger::end() {
    return zahlen.end();
}

void SplitInteger::primfaktorzerlegung(int zahl) {
    for (int i = 2; i < sqrt(zahl) + 1; i++)
        while (zahl % i == 0){
            add(i);
            zahl /= i;
        }
    if (zahl > 1)
        add(zahl);
}

bool SplitInteger::contains(int zahl) {
    if (*find(zahlen.begin(), zahlen.end(), zahl) == zahl)
        return true;
    return false;
}

void SplitInteger::zusammenfassen() {
    int i = 0, zahl = zahlen[i];
    while (i < size() - 1) {
        if (zahlen[i] == zahlen[i + 1]) {
            zahl *= zahlen[i + 1];
            einzelnesEntfernen(i + 1);
            if (i + 1 >= size()){
                zahlen[i] = zahl;
                break;
            }
        }
        else {
            zahlen[i] = zahl;
            i++;
            zahl = zahlen[i];
        }
    }
}


int istPrimzahl(int zahl);

int istPrimzahl(int zahl) {
    if (zahl == 2)
        return 1;
    if (zahl == 1 || zahl % 2 == 0)
        return 0;
    for (int i = 3; i < sqrt(zahl) + 1; i += 2)
        if (zahl % i == 0)
            return 0;
    return 1;
}

int main() {
    SplitInteger faktoren1, faktoren2, faktoren3, faktoren4;
    int anzahlfaktoren = 4;
    for (int i = 58563; i < 1000000; i++){
        if(istPrimzahl(i) || istPrimzahl(i+1))
            continue;
        faktoren1.leeren();
        faktoren2.leeren();
        faktoren3.leeren();
        faktoren4.leeren();
        faktoren1.primfaktorzerlegung(i);
        faktoren2.primfaktorzerlegung(i + 1);
        faktoren3.primfaktorzerlegung(i + 2);
        faktoren4.primfaktorzerlegung(i + 3);
        faktoren1.zusammenfassen();
        faktoren2.zusammenfassen();
        faktoren3.zusammenfassen();
        faktoren4.zusammenfassen();
        for (int j = 0; j < faktoren1.size(); j ++)
            if (faktoren2.contains(faktoren1[j]) || faktoren3.contains(faktoren1[j]) || faktoren4.contains(faktoren1[j]))
                break;
        for (int j = 0; j < faktoren2.size(); j++)
            if (faktoren3.contains(faktoren2[j]) || faktoren4.contains(faktoren2[j]))
                break;
        for (int j = 0; j < faktoren3.size(); j++){
            if (faktoren4.contains(faktoren3[j]))
                break;
            if (faktoren1.size() == anzahlfaktoren && faktoren2.size() == anzahlfaktoren && faktoren3.size() == anzahlfaktoren && faktoren4.size() == anzahlfaktoren && j == faktoren1.size() - 1) {
                cout << i << " " << i + 1 << " " << i + 2 << " " << i + 3;
                return EXIT_SUCCESS;
            }
        }
    }

    return EXIT_SUCCESS;
}
