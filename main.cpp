#include <iostream>

int Foo(){ //B student
    std::cout << "Hello FOO" << std::endl;

}

int Bar(){ //A student
    std::cout << "Hello bAR" << std::endl;
}

int Bar(){//A student

}

int main(){
    std::cout << "Hello World" << std::endl;
    
    Bar();
    Foo();
    return 0;

}