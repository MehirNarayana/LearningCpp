#include <iostream>

using namespace std;
class MyClass{
    public:
        int var1;
        int var2;
        int var3;




    string helloMethod(){
        return "hello world";
    }    
};
int main() {
    //comments 
  cout << "Hello World!\n";
  cout << "bye world World!\n";

  int myNum = 15;  // myNum is 15
  myNum = 10;  // Now myNum is 10
  cout << myNum+"\n";  // Outputs 10
  string greeting = "hello"+string("bye\n");
  cout<<greeting;
  int size = greeting.size();
  cout<<"size: " + size; 

  string myString = "Hello";
  cout << myString[0];

  int cars[4] = {0};
  cout<<cars[3];
  //memory adress examople
  string food = "Pizza";  // A food variable of type string
  //ptr varibale contains the emmory adress of food
  //&food is the memory adress of food
  string* ptr = &food;
  // Dereference: Output the value of food with the pointer (Pizza)
  cout << *ptr << "\n";
  MyClass obj1;
  obj1.var1 = 1;
  obj1.var2 = 2;
  obj1.var3 = 3;
  cout<<obj1.var1;
  return 0;
}


