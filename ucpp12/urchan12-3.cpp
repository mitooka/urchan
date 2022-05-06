#include <iostream>

int g_var;

void put_chars(char c, int n){
    while (n-- > 0)
    {
        std::cout << c;
    }
    
}
void put_square(char c, int n){
    for(int i =0; i<n;++i){
        put_chars(c,n);
        std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cout << "約数: ";
    std::cin >> n;

    put_square('@',n);
}