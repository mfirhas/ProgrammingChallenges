#include <bits/stdc++.h>

//Thanks for the help and explanations Antonin Lejsek http://stackoverflow.com/users/4959221/anton%C3%ADn-lejsek

long Foo(std::string s)
{
    long len = s.length();
    long long sum = 0;
    const long mod = 1000000007;
    long numSum = (mod + 1) / 2;
    long long numMult = 0;

    for (long i = 0; i < len; ++i)
    {
        if (s[i] == '1')
        {
            numMult += 2;
        }
        else if (s[i] == '0')
        {
            sum += numSum * numMult;
            if (sum > std::numeric_limits<long long>::max() / 4) { sum %= mod; }
        }
        else
        {
            sum = sum * 2 + numSum * numMult;
            if (sum > std::numeric_limits<long long>::max() / 4) { sum %= mod; }

            numSum = (numSum * 2) % mod;
            numMult++;
        }
    }

    return (long)(sum % mod);
}

int main(){
    std::string input;
    std::cin >> input;
    long output = Foo(input);
    std::cout << output << std::endl;


    return 0;
}