#include "wordcount.h"
#include <iostream>
#include <sstream>

#define MAX_WORDS 30

#include <string>
using namespace std;

bool in_array(string arr[], int size, string key);
unsigned int total_count(string str);

void wordcount(std::string sentences) {
    // store number of total words
    unsigned int total_words = 0;

    // TODO: calculate word counts
    total_words = total_count(sentences);

    std::cout << "Total number of words: " << total_words << std::endl;

    // TODO: print number of appearances for each word
    stringstream ss; ss.str(sentences);
    string word; 
    int i = 0; // iterator
    string keys[MAX_WORDS];
    while (ss >> word) {
        if (!in_array(keys, i, word)) {
            keys[i] = word;
            i++;
        }
    }

    string key; string unit;

    for (int k=0; k<i; k++) {
        int appear = 0;
        key = keys[k];
        stringstream sk(sentences); string temp;
        while (sk >> temp) {
            if (key == temp) {
                appear++;
            }
        }
        if (appear == 1) {
            unit = "once";
        } else if (appear == 2) {
            unit = "twice";
        } else {
            unit = to_string(appear) + " times";
        }
        cout << "Word \"" << key << "\" appears " << unit << "." << endl;
    }
}

bool in_array(string arr[], int size, string key) {
    int count = 0;
    int i;
    for (i=0; i<size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    if (count > 0) {
        return true;
    } else {
        return false;
    }
}

unsigned int total_count(string str) {
    stringstream ss;
    ss.str(str);
    string word;
    int count = 0;

    while(ss >> word) {
        count++;
    }
    return count;
}