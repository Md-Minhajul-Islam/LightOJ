// Q: https://lightoj.com/problem/k-sat-problem
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int positive[n][k], negative[n][k];
        memset(positive, 0, sizeof(positive));
        memset(negative, 0, sizeof(negative));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                int num;
                scanf("%d", &num);
                if(num > 0) positive[i][j] = num;
                else negative[i][j] = -1*num;
            }
        }            
        int p;
        scanf("%d", &p);
        int taken[p];
        for(int i = 0; i < p; i++)
            scanf("%d", &taken[i]);
        
        int happy = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < p; j++)
            {
                int flag = 0;
                for(int c = 0; c < k; c++)
                {
                    if(positive[i][c] == taken[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(!flag)
                {
                    flag = 1;
                    for(int c = 0; c < k; c++)
                    {
                        if(negative[i][c] == taken[j])
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                if(flag)
            }
        }


        if(happy) printf("Case %d: Yes\n", caseNo);
        else printf("Case %d: No\n", caseNo);        
    }
    return 0;
}