#include <iostream>
#include <array>
#include <algorithm>

struct Value
{
    int tag;
    int value;
};

int main(){
    std::array<Value, 3> arr{{
        {0,3},{1,8},{2,1}
        }};//tag = 0,1,2が入っている value=3,8,1 が入っている
    int cnt = std::count_if(arr.begin(), arr.end(),//条件を満たしている要素の数を数える。
    [](const Value& v){return v.value == 8;});//ここの意味がわかない
    std::cout << cnt << std::endl;
}