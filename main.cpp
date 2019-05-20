#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include "hash_table.h"

int main()
{

    std::ifstream in_stream("cano.txt");
    std::ofstream output_file("output1.txt");

    const int hash_size = 1013;
    HashTable HashTable1(hash_size);

    std::string word;
    while (in_stream >> word)
    {
        HashTable1.Add(word);
    }
    for (size_t i = 0; i < HashTable1.GetSize(); i++)
    {
        output_file<< HashTable1.GetData()[i].size() << std::endl;
    }
    return 0;
}
