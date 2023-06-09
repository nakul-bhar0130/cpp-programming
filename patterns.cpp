#include <iostream>
using namespace std;
int main()
{
    // pattern 1
    /*
     * * * *
     * * * *
     * * * *
     * * * *
     * * * *
     */

    // code for pattern 1

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // pattern 2
    /*
     * * * *
     *     *
     *     *
     *     *
     * * * *
     */
    // code for pattern 2
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // pattern 3
    /*
     * * * * *
     * * * *
     * * *
     * *
     *
     */
    // code for pattern 3
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // pattern 4
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */
    // code for pattern 4

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    // pattern 5
    /*
      1
      2 2
      3 3 3
      4 4 4 4
      5 5 5 5 5
    */
    //code for pattern 5
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    // pattern 6
    /*
       1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
    */
    //code for pattern 6
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }

    // pattern 7
    /*
     *             *
     * *         * *
     * * *     * * *
     * * * * * * * *
     */

    // code for pattern 7
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * 4 - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // pattern 8
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
        * * * *
        * * *
        * *
        * 
    */
   // code for pattern 8
    for (int i=1;i<=9;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (j<=i && j<=10-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // pattern 9
    /*
             *
           * *
         * * *
       * * * *
     * * * * *
       * * * *
         * * *
           * *
             *
    */
   //code for pattern 9
   for (int i=1;i<=9;i++)
   {
        for (int j=1;j<=5;j++)
        {
            if(j>=6-i && j>=i-4)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
   }
   // pattern 10
   /*
        *
        *
        * 
        * 
        * 
        * 
        * 
        * * * * * * * *
   */
    //code for pattern 10
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=8;j++)
        {
            if (i==8 || j==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // pattern 11
    /*
        * * * * * * * *
                    *
                  *
                *
              *
            *
          *
        * * * * * * * *
        
    */
   // code for pattern 11
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=8;j++)
        {
            if (i==1 || i==8 || j==9-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // pattern 12
    /*
        *             *
          *         *
            *     *
              * *
              * *
            *     *
          *         *
        *             *
    */

   // code for pattern 12
   for (int i=1;i<=8;i++)
   {
        for (int j=1;j<=8;j++)
        {
            if (j==i || j==9-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
   }
    // pattern 13  -------my name pattern
    /*
        *             *
        * *           *
        *   *         *
        *     *       *
        *       *     *
        *         *   *
        *           * *
        *             *
    */
   // code for pattern 13
   for (int i=1;i<=8;i++)
   {
        for (int j=1;j<=8;j++)
        {
            if (j==1 || j==8 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
   }
   // pattern 14
   /*
        *                *
        *  *           * *
        *    *       *   *
        *      *   *     *
        *        *       * 
        *                *
        *                *
        *                * 
        *                * 
   */
        // code for pattern 14
    for (int i=1;i<=9;i++)
    {
        for (int j=1;j<=9;j++)
        {
            if (j==1 || j==9 || (j==i && i<=5) || (j==10-i && i<=5))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // pattern 15
    /*
        *
        * *
        *   *
        *     * 
        * * * * *
    */
   //code for pattern 15
   for (int i=1;i<=5;i++)
   {
        for (int j=1;j<=5;j++)
        {
            if (i==5 || j==1 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
   }
   // pattern 16
   /*
        * * * * *
        *     *
        *   *
        * *
        * 
   */
  // code for pattern 16
  for (int i=1;i<=5;i++)
  {
        for (int j=1;j<=5;j++)
        {
            if (j==1 || i==1 || j==6-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
  }
  // pattern 17
  /*
                *
              * * *
            *   *   *
          *     *     *
        * * * * * * * * *      
  */
   // code for pattern 17
   for (int i=1;i<=5;i++)
   {
        for (int j=1;j<=9;j++)
        {
            if (j==5 || i==5 || j==6-i || j==4+i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
   }
   // pattern 18
   /*
        *
        * *
        *   * 
        *     *
        * * * * *
        *     *
        *   *
        * *
        * 
   */
  // code for pattern 18
  for (int i=1;i<=9;i++)
  {
        for (int j=1;j<=5;j++)
        {
            if (j==1 || i==5 || j==i || j==10-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
  }
  // pattern 19
  /*
     * * * * * * * * *
       *     *     *
         *   *   *
           * * *
             *
  */
  // code for pattern 19
  for (int i=1;i<=5;i++)
  {
    for (int j=1;j<=9;j++)
    {
        if (i==1 || j==5 || j==i || j==10-i)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
  }
}