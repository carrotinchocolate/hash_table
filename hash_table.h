#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class HashTable
{
public:

    HashTable(const int size);
    void Add(const std::string& new_value);
    void Remove(const std::string& value);
    size_t GetSize();
    int GetHash(const std::string& value) const;
    bool Has(const std::string& value) const;
    const std::vector<std::vector<std::string> >& GetData() const;
private:
    std::vector<std::vector<std::string> > data_;
};

int GetHash1(const std::string& value);
int GetHash2(const std::string& value);
int GetHash3(const std::string& value);
int GetHash4(const std::string& value);
int GetHash5(const std::string& value);
int GetHash6(const std::string& value);
