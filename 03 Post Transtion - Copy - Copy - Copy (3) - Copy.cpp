/*We live in a big country. This country has  towns in it. Each town has some post offices in which packages are stored and transferred.

Post offices have different inner structure. Specifically, each of them has some limitations on the packages it can store - their weight should be between  and  inclusively, where  and  are fixed for each office.

Packages are stored in some order in the office queue. That means, that they are processed using this order when sending and receiving.

Sometimes two post offices, even in different towns, may organize the following transaction: the first one sends all its packages to the second one. The second one accepts the packages that satisfy the weight condition for the second office and rejects all other ones. These rejected packages return to the first office back and are stored in the same order they were stored before they were sent. The accepted packages move to the tail of the second office's queue in the same order they were stored in the first office.

You should process several queries in your program. You'll be provided with structures ,  and . in order to complete this task, you should fill the following functions:

 - given the town , print all packages in this town. They should be printed as follows:

Town_name:
    0:
        id_0
        id_1
        ...
    1:
        id_2
        id_3
        ...
    ...
where ,  etc are the numbers of post offices and , ... are the ids of packages from the th post office in the order of its queue, ,  are from the st one etc. There should be one '\t' symbol before post office numbers and two '\t' symbols before the ids.

 - given the towns  and  and post office indices  and , manage the transaction described above between the post office # in town  and the post office # in town .

 - given all towns, find the one with the most number of packages in all post offices altogether. If there are several of them, find the first one from the collection .

 - given all towns and a string , find the town with the name . It's guaranteed that the town exists.

Input Format

First line of the input contains a single integer .  blocks follow, each describing a town.

Every town block contains several lines. On the first line there is a string  - the name of the town. On the second line there is an integer  - the number of the offices in the town.  blocks follow then, each describing an office.

Every office block also contains several lines. On the first line there are three integers separated by single spaces:  (the number of packages in the office),  and  (described above).  blocks follow, each describing a package.

Every package block contains exactly two lines. On the first line there is a string  which is an id of the package. On the second line there is an integer  which is the weight of the package.

Then, there is a single integer  on the line which is the number of queries.  blocks follow, each describing a query.

Every query block contains several lines. On the first line there is an integer ,  or . If this integer is , on the second line there is a string  - the name of town for which all packages should be printed. If this integer is , on the second line there are string , integer , string  and integer  separated by single spaces. That means transactions between post office # in the town  and post office # in the town  should be processed.

If the integer is , no lines follow and the town with the most number of packages should be found.

Constraints

All integer are between  and 
, .
All strings have length 
All towns' names have only uppercase english letters and are unique.
All packages' ids have only lowercase english letters and are unique.
For each post office,   .
All queries are valid, that means, towns with the given names always exist, post offices with the given indices always exist.
Output Format

For queries of type , print all packages in the format provided in the problem statement. For queries of type , print "Town with the most number of packages is " on a separate line.

Sample Input 0

2
A
2
2 1 3
a 2
b 3
1 2 4
c 2
B
1
4 1 4
d 1
e 2
f 3
h 4
5
3
2 B 0 A 1
3
1 A
1 B
Sample Output 0

Town with the most number of packages is B
Town with the most number of packages is A
A:
    0:
        a
        b
    1:
        c
        e
        f
        h
B:
    0:
        d
Explanation 0

Before all queries, town B has  packages in total, town  has . But after transaction all packages from B's th post office go to the st post office of A, except package d because it's too light.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOWNS 10
#define MAX_OFFICES 10
#define MAX_PACKAGES 1000
#define MAX_NAME 105

typedef struct {
    char id[MAX_NAME];
    int weight;
} Package;

typedef struct {
    int min_weight, max_weight;
    int package_count;
    Package packages[MAX_PACKAGES];
} PostOffice;

typedef struct {
    char name[MAX_NAME];
    int office_count;
    PostOffice offices[MAX_OFFICES];
} Town;

int main() {
    int n;
    scanf("%d", &n);
    Town towns[MAX_TOWNS];

    for (int i = 0; i < n; i++) {
        scanf("%s", towns[i].name);
        scanf("%d", &towns[i].office_count);

        for (int j = 0; j < towns[i].office_count; j++) {
            int p, a, b;
            scanf("%d %d %d", &p, &a, &b);
            towns[i].offices[j].package_count = p;
            towns[i].offices[j].min_weight = a;
            towns[i].offices[j].max_weight = b;

            for (int k = 0; k < p; k++) {
                scanf("%s", towns[i].offices[j].packages[k].id);
                scanf("%d", &towns[i].offices[j].packages[k].weight);
            }
        }
    }

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 1) {  
            char tname[MAX_NAME];
            scanf("%s", tname);

            int t_index = -1;
            for (int i = 0; i < n; i++) {
                if (strcmp(towns[i].name, tname) == 0) {
                    t_index = i;
                    break;
                }
            }

            if (t_index != -1) {
                printf("%s:\n", towns[t_index].name);
                for (int i = 0; i < towns[t_index].office_count; i++) {
                    printf("\t%d:\n", i);
                    for (int j = 0; j < towns[t_index].offices[i].package_count; j++) {
                        printf("\t\t%s\n", towns[t_index].offices[i].packages[j].id);
                    }
                }
            }

        } else if (type == 2) {  
            char fromTown[MAX_NAME], toTown[MAX_NAME];
            int fromIdx, toIdx;
            scanf("%s %d %s %d", fromTown, &fromIdx, toTown, &toIdx);

            int a = -1, b = -1;
            for (int i = 0; i < n; i++) {
                if (strcmp(towns[i].name, fromTown) == 0) a = i;
                if (strcmp(towns[i].name, toTown) == 0) b = i;
            }

            PostOffice *src = &towns[a].offices[fromIdx];
            PostOffice *dst = &towns[b].offices[toIdx];

            Package accepted[MAX_PACKAGES];
            int acc_count = 0;
            Package rejected[MAX_PACKAGES];
            int rej_count = 0;

            for (int i = 0; i < src->package_count; i++) {
                int w = src->packages[i].weight;
                if (w >= dst->min_weight && w <= dst->max_weight) {
                    accepted[acc_count++] = src->packages[i];
                } else {
                    rejected[rej_count++] = src->packages[i];
                }
            }

            // Add accepted packages to destination
            for (int i = 0; i < acc_count; i++) {
                dst->packages[dst->package_count++] = accepted[i];
            }

            // Reassign rejected packages back to source
            src->package_count = rej_count;
            for (int i = 0; i < rej_count; i++) {
                src->packages[i] = rejected[i];
            }

        } else if (type == 3) {  
            int maxPackages = -1, index = -1;
            for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = 0; j < towns[i].office_count; j++) {
                    count += towns[i].offices[j].package_count;
                }
                if (count > maxPackages) {
                    maxPackages = count;
                    index = i;
                }
            }
            printf("Town with the most number of packages is %s\n", towns[index].name);
        }
    }

    return 0;
}

