#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> kata;

    kata.push_back("satu");
    kata.push_back("dua");
    kata.push_back("tiga");

    std::cout << "jumlah elemen: " << kata.size() << std::endl;

    for (int i = 0; i < kata.size(); i++)
    {
        std::cout << kata[i] << std::endl;
    }

    return 0;
}