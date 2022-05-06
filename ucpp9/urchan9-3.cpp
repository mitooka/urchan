#include <iostream>
#include <string>

struct Node;
struct Token{
    enum Kind{//他の列挙子とかぶらないようにstructに含める
        kId,
        kIf,
        kFor,
        kWhile,
    }kind;

    union{//特殊な構造体
        struct{
            const char* loc;
            unsigned int len;
        }id;
        Node* cond;
    }value;
};
const char* src = "foo bar hoge";
int main(){
    Token t{Token::kId, {}};//Token::kIdで書ける Tokenの中のkIdだなと一発でわかる
    t.value.id.loc = &src[4];//t.の意味はなにか srcとは
    t.value.id.len = 3;
    std::cout << t.kind << std::endl;
    std::cout << std::string{t.value.id.loc, t.value.id.len }<< std::endl;
}