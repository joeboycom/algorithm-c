//
// Created by Joe Wu on 2022/5/30.
//

#include<stdio.h>

int i, j, n, t = 3; //i j for counters, n for number of programs, t for no of tapes
int p[30], l[30], temp, m, tape[10][10], tape1[30][30]; //p[] stores program no,and l[] stores program length
int itemcount[10]; //to store no of items in each tape

int c1 = 0, c2 = 0, c3 = 0;
float mrt[10];

void getval() {
    printf("Enter no of programs: ");
    scanf("%d",&n);
    printf("Enter number of tapes: ");
    scanf("%d",&t);
    for (i = 0; i < n; i++) {
        printf("Enter length of program %d: ",i+1);
        scanf("%d",&l[i]);
        p[i] = i;
    }

    for (i = 1; i <= t; i++) // to initialise tape matrix
    {
        for (j = 0; j < t; j++)
            tape[i][j] = 0;
    }
}

void sort() {
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (l[j] > l[j + 1]) {
                temp = l[j];
                l[j] = l[j + 1];
                l[j + 1] = temp;

                m = p[j];
                p[j] = p[j + 1];
                p[j + 1] = m;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("program %d\t",p[i]);
        printf("length %d\n",l[i]);
    }
}

void arrange() {
    int count = 0;
    int r = 0;
    for (i = 0; i < 10; i++)
        itemcount[i] = 0;
    for (i = 0; i < n; i++) {
        count++;
        tape[count][r] = l[i];
        itemcount[count]++;

        if (count == t) {
            r++;

            count = 0;
        }

    }
}

void printtape() {
    int r = 0;
    for (i = 1; i <= t; i++) {
        printf("\ntape %d: ",i);
        while (tape[i][r] != 0) {
            printf("%d\t",tape[i][r]);
            r++;
        }
        r = 0;
    }
    printf("\n");
}

void calmrt() {
    int r = 0, it = 0, k;
    float sum[10]; //to save sum of each tape
    for (i = 0; i < 10; i++) //init sum
    {
        sum[i] = 0;
    }
    j = 0;
    for (i = 1; i <= t; i++) {

        for (j = 0; j < itemcount[i]; j++) {
            for (k = 0; k <= j; k++) {
                sum[i] = sum[i] + tape[i][k];

            }

            r++;
            it--;
        }
        r = 0;
        mrt[i] = sum[i] / itemcount[i];
        printf("MRT of tape %d is %f\n",i,mrt[i]);
    }

}

void finalMRT() {
    float final_mrt = 0;
    for (i = 1; i <= t; i++) {
        final_mrt += mrt[i];
    }
    final_mrt = final_mrt / t;

    printf("final mrt is %f\n",final_mrt);

}

int doOptimalStorageOnTapes() {
    getval();
    sort();
    arrange();
    printtape();
    calmrt();
    finalMRT();
}