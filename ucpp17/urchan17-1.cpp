#include <iostream>
//ポインタについて
int main(){
	int n = 135;
	std::cout <<"n    :"<< n << std::endl;
	std::cout << "&n  :" << &n << std::endl;
	int* ptr = &n;//nのアドレスで初期化される
	/* ポインタ指す先の変数に型を合わせる この場合、4バイトで整数型*/
	std::cout << "ptr : " << ptr << std::endl;
	std::cout << "*ptr: " << *ptr << std::endl;//変数nそのものを指す
	// * = 間接演算子(indirection) 
	//参照外し (derefarence)
}
