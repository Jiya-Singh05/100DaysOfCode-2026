#include <stdio.h>
#include <string.h>

const char* footballChampion(char goals[][11], int n) {
    static char team1[11], team2[11];
    int count1 = 0, count2 = 0;
    int haveTeam2 = 0;

    strcpy(team1, goals[0]);

    for (int i = 0; i < n; i++) {
        if (strcmp(goals[i], team1) == 0) {
            count1++;
        } else if (!haveTeam2) {
            strcpy(team2, goals[i]);
            haveTeam2 = 1;
            count2++;
        } else if (strcmp(goals[i], team2) == 0) {
            count2++;
        }
    }

    return (count1 > count2) ? team1 : team2;
}
