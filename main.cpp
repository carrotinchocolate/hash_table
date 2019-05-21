#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include "hash_table.h"

int main()
{

    std::ifstream in_stream("cano.txt");
    std::ofstream output_file("output6.txt");

    const int hash_size = 1013;
    HashTable HashTable6(hash_size);

    std::string word;
    while (in_stream >> word)
    {
        HashTable6.Add(word);
    }
    for (size_t i = 0; i < HashTable6.GetSize(); i++)
    {
        output_file<< HashTable6.GetData()[i].size() << std::endl;
    }
    return 0;
}
