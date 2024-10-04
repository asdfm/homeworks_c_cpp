#include <iostream>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы

using namespace std; // используем стандартное пространство имен

int main() {
    //int len = 200;
    //char* filename = new char[len];
    //cin >> filename;
    //char* s = new char[len];
    //ifstream fin(filename);
    //char intarray[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    //int intflag = 0;
    //int is_int = 0;
    ////fin.getline(s, len, '\n');
    //while (fin.eof() == 0) {
    //    fin.getline(s, len, '\n');
    //    for (int k = 0; k < strlen(s); k++) {
    //        intflag = 0;
    //        for (int i = 0; i < 10; i++) {
    //            if (intarray[i] == s[k]){
    //                intflag++;
    //            }
    //        }
    //        if (intflag == 0) {
    //            is_int = 0;
    //            break;
    //        }
    //        is_int = 1;
    //    }
    //    if (is_int == 0) {
    //        cout << s << endl;
    //    }
    //    else {
    //        cout << atoi(s)*2 << endl;
    //    }
    //    is_int = 0;
    //}

    //fin.close(); 

    //return 0;

    const char* str = "asd";

    int i = (int)str;
    cout << i;
}