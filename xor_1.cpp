#include <iostream>
int main () {
    int nums[] = {1, 2, 3, 1, 2, 3, 1, 1, 0, 8, 0};
    int len = sizeof(nums) / sizeof(nums[0]);
    
    int acc = 0;
    for (int idx = 0; idx < len; idx ++)
        acc ^= nums[idx];
        
    std::cout << "unique element:" << acc << std::endl;
    return 0;
}
