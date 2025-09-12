#include <stdio.h>
#include <string.h>  // Needed for strcpy

int main() {
    struct score {
        int math;
        int eng;
        int sci;
        int his;
    };

    struct student {
        char name[20];
        int id;
        struct score pt;
    } st[3];

    float score_sub[4] = {0.0, 0.0, 0.0, 0.0};

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d %d %d %d %d",
              st[i].name,
              &st[i].id,
              &st[i].pt.math,
              &st[i].pt.eng,
              &st[i].pt.sci,
              &st[i].pt.his);

        score_sub[0] += st[i].pt.math;
        score_sub[1] += st[i].pt.eng;
        score_sub[2] += st[i].pt.sci;
        score_sub[3] += st[i].pt.his;
        printf("\n");
    }

    printf("Student Averages:\n");

    float highest_avg = 0.0;
    int highest_order = 0;

    for (int i = 0; i < 3; i++) {
        float avg = (st[i].pt.math + st[i].pt.eng + st[i].pt.sci + st[i].pt.his) / 4.0;
        if (highest_avg <= avg) {
            highest_avg = avg;
            highest_order = i;
        }
        printf("%s (ID: %d): %.2f\n", st[i].name, st[i].id, avg);
    }

    printf("\nTop Student: %s with %.2f\n\n", st[highest_order].name, highest_avg);

    printf("Subject Averages:\n");

    float highest_pt = 0.0;
    char highest_sub[10];

    const char *subjects[] = {"Math", "English", "Science", "History"};

    for (int i = 0; i < 4; i++) {
        score_sub[i] /= 3.0;
        printf("%s: %.2f\n", subjects[i], score_sub[i]);

        if (highest_pt <= score_sub[i]) {
            highest_pt = score_sub[i];
            strcpy(highest_sub, subjects[i]);
        }
    }

    printf("\nTop Subject: %s with average %.2f\n", highest_sub, highest_pt);

    return 0;
}