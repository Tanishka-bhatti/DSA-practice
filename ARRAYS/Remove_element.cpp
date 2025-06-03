//remove element from a vector
#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int k = 0; // Count of elements not equal to val
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i]; // Place the element at the next position
        }
    }
    return k; // New length of the array
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int newLength = removeElement(nums, val);
    
    cout << "New length of the array: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}