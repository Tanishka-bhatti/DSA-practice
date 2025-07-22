#include<iostream>
#include<math.h>
using namespace std;

int main(){
// this program read an integer to binary
    int n;
    cin >> n;

    int ans = 0;
    int i = 1;
    while (n!=0){
        int bit = n & 1; // get the last bit
       ans= (bit * pow(10,i))+ans;
       n = n>>1;
         i++;

    }
    cout << "answer is" << ans << endl;
    return 0;
}
