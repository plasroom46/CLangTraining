#include <stdint.h>
#include <stdlib.h>

int main()
{
    return 0;
}

// 136
int singleNumber(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}

// 169
int majorityElement(int *nums, int numsSize)
{
    int ans = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++)
    {
        if (ans == nums[i])
        {
            ++count;
        }
        else if (count > 0)
        {
            --count;
        }
        else
        {

            ans = nums[i];
            count = 1;
        }
    }
    return ans;
}
// 190
uint32_t reverseBits(uint32_t n)
{
    uint32_t ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ans = (ans << 1) | (n & 1);
        n >>= 1;
    }
    return ans;
}
// 191
int hammingWeight(uint32_t n)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ans += (n & 1);
        n >>= 1;
    }
    return ans;
}