#include <iostream>

using namespace std;

class Foo1 {  
public:  
  virtual void show() { // 虛擬函式  
    cout << "Foo1's show" << endl;  
  }  
};  
  
class Foo2 : public Foo1 {  
public:  
  virtual void show() { // 虛擬函式  
    cout << "Foo2's show" << endl;  
  }  
};  
  
void showFooByPtr(Foo1 *foo) {  
  foo->show();  
}  
  
void showFooByRef(Foo1 &foo) {  
  foo.show();  
}  
  
int main() {  
  Foo1 f1;  
  Foo2 f2;  
  Foo1 *f1Ptr=&f2;  

  // 動態繫結  
  cout << "\t[Info] Show Foo By Ptr:" << endl;  
  showFooByPtr(&f1);  
  showFooByPtr(&f2);  
  showFooByPtr(f1Ptr);  
  cout << endl;  

  cout << "\t[Info] Show Foo By Ref:" << endl;  
  showFooByRef(f1);  
  showFooByRef(f2);  
  cout << endl;

  cout << "\t[Info] Show Foo By Object:" << endl;  
  f1.show();  
  f2.show();  
  cout << endl;  
  
  return 0;  
}
