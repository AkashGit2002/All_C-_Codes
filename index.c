#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dow,n;
    string date;
    cin>>date>>dow>>n>>endl;
    int days[7]={Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    if(date[5]=='2'||'1'||'3'||'5'||'7'){
        boolean prime[] = new boolean[n + 1];
        for (int i = 0; i <= n; i++)
            prime[i] = true;

        for (int p = 2; p * p <= n; p++)
    {            if (prime[p] == true)
            {
                // Update all multiples of p
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (prime[i] == true)
                if(i<=30||)
        }
    }
 return 0;
}
