class Solution {
public:
bool isSymmetric(int num) {
    string s = to_string(num);
    int len = s.size();
    if (len % 2 != 0) return false; // Must have even number of digits

    int half = len / 2;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < half; ++i) {
        sum1 += s[i] - '0';
    }
    for (int i = half; i < len; ++i) {
        sum2 += s[i] - '0';
    }

    return sum1 == sum2;
}
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
    for (int i = low; i <= high; ++i) {
        if (isSymmetric(i)) count++;
    }
    return count;
    }
};