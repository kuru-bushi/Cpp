#include <iostream>
#include <fstream>

int main()
{
    std::cout << "save file" << std::endl;
    std::ofstream fin("/home/ikeda/Cpp/src/saveFile/input.txt");

    if (!fin)
    {
        std::cout << "fileが開けませんでした" << std::endl;
    } else  {
    std::string i = "i";
    std::string j = "j";

    fin << i << std::endl;
    fin << "input file end" << std::endl;
    fin.close();
    }
}