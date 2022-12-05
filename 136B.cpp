
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
 
std::string int_to_ternary(const int& number) {
    std::string result = "";
    int x = number;
    while (x > 0) {
        result.append(std::to_string(x % 3));
        x /= 3;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
 
 
int ternary_to_int(const std::string& s)
{
    int result = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        result += int(s[i] - '0') * std::pow(3, s.length() - i - 1);
    }
    return result;
}
 
 
// std::string tor(const std::string& a, const std::string& b) 
// {
//     std::string result = "";
//     for (int i = a.length() - 1; i >= 0; i--) {
//         int tmp = ((a[i] - '0') + (b[i] - '0')) % 3;
//         result.append(std::to_string(tmp));
//     }
//     std::reverse(result.begin(), result.end());
//     return result;
// }
 
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    int a(0), c(0), result(0);
    std::cin >> a >> c;
    bool answer = false;
    std::string trn_a = int_to_ternary(a), trn_c = int_to_ternary(c), trn_b = "";
    while (trn_a.length() != trn_c.length()) {
        if (trn_a.length() > trn_c.length()) trn_c.insert(0, 1, '0');
        else trn_a.insert(0, 1, '0');
    }
    for (int i = trn_a.length() - 1; i >= 0; i--) {
        int tmp = (trn_c[i] - '0') - (trn_a[i] - '0');
        switch (tmp)
        {
        case 1:
            trn_b.append("1");
            break;
        case 2:
            trn_b.append("2");
            break;
        case 0:
            trn_b.append("0");
            break;
        case -1:
            trn_b.append("2");
            break;
        case -2:
            trn_b.append("1");
        default:
            break;
        }
    }
    std::reverse(trn_b.begin(), trn_b.end());
    result = ternary_to_int(trn_b);
    std::cout << result << std::endl;
}