#include <iostream>
#include <set>

int main(){
    std::set<int> s{2, 5, 1, 7};//集合 順番は規定されていないデータのかき集め　重複したデータは入れられない
    for(int x :s){
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    s.insert(10);//値の追加
    for(int x :s){
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    s.insert(5);//同じ値の追加,すでに値があるから
    for(int x :s){
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    s.insert(4);//自動的にsortされて2と5の間にある
    for(int x :s){
        std::cout << x << ' ';
    }
    std::cout << std::endl;

}