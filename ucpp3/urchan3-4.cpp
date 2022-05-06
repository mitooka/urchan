#include <iostream>//printデバック
int main(){
    using namespace std;
    int n;
    cout << "整数値";
    cin >> n;

    cout << "n ==" << n << endl;

    if(n == 0){
        cout << "その値は0です。" << endl;
    }
    else if(-9 <= n && n<=9){

        cout << "-9 <= n == " << (-9 <= n) << endl;//
        cout << "n <= 9 ==" << (n <= 9) << endl;
        cout << "その値は1桁です。"<< endl; 
    }
    else {
        cout << "その値は2桁です。" << endl;
    }
}