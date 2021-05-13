
#include "hashtable.h"

int main(void) {
    HashTable ht;
    std::string str = "akshat";
    int index = ht.calculateHash(str);

    ht.insertData(str, 19);
    ht.insertData("hello", 20);
    std::cout << ht.db[106] << std::endl;
    return 0;
}