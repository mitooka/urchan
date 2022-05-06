#include <iostream>
#include <cstring>
struct A
{
    int val;
    A(int i):val{i} {}//これなに
};

A operator +(const A& lhs, const A& rhs){//これなに
    return {lhs.val + rhs.val};//これなに
}

template <class T>
T maxof(T a, T b){
    return a>b ? a:b;
}
template<>
const char* maxof<const char*>(const char* a, const char* b){
    return std::strcmp(a,b) > 0 ? a:b;//特殊化
}

int main(){
    std::cout << maxof(3,2) << std::endl;
    std::cout << maxof("def","abc") << std::endl;
}
