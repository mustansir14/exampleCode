#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;


int main()
{
    ifstream is("input_file.txt");
    char char_len;
    is >> char_len;
    int len = (int)char_len - 48;
    if(len > 250)
    {
        cout << "Invalid Length";
        return 0;
    }
    char code1[len], code2[len];
    for(auto i=0;i<len;i++)
    {
        is >> code1[i];
    }
    is >> char_len;
    for(auto i=0;i<len;i++)
    {
        is >> code2[i];
    }
    cout << "Code Digit\tCode Digit Copy" << endl;
    for(auto i = 0;i<len;i++)
    {
        cout << code1[i] << "\t\t\t" << code2[i] << endl;
    }
    if(strcmp(code1, code2) == 0)
    {
        cout << "Code Transmitted OK." << endl;
    }
    else
    {
        cout << "Code Not Transmitted OK." << endl;
    }
    


}