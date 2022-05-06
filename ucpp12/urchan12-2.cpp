#include <iostream>
int g_var;

void put_char(char c, int n){
    while(n-- > 0){
        std::cout <<  c;
    }
}

int main(){
    int n;
    std::cout << "段数: ";
    std::cin >> n;

    for(int i = 1; i<=n;++i){
        put_char(' ',n - i);
        put_char('*', i);
        std::cout << std::endl;
    }
}