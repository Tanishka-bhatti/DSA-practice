//Remove duplcaites from sorted array
#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int i=0;
    for (int j=1; j<nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];                                                                                                                                                                                                                                                          
        }
    }
return i+1;
}
int main() {
    vector<int> nums = {1,2,3,4,4,4,4,4,5,5,5,5,8,8,9};
    int k = removeDuplicates(nums);
    cout << "k = " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}