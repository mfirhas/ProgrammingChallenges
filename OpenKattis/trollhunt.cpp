#include <bits/stdc++.h>

using namespace std;

int main(){
    int allKnights = 0;
    int knight_group = 0;
    int group = 0;
    double day = 0;

    int bridge = 0;
    cin >> bridge >> allKnights >> knight_group;
    bridge -= 1;
    if (knight_group == 0)
    {
        return 0;
    }
    group = allKnights / knight_group;
    day = bridge / group;
    if (bridge % group > 0)
    {
      day += 1;
    }
    cout << (int) ceil(day) << endl;

	return 0;
}