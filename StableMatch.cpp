/*Problem 1: Implement Gale-Shapley’s Stable-Matching algorithm to output a stable matching of n
men and n women. Your program should read in a file that specifies the men & women and their
preferences. The first line in the input file gives the names of the n men; the second line gives the
name of the n women; the next n lines give the men’s preferences and the following n lines give the
women’s preferences. Each line in the preference list contains the name of a person(man/woman)
followed by that person’s list of preferred people in the decreasing order.*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int men[] = {0, 1, 2, 3, 4};
    int women[] = {0, 1, 2, 3, 4};
    string menMap[5];
    string womenMap[5];
    menMap[0] = "Victor";
    menMap[1] = "Wyatt";
    menMap[2] = "Xavier";
    menMap[3] = "Yancey";
    menMap[4] = "Zeus";
    womenMap[0] = "Amy";
    womenMap[1] = "Bertha";
    womenMap[2] = "Clare";
    womenMap[3] = "Diane";
    womenMap[4] = "Erika";

    int menPref[][5] = {{1, 0, 3, 4, 2},
                        {3, 1, 0, 2, 4},
                        {1, 4, 2, 3, 0},
                        {0, 3, 2, 1, 4},
                        {1, 3, 0, 4, 2}};
    int wPref[][5] = {{4, 0, 1, 3, 2},
                      {2, 1, 3, 0, 4},
                      {1, 2, 3, 4, 0},
                      {0, 4, 3, 2, 1},
                      {3, 1, 4, 2, 0}};
    int mproposed[5][5] = {0};
    stack<int> freeMen;
    for (int i:men) {
        freeMen.push(men[i]);
    }
    int menEngaged[5];
    int womenEngaged[5];
    for (int i = 0; i < 5; i++) {
        menEngaged[i] = womenEngaged[i] = -1;
    }
    while (!freeMen.empty()) {
        int currMen = freeMen.top();
        freeMen.pop();
        int womenP = -1;
        for (int i = 0; i < 5; i++) {
            if (mproposed[currMen][menPref[currMen][i]] == 0) {
                womenP = menPref[currMen][i];
                mproposed[currMen][womenP] = 1;
                break;
            }
        }

        if (womenEngaged[womenP] == -1) {
            womenEngaged[womenP] = currMen;
            menEngaged[currMen] = womenP;
        } else {
            int menE = womenEngaged[womenP];
            int i_menE = -1;
            int i_curr = -1;
            for (int i = 0; i < 5; i++) {
                if (wPref[womenP][i] == menE)
                    i_menE = i;
                if (wPref[womenP][i] == currMen)
                    i_curr = i;
            }
            if (i_curr < i_menE) {
                menEngaged[currMen] = womenP;
                womenEngaged[womenP] = currMen;
                menEngaged[menE] = -1;
                freeMen.push(menE);
            } else {
                freeMen.push(currMen);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << menMap[i] << "-" << womenMap[womenEngaged[i]] << endl;
    }
    cout << endl;
}
