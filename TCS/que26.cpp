
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxHappyStudents(vector<int>& bags, vector<int>& requirement) {

    sort(bags.begin(), bags.end());
    sort(requirement.begin(), requirement.end());

    int i = 0;  // bag pointer
    int j = 0;  // student pointer
    int happy = 0;

    while (i < bags.size() && j < requirement.size()) {

        if (bags[i] >= requirement[j]) {
            // Give bag to student
            happy++;

            i++;  // bag is used
            j++;  // student is satisfied
        }
        else {
            // Bag is too small
            i++;
        }
    }

    return happy;
}

int main() {

    vector<int> bags = {3, 5, 2, 4};
    vector<int> requirement = {5, 5, 1, 4};

    cout << maxHappyStudents(bags, requirement);

    return 0;
}
