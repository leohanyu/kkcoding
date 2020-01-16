#include<iostream> //引入输入输出流的工具箱

using namespace std; //使用标准命名空间
int a, b, c;  //定义整数类型变量a,b,c 
int main() { //定义主函数
    cin >> a >> b >> c; //输入a,b,c数值
    cout << a * 0.2 + b * 0.3 + c * 0.5; //输出a,b,c公式 
    return 0; //主函数返回0
}
