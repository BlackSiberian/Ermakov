#include <vector>
#include <iostream>
#include <conio.h>
#include <algorithm>

void print(std::vector<int> &set) {
    for (int i = 0; i < set.size() - 1; i++)
        std::cout << set[i] << " + ";
    std::cout << set[set.size() - 1] << std::endl;
}

int sum(std::vector<int> &set) {
    int sum = 0;
    for (int i: set)
        sum += i;
    return sum;
}

void search(std::vector<int> set, std::vector<int> subset, int n, int k, int s, int m) {
    if (k == n + 1) {
        if (sum(subset) == s && subset.size() == m) print(subset);
    } else {
        subset.push_back(set[k]);
        search(set, subset, n, k + 1, s, m);
        subset.pop_back();
        search(set, subset, n, k + 1, s, m);
    }
}

int main() {
    int s, n, x;
    std::vector<int> a;
    
    std::cout << "Enter sum of cells: " << std::endl;
    std::cin >> s;
    std::cout << "Enter number of cells: " << std::endl;
    std::cin >> n;
    int m = n;
    std::cout << "Enter banned: " << std::endl;
    while ((x = _getch()) != 13)
        if (x != 32) a.push_back(x - 48);

    std::vector<int> set = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> subset;
    for (int &i: a)
        set.erase(find(set.begin(), set.end(), i));

    search(set, subset, int(set.size() - 1), 0, s, m);
}