#pragma warning(disable:4996)
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 100010;
int list1[maxn];
int list2[maxn];
bool list3[maxn];

int main()
{
    int n;
    scanf("%d", &n);
    int top1 = 0;
    while (top1 < n)
    {
        scanf("%d", &list1[top1]);
        list2[top1] = list1[top1];
        top1++;
    }
    fill(list3, list3 + top1, true);
    int max = (-2147483647 - 1);
    for (int i = 0; i < top1; i++)
    {
        if (list1[i] < max)
        {
            list3[i] = false;
        }
        else
        {
            max = list1[i];
        }
    }
    int min = 2147483647;
    for (int i = top1 - 1; i >= 0; i--)
    {
        if (list1[i] > min)
        {
            list3[i] = false;
        }
        else
        {
            min = list1[i];
        }
    }
    sort(list2, list2 + top1);
    int top2 = 0;
    for (int i = 0; i < top1; i++)
    {
        if (list1[i] == list2[i] && list3[i])
        {
            list2[top2++] = list1[i];
        }
    }
    printf("%d\n", top2);
    for (int i = 0; i < top2 - 1; i++)
    {
        printf("%d ", list2[i]);
    }
    if (top2 > 0)
    {
        printf("%d", list2[top2 - 1]);
    }
    printf("\n");
    return 0;
}