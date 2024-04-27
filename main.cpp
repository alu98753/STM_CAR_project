#include <iostream>

int Foo(){ //B student
    std::cout << "Hello FOO" << std::endl;

}

int Bar(){ //A student
    std::cout << "Hello bAR" << std::endl;
}

int Foo2(){ //B student
    std::cout << "Hello FOO2" << std::endl;

}

int main(){
    std::cout << "Hello World" << std::endl;
    
    Bar();
    Foo();
    Foo2();
    return 0;

}