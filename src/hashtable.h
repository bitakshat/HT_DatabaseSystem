#ifndef _HT_HEADER_
#define _HT_HEADER_

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class Storage {
   public:
    std::string name;
    int age;
    Storage(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class HashTable {
   private:
    // Storage db[1000];

   public:
    // utility functions
    Storage* db[1000];

    int calculateHash(std::string s);
    void insertData(std::string s, int age);
    int removeData(int index);
    void showData();
};

#endif