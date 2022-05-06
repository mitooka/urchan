#include <iostream>
int main(){
    using namespace std;
    int month;
    cout << "何月ですか？:";
    cin >> month;

    if(month == 12 || 1<= month && month<= 2){
        cout << "冬です。" << endl;
    }
    else if(3<= month && month<=5){
        cout << "春です。" << endl;
    }
    else if(6<= month && month <=8){
        cout << "夏です。"<< endl;
    }
    else if(9 <= month && month<= 11){
        cout << "秋です。"<< endl;
    }
    else{
        cout << "1月から12月までです。" << endl;
    }
    
}