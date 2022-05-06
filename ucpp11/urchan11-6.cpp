#include <iostream>
#include <array>
//分割コンパイルについて
int max3(int a, int b, int c);//

int main(){
    std::array<int ,3> math ,eng;/*この場合は math[0],math[1],math[2]
                                            eng[0],eng[1],eng[2]
                                            の2つのリストが出るのか？:*/
    for(std::size_t i = 0; i<math.size();++i ){
        std::cout << "[" << i << "]";
        std::cout << "math: ";
        std::cin >> math[i];
        std::cout << "[" << i << "]";
        std::cout << "eng";
        std::cin >> eng[i];
    }
    int math_highest = max3(math[0],math[1],math[2]);
    int eng_higest = max3(eng[0],eng[1],eng[2]);
    std::cout << "the math highest score is " << math_highest << std::endl;
    std::cout << "the eng highest score is " << eng_higest << std::endl;

}
/* clang++ -Wall -Wextra -std=c++20 -c  urchan11-6.cpp
これで実行すると
/usr/bin/ld: /tmp/urchan11-6-80cae9.o: in function `main':
urchan11-6.cpp:(.text+0x17f): undefined reference to `max3(int, int, int)'
/usr/bin/ld: urchan11-6.cpp:(.text+0x1c8): undefined reference to `max3(int, int, int)'
clang: error: linker command failed with exit code 1 (use -v to see invocation)
                ↑リンカのエラー
となりリンカエラーになる。しかしコンパイルは可能である

clang++ -Wall -Wextra -std=c++20 -c  urchan11-6.cpp
-cを追加するとコンパイルだけ実行されてurchan11-6.oというファイルが生成される
max3関数定義がされたmax3.cppをコンパイルしてmax3.oというファイルを生成する 

clang++ -Wall -Wextra -std=c++20 urchan11-6.o max3.o

*/