#include<iostream>
#include <fstream>
int main(){
    long pos;
    std::ofstream outfile;
    outfile.open("test.txt");
    outfile.write("This is an apple", 16);
    pos = outfile.tellp();
    outfile.seekp(pos - 7);
    outfile.write(" sam", 4);
    outfile.close();
    return 0;
}
