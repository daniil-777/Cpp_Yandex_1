#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Day{
    int value;
    explicit  Day(int new_value){
        value = new_value;
    }
};

struct Month{
    int value;
};

struct Year{
    int value;
};



struct Date{
    int day;
    int month;
    int year;
    Date(Day new_day, Month new_month, Year new_year){
        day = new_day.value;
        month = new_month.value;
        year = new_year.value;
    }

};

void PrintDate(const Date& date){
    cout << date.day << "." << date.month << "." << date.year << "\n";
}


int main() {
    Date date = {Day{10}, Month{11}, Year{12}};
    PrintDate(date);
    int n;
    int a = 5;
    int b;
    do {
        cout << "Guess the number: ";
        cin >> b;

    
    } while(a!=b); 
    cout << "You ar genious!";
    cin >> n;
    int sum;
    if(n>= 1){
        while(n > 0){
            sum +=  n;
            --n;
        }
    }
    cout << sum;
    vector<int>nums = {1, 5, 4, 5, 6 , 5, 5, 5, 4};
    sort(begin(nums), end(nums));
    for (auto x: nums) {
        cout << x << " ";
    }
    

    int x = 4;
    int y = 5;
    string s = "abcdefg";
    for(char c:s) {
        cout << c << ",";
    }
    if(x == y){
        cout << "equal";
    } else{
        cout << "not equal";
    }
    vector<Person> staff;
    staff.push_back({"Ivan", "Ivanov", 25});
    staff.push_back({"Daniil", "Emtsev", 45});

    cout << staff[0].name << "\n";
    cout << "Please enter your name: ";

    
    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;
    cout << "two is " << name_to_value["two"];

    return 0;
}
