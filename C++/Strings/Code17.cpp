//Permutation in String
//Time Complexity -> O(n^2)
//Space Complexity -> O(1)
#include<iostream>
#include<string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) { // Time Complexity -> O(1)
    for(int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string &s1, string &s2) { // O(n^2)
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windSize = s1.length();
    for (int i = 0; i <= s2.length() - windSize; i++) {
        int windIdx = 0;
        int indx = i;
        int windFreq[26] = {0};

        while (windIdx < windSize && indx < s2.length()) {
            int chIdx = s2[indx] - 'a';
            windFreq[chIdx]++;
            windIdx++;
            indx++;
        }

        if (isFreqSame(freq, windFreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "True: A permutation of '" << s1 << "' is present in '" << s2 << "'." << endl;
    } else {
        cout << "False: No permutation of '" << s1 << "' is present in '" << s2 << "'." << endl;
    }

    return 0;
}
