#include <bits/stdc++.h>

long foo(std::string s)
{
    long len = s.length();
    std::vector<long> nums(len + 1);
    long long sum = 0;
    nums[0] = 1;
    const long mod = 1000000007;

    for (long i = 0; i < len; ++i)
    {
        if (s[i] == '1')
        {
            for (long j = i + 1; j > 0; --j)
            {
                nums[j] = nums[j - 1];
            }
            nums[0] = 0;
        }
        else if (s[i] == '0')
        {
            for (long j = 1; j <= i; ++j)
            {
                sum += (long long)j * nums[j];
                if (sum > std::numeric_limits<long long>::max() / 2) { sum %= mod; }
            }
        }
        else
        {
            sum *= 2;
            if (sum > std::numeric_limits<long long>::max() / 2) { sum %= mod; }
            for (long j = i + 1; j > 0; --j)
            {
                sum += (long long)j * nums[j];
                if (sum > std::numeric_limits<long long>::max() / 2) { sum %= mod; }
                long add = nums[j] + nums[j - 1];
                if (add >= mod) { add -= mod; }
                nums[j] = add;
            }
        }
    }

    return (long)(sum % mod);
}

int main(){
    std::string input;
    std::cin >> input;
    long output = foo(input);
    std::cout << output << std::endl;


    return 0;
}