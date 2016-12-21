#include <bits/stdc++.h>

using namespace std;

int main(){
    int h[26];
    string word;

    // input length of alphabet
    for(int i=0;i<26;i++){
        cin >> h[i]; 
    }

    // input a word
    cin >> word;

    int num = word.length();
    int id[num];
    // calculate ascii and return the order of alphabet.
    for(int i=0;i<word.length();i++){
        int ascii = int(word[i]);
        id[i] = ascii - 97 ;
    }

    //get the index of height
    int hh[num];
    for(int i=0;i<word.length();i++){
        hh[i] = h[id[i]];
    }

    //find char with the maximum height
    for(int i = 1;i < word.length(); ++i)
    {
       if(hh[0] < hh[i])
           hh[0] = hh[i];
    }

    cout << word.length() * hh[0] << endl;

    return 0;
}