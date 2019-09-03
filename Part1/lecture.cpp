#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;



struct Specialisation{
    string value;
    explicit Specialisation(string new_value) {
        value = new_value;
    }
};


struct Course{
    string value;
    explicit Course(string new_value){
        value = new_value;
    }
};

struct Week{
    int value;
    explicit Week(int new_value){
        value = new_value;
    }
};


struct LectureTitle {
  string specialization;
  string course;
  int week;
  LectureTitle(Specialisation new_spec, Course new_course, Week new_week){
      specialization = new_spec.value;
      course = new_course.value;
      week = new_week.value;
  }
};

void Print_Date(const LectureTitle &title){
    cout << title.specialization << "->" << title.course << "->" << title.week << '\n';
}


int main(){
    LectureTitle lec = {Specialisation{"Computer sciecne"}, Course{"Math"}, Week{3}};
    Print_Date(lec);
    return 0;
}
