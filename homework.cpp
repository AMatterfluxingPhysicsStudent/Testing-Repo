#include <iostream>
#include <cmath>
using namespace std;

string showMenu (string);
void addition();
void subtraction();
void multiplication();
void division();
void raisingToPower();
void squareRoot();
void absoluteValue();
void floor();
void ceiling();
void factorial();

int main() { 
  bool on = true;
  while(on == true) {
    string choice;
    choice = showMenu(choice);

    if (choice == "+") {
      addition();
    }
    else if (choice == "-") {
      subtraction();
    }
    else if (choice == "*") {
      multiplication ();
    }
    else if (choice == "/"){
      division();
    }
    else if (choice == "^"){
      raisingToPower();
    }
    //Square Root Eg. 9^2 = 81
    else if (choice == "√" || choice == "sqrt()"){
      squareRoot();
    }
    else if (choice == "ABS" || choice == "Abs" || choice == "abs" || choice == "Absolute Value" || choice == "absolute value" ||choice == "Absolute value" || choice == "absolute Value"){
      absoluteValue();
    }
    else if (choice == "Floor" || choice == "floor" || choice == "Round down" || choice == "round down" || choice == "rd") {
      floor();
    }
    else if (choice == "Ceiling" || choice == "ceiling" || choice == "Round up" || choice == "round up" || choice == "ru") {
      ceiling();
    }
    else if (choice == "Factorial" || choice == "factorial" || choice == "n!" || choice == "!") {
      factorial();
    }
    else if (choice == "Turn off" || choice == "turn off") {
      on = false;
    }
  }
  return 0;
}

string showMenu(string choiceLocal) {
    cout << "Enter choice of operations using following options. Pick " << endl;
    cout << "+" << endl;
    cout << "-"  << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "^" << endl;
    cout << "sqrt()" <<endl;
    cout << "ABS i.e. Absolute Value, shortcut: abs" <<endl;
    cout << "Floor i.e. round down, shortcut: rd" << endl;
    cout << "Ceiling i.e. round up, shortcut: ru" <<endl;
    cout << "Factorial i.e. n!, shortcut: !" <<endl;
    cout << "Turn off (Terminate Loop)"  << endl << endl;
    cin >> choiceLocal;
    return choiceLocal;
}

void addition (){
    double num1;
    double num2;
    double result;
    cout << endl << "Enter first number." << endl;
    cin >> num1;
    cout << "Enter second number." << endl;
    cin >> num2;  

    result = num1 + num2;
      
    cout << "Result is " << result <<endl<< endl;
}

void subtraction (){
  long double num1; //declaring integer variable for adding
  long double num2;
  long double result; //for displaying result
  
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  cout << "Enter second number." << endl;
  cin >> num2;

  result = num1 - num2;
      
  cout << "Result is " << result <<endl << endl;  
}

void multiplication(){
    long double num1; //declaring integer variable for adding
    long double num2;
    long double result; //for displaying result

    long i;

    cout << endl << "Enter first number." << endl;
    cin >> num1;
    
    cout << "Enter second number." << endl;
    cin >> num2;

    result = 0;
    for(i=1;i<=num1;i++) {
      result = result + num2; //result will = num1*num2
    }
      
    cout << "Result is " << result <<endl << endl;
}

void division(){
  double num1; //declaring integer variable for adding
  double num2;
  double result; //for displaying result
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  cout << "Enter denominator." << endl;
  cin >> num2;

  result = num1/num2;
      
  cout << "Result is " << result <<endl << endl;
}

void raisingToPower(){
  double num1; //declaring integer variable for adding
  double num2;
  double result; //for displaying result

  long i; //long because this is a factor of multiplication, it may hold large numbers

  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  double holder; 

  cout<< "Enter exponent."<<endl;
  cin>>num2;
  result = 1; 
  for(i=1;i<=num2;i++) {
    result = result * num1;
  }
      /*
      well
      I need the base to multiply itself by the exponent stated amount of times
      so
      i=1;i<=num2;i++
      */
  cout<< "Result is " << result << endl <<endl;
}


void squareRoot(){
  double num1; //declaring integer variable for adding
  double result; //for displaying result

  cout << endl << "Enter number to square root." << endl;
  cin >> num1;
    
  result = sqrt(num1);
      
  cout << "Result is " << result <<endl<< endl;
}

void absoluteValue(){
  
  double num1; //declaring integer variable for adding
  double result; 
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  if(num1 < 0){
    result = num1*-1;
  }
  if(num1 >= 0) {
    result = num1;
  }

  cout<<"Result is " <<result<<endl;
}

void floor(){
  double num1; //declaring integer variable for adding
  double num2;
  double result; //for displaying result

  long i; //long because this is a factor of multiplication, it may hold large numbers
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  int stuff;
  stuff = num1;
  result = stuff;

  cout<<"Result is "<<result<<endl;  
}

void ceiling(){
  double num1; //declaring integer variable for adding
  double num2;
  double result; //for displaying result

  long i; //long because this is a factor of multiplication, it may hold large numbers
    
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  int stuff;
  stuff = num1 + 1;
  result = stuff;

  cout<<"Result is "<<result<<endl;  
}

void factorial(){
  double num1; //declaring integer variable for adding
  double num2;
  double result; //for displaying result

  long i; //long because this is a factor of multiplication, it may hold large numbers
    
  cout << endl << "Enter first number." << endl;
  cin >> num1;
    
  long decrements;
  long holder = 1;
  decrements = num1;
  for(i=1;i<=num1;i++){
    holder = holder * decrements;
    decrements--;
  }
  cout<<"For " << num1 <<" the Factorial result is "<<holder<<endl<<endl;
  
}


/*
1. Infinite loop when wrong input
2. passing values and making the int main do all the printing
3. prototyping
*/

