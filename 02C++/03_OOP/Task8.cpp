/*Create A class that can be use to make backtrace for calling functions*/
#include <iostream>
#include <string>
#include <vector>
class BackTrace
{
private:
  std::vector<std::string> calls;
public:
  BackTrace() = default;
  void Enterfunc(std::string str = __builtin_FUNCTION()){
    std::cout<<"Enter func: "<< str << std::endl;
    this->calls.push_back(str);
  };
  void Exitfunc(std::string str = __builtin_FUNCTION()){
    std::cout<<"Exit func: "<< str << std::endl;
  };
  void PRINT_BT(){
    for (auto &&i : this->calls)
    {
      std::cout<< i << std::endl; 
    }
  };
  ~BackTrace() = default;
};
BackTrace BT;

void func2();
void func3();
void func1(){
  BT.Enterfunc();
  func2();
  BT.Exitfunc();
}
void func2(){  
  BT.Enterfunc();
  func3();
  BT.Exitfunc();
}
void func3(){  
  BT.Enterfunc();
  BT.PRINT_BT();
  BT.Exitfunc();
};

int main(int argc, char const *argv[])
{
  BT.Enterfunc();
  func1();
  BT.Exitfunc();
  return 0;
}

