#pragma GCC optimize('Ofast,unroll-loops')
bool canJump(int* nums, size_t numsSize) {
    int goal = (int)numsSize - 1;
    for (int i = (int)numsSize - 1; i >= 0; i--) {
        if ((i + nums[i]) >= goal) {
            goal = i;
        }
    }
    return goal == 0;
}
