#include <iostream>
#include <cstring>

int main(int argc, char** argv){
    for(int i = 0; i<argc; ++i){
        std::cout << "argv["<< i<< "] = " << argv[i] << std::endl;
    
    }

    if(std::strcpy(argv[0],"foobar") == 0){
        std::cout << "foobar command!" << std::endl;
    }
    else if(std::strcmp(argv[0], "hogera") == 0){
        std::cout << "this is a pen" << std::endl;
}
}