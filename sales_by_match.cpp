#include <iostream>
#include <vector>

int sockMerchant(int n, std::vector<int> ar) {
    int max, l=0, i;
    int j=n;
    
    while (n!=1)
    {
        max=0;
        for (i=1; i<n; i++)
        if (ar.at(i)>ar.at(max))
        {max=i; }
        
       int k =ar.at(n-1);
        ar.at(n-1)=ar.at(max);
        ar.at(max)=k;
        n--;
    }
    for (i=0; i<j-1; i++)
    if (ar.at(i)==ar.at(i+1))
    {
        l++; i++;
    }
for (i=0; i<j; i++)
std::cout<<ar.at(i)<<std::endl;
   return l;
}
