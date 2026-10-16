#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    printf("%c", a -32);
//
//        return 0;
//}

//#include<stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s[20];
//    scanf("%s", s);
//    int len = strlen(s);//5
//    for (int i = len - 1;i >= 0;i--)//4
//    {
//        printf("%c", s[i]);
//
//    }
//    printf("\n");
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    float t = 0;
//    unsigned int n = 0;
//    scanf("%f%d", &t, &n);
//    int cup = n * 2;
//    printf("%.2f", t / n);
//    printf("%d", cup);
//
//
//    return 0;
//}
//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    double p = (a + b + c) / 2;
//    double S = sqrt(p*(p - a)*(p - b)*(p - c));
//   
//    printf("%.2lf\n", S);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int s = 0;
//    int v = 0;
//    scanf("%d%d", &s, &v);
//    int walk = (s + v - 1) / v;
//    int need = walk + 10;
//    int ans = 480 - need;
//    if (ans < 0)
//    {
//        ans += 24 * 60;
//    }
//    printf("%d:%d", ans / 60, ans % 60);
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    double r = 0;
//    double h = 0;
//    scanf("%lf%lf", &r, &h);
//   int s = h * 3.14 * r * r / 1000;//多少升
//   int drink = 20.0;
//    double a = drink / s;
//    if (drink % s != 0)
//    {
//        a++;
//        printf("%lf", a);
//    }
//    else
//       printf("%lf", a);
//
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//
//    int time = a - c;
//    scanf_s("%d%d%d%d", &a, &b, &c, &d);
//    if (d < b)
//    {
//        int endmin = b - d;
//        time--;
//        printf("%d:%d", time, endmin);
//    }
//    else
//    {
//        int endmin = d - b;
//        printf("%d:%d", time, endmin);
//    }
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//   
//    scanf_s("%d %d", &a, &b);
//    int c = a * 10 + b;
//    int pen = c / 19;
//    printf("%d", pen);
//    return 0;
//}

#include<stdio.h>
int main()
{

    int homework = 0;
    int test = 0;
    int endtest = 0;
    scanf("%d%d%d", &homework, &test, &endtest);
    int score = homework * 0.2 + test * 0.3 + endtest * 0.5;
    printf("%d", score);
    return 0;
}

