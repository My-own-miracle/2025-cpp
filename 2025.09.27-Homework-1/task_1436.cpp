#include <cstdio>

int main(int argc, char** argv)
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    long long modb = b * (((int) (b / (b - 0.1)) - (int) (b / (b + 0.1))));
    long long r = (a - (a / b) * b + modb) % modb;
    printf("%lld", r);
    return 0;
}

/*
Эта программа на последнем тесте выдаёт Runtime Error, 
как по мне главное это верно работающий алгоритм, но eсли нужен Accepted,
то вот программа, с одним нюансом в виде if.

#include <cstdio>
 
int main(int argc, char** argv)
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    if (b < 0) {
        b = - b;
    }
    long long r = (a - (a / b) * b + b) % b;
    printf("%lld", r);
    return 0;
}
*/