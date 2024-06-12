/*
在ASCII码65~122的范围内（含边界值），随机产生40个字符，将这些字符输出到文件myfile.txt中，每个字符前加一个空格。
（1）本题的文件采用相对路径方式进行访问。
（2）请将自己的学号姓名输出到文件myfile.txt的第一行。
*/
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    ofstream outFile;
    outFile.open("myfile.txt");
    if (!outFile.is_open()) {
        cout << "没有打开文件！" << endl;
        exit(0);
    }
    for (int i = 0; i < 40; i++)
        outFile << (char)(rand() % 58 + 65) << " ";

    outFile.close();
    return 0;
}