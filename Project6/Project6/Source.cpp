#include<iostream>
#include <stdio.h>
#include <sys/stat.h>
#include <filesystem>
#include <regex>
#include<fstream>
namespace fs = std::filesystem;
using namespace std;
int main()
{  
    string line;
    ifstream in;
  
    int n=1;
    int array[10000];
    in.open("a.txt");
    
    if (in.is_open())
    {
        error_code ec;
        while (getline(in, line))
        {
          //  cout << line << endl;
          
           
              
               
              
                if (!ec) {
                  //  std::cout << "File size = " << fs::file_size(line) << '\n';
                    n++;
                    std::uintmax_t size = fs::file_size(line, ec);
                    array[n-2] = size;
                   //cout << line<<endl;
                }
            }
        }

    
    int o1=0; int o2 = 0; int o3 = 0; int o4 = 0; int o5 = 0; int o6 = 0; int o7 = 0; int o8 = 0; int o9 = 0; int o10 = 0; int o11 = 0;
    for (int i = 0; i < n - 2; i++) {
        if (array[i] <= 1000) {
            o1++;
    }
        if (array[i] >= 1000 && array[i]<=5000) {
            o2++;
        }
        if (array[i] >= 5000 && array[i] <= 10000) {
            o3++;
        }
        if (array[i] >= 10000 && array[i] <= 500000) {
            o4++;
        }
        if (array[i] >= 50000 && array[i] <= 1000000) {
            o5++;
        }
        if (array[i] >= 100000 && array[i] <= 5000000) {
            o6++;
        }
        if (array[i] >= 500000 && array[i] <= 10000000) {
            o7++;
        }
        if (array[i] >= 1000000 && array[i] <= 50000000) {
            o8++;
        }
        if (array[i] >= 5000000 && array[i] <= 100000000) {
            o9++;
        }
        if (array[i] >= 10000000 && array[i] <= 50000000) {
            o10++;
        }
    }
    cout <<"<1000: " << o1<<endl;
    cout << "1000-5000: " << o2 << endl;
    cout << "5000-10000: " << o3 << endl;
    cout << "10000-500000: " << o4 << endl;
    cout << "50000-1000000: " << o5 << endl;
    cout << "100000-5000000: " << o6 << endl;
    cout << "100000-5000000*: " << o7 << endl;
    cout << "100000-5000000**: " << o8 << endl;
    cout << "100000-5000000***: " << o9 << endl;
    cout << "100000-5000000****: " << o10 << endl;
    in.close();
   // string v = R"(C:\Users\bilen\source\repos\WinFormsApp1\WinFormsApp1\obj\Debug\net6.0-windows\refint\WinFormsApp1.dll)";
   //std::cout << "File size = " << fs::file_size(v) << '\n';

    return 0;
}