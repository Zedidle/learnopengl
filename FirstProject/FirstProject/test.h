#pragma once
#include <fstream>
#include <iostream>
using namespace std;
 
int RunTest() {

    char data[100];
  
    // 以读模式打开文件
    ifstream infile; 
    infile.open("resources/textures/test.png"); 

    // 关闭打开的文件
    infile.close();
 
    return 0;
}
