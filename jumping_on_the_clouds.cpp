#include <vector>

int jumpingOnClouds(std::vector<int> c) {
    int n=0,h=0;
    int k=c.size();
    while (n<k-3)
    {if (c.at(n+2)!=1)
    n+=2; else n++;
    h++;    
    }
    if (k>n-3 )
    h++;
   
   
 
 return h;
}
