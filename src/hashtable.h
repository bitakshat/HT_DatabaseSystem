#ifndef _HT_HEADER_
#define _HT_HEADER_

#include <iostream>

class Storage {
   public:
    std::string name;
    int age;
    Storage() {
        name = this->name;
        age = this->age;
    }

    friend std::ostream &operator<<(std::ostream &myout, Storage &str) {
        myout << str.name;
        std::cout << str.age << std::endl;
        return myout;
    }
};

class HashTable {
   private:
    // Storage db[1000];

   public:
    Storage db[1000];
    // utility functions for hashtable
    int calculateHash(std::string s);
    void insertData(std::string s, int age);
    int removeData(int index);
    void showData();
};

#endif