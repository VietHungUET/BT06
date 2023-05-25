#include <iostream>
#include <vector>
#include <string>
using namespace std;
void generateCombinations(int N, int K, string currentCombination, char startChar) {
    if (K == 0) {
        cout<<currentCombination<<endl;
        return;
    }

    for (int i = startChar; i < N; i++) {
        char charToAdd = 'a' + i;
        // Gọi đệ quy để tạo các phần tử kế tiếp trong tổ hợp
        generateCombinations(N, K - 1, currentCombination+ charToAdd, i + 1);
   }
}

void generateAllCombinations(int N, int K) {
    string currentCombination="";
    char startChar = 0;
    generateCombinations(N, K, currentCombination, startChar);
}

int main() {
    int N, K;
    cout << "Nhap so N: ";
    cin >> N;
    cout << "Nhap so K: ";
    cin >> K;
    generateAllCombinations(N, K);

    return 0;
}
