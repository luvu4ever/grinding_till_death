#include<bits/stdc++.h>

using namespace std;

int cnt = 0;
int m;
void printPermutations(vector<int> nums) {
    sort(nums.begin(), nums.end()); // Sort the input vector to get the first permutation
    do {
        int permutation = 0;
        if(nums[0] == 0)
            continue;
        for (int num : nums) {
            permutation = permutation * 10 + num;
        }
        if(permutation % m== 0)
            cnt++;
    } while (next_permutation(nums.begin(), nums.end())); // Generate all permutations using the next_permutation function
}

int main() {
    int num;
    cin >> num >> m; // Read the input integer from the user
    vector<int> nums;
    while (num > 0) { // Split the integer into individual digits
        int digit = num % 10;
        nums.push_back(digit);
        num /= 10;
    }
    reverse(nums.begin(), nums.end()); // Reverse the vector to get the original order of the digits
    printPermutations(nums); // Call the function to print all permutations as integers
    cout<<cnt;
    return 0;
}