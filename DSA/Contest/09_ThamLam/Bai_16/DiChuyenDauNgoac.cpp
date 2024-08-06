#include <iostream>
#include <string>
#include <algorithm>

int minMovesToValidParentheses(const std::string& S) {
    int n = S.size();
    int balance = 0;
    int minBalance = 0;
    
    for (char c : S) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        minBalance = std::min(minBalance, balance);
    }
    
    return -minBalance;
}

int main() {
    std::string S;
    std::cin >> S;
    
    std::cout << minMovesToValidParentheses(S) << std::endl;
    
    return 0;
}
