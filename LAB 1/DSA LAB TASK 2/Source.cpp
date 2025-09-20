#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    float mt1, mt2, final, avg;

    ifstream fin("input.dat");  // open input file
    ofstream fout("output.dat"); // open output file

    if (!fin) {
        cout << "Error: input.dat not found!" << endl;
        return 1;
    }

    // Read data safely
    while (fin >> name >> mt1 >> mt2 >> final) {
        avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
        fout << name << '\t' << avg << endl;
    }

    fin.close();
    fout.close();

    return 0;
}