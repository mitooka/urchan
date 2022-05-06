#include <iostream>
static int gx;//内部変数

int* get_addr(){
    return &gx;
}
int get_addr2(int** p){
    //*p = &gx;
    *p = &gx;
    return 0;//0 == success
}

//int x =
int main(){
    std::cout << get_addr() << std::endl;
    int* p = nullptr;
    int status = get_addr2(&p);
    if(status != 0){
        std::cout << "failed to get address" << std::endl;
        return 1;
    }
    std::cout << p << std::endl;
}