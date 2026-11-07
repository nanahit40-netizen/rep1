#include <string>

long repeatedString(std::string s, long n) {
int i,l=s.length(); long k=0,q=0;
for (i=0; i<l; i++)
if (s[i]=='a')
k++;
if (n==l)
return k; else
if (n<l)
{
    for (i=0; i<n; i++)
    if (s[i]=='a')
    q++;
    k=q;
}
else if (n>l)
{
    q=(n/l)*k;
    if (n%l!=0)
    for (i=0; i<n%l; i++)
    if (s[i]=='a')
    q+=1;
    k=q;
}
return k;
}
