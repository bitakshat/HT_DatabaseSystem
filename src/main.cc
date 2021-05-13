
#include "hashtable.h"

int main(void) {
    HashTable ht;
    ht.insertData("akshat", 19);
    int index = ht.calculateHash("akshat");

    ht.showData();
    return 0;
}