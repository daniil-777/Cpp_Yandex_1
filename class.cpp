#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;


class FunctionPart {
public:
  FunctionPart(char new_operation, double new_value){
     operation = new_operation;
     value = new_value;
  }
  double Apply(double source_value) const {
    if (operation == '+'){
        return source_value + value;
    }else{
        return source_value - value;
      }
  }
  double Multiplication(double source_value) const {
      return source_value * value;
  }
  double Devision(double source_value) const {
      return source_value / value;
  }

  void Invert() {
      if (operation == '+') {
          operation ='-';
      } else {
         operation = '+';
      }
  }

private:
  char operation;
  double value;
};


class Function {
public:
  void Add(char operation, double value){
      parts.push_back({operation, value});
  }
  double Apply (double value) const{
      for (const FunctionPart& part : parts){
          value = part.Apply(value);
      }
      return value;

  }

  double Multiplication(double value) const{
      for(const FunctionPart& part : parts){
          value = part.Multiplication(value);
      }
      return value;

      
  }
  void Invert(){
      for (FunctionPart& part : parts) {
          part.Invert();
      }
      reverse(begin(parts), end(parts));
  }
private:
  vector<FunctionPart> parts;
};

struct Numbers{
    double a;
    double b;
};

Function Make_function_min(const Numbers& numbers){
    Function function;
    function.Add('-', numbers.a);
    // function.Add('+', numbers.b);
    return function;
}

Function Make_function_plus(const Numbers& numbers){
    Function function;
    function.Add('+', numbers.a);
    // function.Add('+', numbers.b);
    return function;
}




double sum(const Numbers& num) { 
    Function function = Make_function_plus(num);
    return function.Apply(num.b);

}

int main(){
    Numbers num = {1, 4};
    cout << sum (num) << endl;
    return 0;
}



