#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <string_view>
using namespace std;

bool isNameValid(string name){
    return all_of(name.begin(), name.end(), [](char ch){
        return (isalpha(ch) || isspace(ch));
    });
}

i


