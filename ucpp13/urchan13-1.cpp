#include <iostream>

void alerts(int n = 1){
    while(n-- > 0){
        std::cout << "\a";
        std::cout << " A";//default引数は一か所をデフォルト引数にすると後ろをすべてデフォルト引数にする必要がある。
    }
}
int main(){
    alerts();
    std::cout << "警報！" << std::endl;

    alerts(5);
    std::cout<< "警報" << std::endl;
}