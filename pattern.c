// pattern 1 :

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
        printf("%d",j);
        }
        
        printf("\n");
    }
    

    return 0;
}

/*

Output :

1
12
123
1234
12345

*/

// pattern 14 :


#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*

Output:

    5
   45
  345
 2345
12345

*/

// pattern 4 :

#include <stdio.h>

int main()
{
    int i, j;

    // first loop for printing rows
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*

1
21
321
4321
54321

*/

// pattern 8 :

#include <stdio.h>
int main()
{
    for (int i = 45; i < 50; i++)
    {
        for (int j = 45; j <=i; j++)
        {
        printf("%d",j);
        }
        
        printf("\n");
    }
    

    return 0;
}


/*

45
4546
454647
45464748
4546474849

*/

// pattern 23 :

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if (j%2==0)
            {
                        printf("0");

            }
            else{
                printf("1");
            }
        }
        
        printf("\n");
    }
    return 0;
}

/*

Output :

1
10
101
1010
10101

*/

// pattern 21

#include <stdio.h>
int main()
{
    int k=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
                        printf("%d",k);
                        k++;

        }
        
        printf("\n");
    }
    return 0;
}

/*

Output :

1
23
456
78910
1112131415

*/