#include <iostream>
#include <string.h>
using namespace std;

typedef struct Person {
    char name[256];
    float t;
    float l;
    float c;

    float sum;
} person;

int main() {
    int n;
    cin >> n;
    getchar();

    person a[n];
    for (int i = 0; i < n; i++) {
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strlen(a[i].name)-1] = '\0';
    }

    for (int i = 0; i < n; i++)
        cin >> a[i].t;
    
    for (int i = 0; i < n; i++)
        cin >> a[i].l;

    for (int i = 0; i < n; i++)
        cin >> a[i].c;

    float max = 0;
    for (int i = 0; i < n; i++) {
        a[i].sum = a[i].c + a[i].l + a[i].t;
        if (max < a[i].sum)
            max = a[i].sum;
    }

    for (int i = 0; i < n; i++)
        if (max == a[i].sum)
            cout << a[i].name << " " << a[i].t << " " << a[i].l << " " << a[i].c << endl;
    return 0;
}