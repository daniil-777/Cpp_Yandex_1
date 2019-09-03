#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Readall(const string& path){
    ifstream input(path);
    if (input){
        string line;
        const string path_output = "output.txt";
        while (getline(input, line)) {
            cout << line << endl;
            ofstream output(path_output, ios::app);
            output << line << endl;
        }
    } else {
        cout << "File not found" << endl;
    }
}


int main(){

    const string path = "input.txt";
    Readall(path);
    return 0;
}