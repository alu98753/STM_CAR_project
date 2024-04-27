#include <iostream>

int Foo(){ //B student

}

int Bar(){ //A student
    std::cout << "Hello bAR" << std::endl;
}

int main(){
    std::cout << "Hello World" << std::endl;

    Bar();

    return 0;

}