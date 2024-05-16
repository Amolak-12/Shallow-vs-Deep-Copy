#include <iostream>
using namespace std;

//Creating class 
class abc 
{
  public:
    int x;
    int *y;

    abc(int x, int y) 
    {
      this -> x = x;
      this -> y = new int(y);
    }

    // // Default Copy Conductor(shallow copy)
    // abc(const abc &obj){
    //   x = obj.x;
    //   y = obj.y;
    // }
    //Smart Copy Conductor(deep copy)
    abc(const abc &obj){
      x = obj.x;
      y = new int(*obj.y);
    }


    void print() {
      cout << "Value of 'x' is : " << x << endl;
      cout << "Value of 'y' is : " << y << endl;
      cout << "Value at the address given in 'y' is : " << *y << endl;
    }
};
int main() {

 //Creating objects (a & b)
  abc a(10,20);
  abc b(a); //Object following ‘a’
  
 // Calling print function of ‘a’ and ‘b’
  a.print();
  b.print();
  
 //Changing value of ‘y’ pointer of object ‘a’
  *a.y = 200;
  
 //Calling again print function of both objects
  a.print();
  b.print();

  return 0;
}
