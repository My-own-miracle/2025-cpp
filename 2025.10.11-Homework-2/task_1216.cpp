#include <cstdio>

int main(int argc, char** argv)
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    int aa1 = (a1 < b1 and a1 < c1 ? a1 : (b1 < c1 ? b1 : c1));
    int cc1 = (a1 > b1 and a1 > c1 ? a1 : (b1 > c1 ? b1 : c1));
    int bb1 = a1 + b1 + c1 - aa1 - cc1;
    int aa2 = (a2 < b2 and a2 < c2 ? a2 : (b2 < c2 ? b2 : c2));
    int cc2 = (a2 > b2 and a2 > c2 ? a2 : (b2 > c2 ? b2 : c2));
    int bb2 = a2 + b2 + c2 - aa2 - cc2;
    if (aa1 == aa2 and bb1 == bb2 and cc1 == cc2)
    {
        printf("Boxes are equal");
    }
    else if (aa1 <= aa2 and bb1 <= bb2 and cc1 <= cc2)
    {
        printf("The first box is smaller than the second one");
    }
    else if (aa1 >= aa2 and bb1 >= bb2 and cc1 >= cc2)
    {
        printf("The first box is larger than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }
    return 0;
}