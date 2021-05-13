
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

#include "./hashtable.h"

int HashTable::calculateHash(std::string s) {
    std::string character(s);
    std::vector<int> ASCII_VALUE;

    for (int x = 0; x < s.length(); x++) {
        ASCII_VALUE.push_back((int)character[x]);
    }

    // calculates average
    int sum = 0;
    float avg = 0.0f;
    for (int y = 0; y < ASCII_VALUE.size(); y++) {
        sum += ASCII_VALUE[y];
    }
    avg = floor(sum / ASCII_VALUE.size());

    return avg;
}

void HashTable::insertData(std::string s, int age) {
    Storage st;
    st.name = s;
    st.age = age;
    int index = calculateHash(s);
    db[index] = st;
}
