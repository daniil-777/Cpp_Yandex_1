#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void Readall(const string& path){
   ifstream input(path);
    if (input){
        string line;
        while (getline(input, line)) {
            cout << line << endl;
        }
    } else {
        cout << "File not found" << endl;
    }
}




int main(){
    const string path  = "input.txt";
    // ofstream output(path, ios::app);
    // output << "hello" << endl;

    Readall(path);
    return 0;
}

// int main(){
//     ifstream input("hello.txt");
//     string year;
//     string month;
//     string day;
//     if (input){
//         getline(input, year, '-');
//         getline(input, month, '-');
//         getline(input, day, '-');
//     cout << year << month << day << endl;
//     } else {
//         cout << "error" << endl;
//     }
//     return 0;
// }