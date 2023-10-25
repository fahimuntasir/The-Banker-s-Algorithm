#include<stdio.h>

int main()
{
    int allocation[15][15],max[15][15],need[15][15],avail[15],instance[15],work[15],flag[15];
    int n,m,i,j,prc,count,t,total;
    count=0;

    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1; i<= n; i++)
    {
        flag[i]=0;
    }
    for(i=1; i<= m; i++)
        scanf("%d",&instance[i]);

    for(i=1; i<= n; i++)
    {
        for(j=1; j<= m; j++)
            scanf("%d",&max[i][j]);
    }

    for(i=1; i<= n; i++)
    {
        for(j=1; j<= m; j++)
            scanf("%d",&allocation[i][j]);
    }

    for(j=1; j<= m; j++)
    {
        avail[j]=0;
        total=0;
        for(i=1; i<= n; i++)
        {
            total+=allocation[i][j];
        }
        avail[j]=instance[j]-total;
        work[j]=avail[j];
    }

    do
    {
        for(i=1; i<= n; i++)
        {
            for(j=1; j<= m; j++)
            {
                need[i][j]=max[i][j]-allocation[i][j];
            }
        }

        prc=0;

        for(i=1; i<= n; i++)
        {
            if(flag[i]==0)
            {
                prc=i;

                for(j=1; j<= m; j++)
                {
                    if(work[j]< need[i][j])
                    {
                        prc=0;
                        break;
                    }
                }
            }

            if(prc!=0)
                break;
        }

        if(prc!=0)
        {
            count++;
            for(j=1; j<= m; j++)
            {
                work[j]+=allocation[prc][j];
                allocation[prc][j]=0;
                max[prc][j]=0;
                flag[prc]=1;
            }
        }

    } while(count!=n&&prc!=0);

    if(count==n)
        printf("\nYes");
    else
        printf("\nNo");

    return 0;
}
