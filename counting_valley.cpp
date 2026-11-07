#include <string>

int countingValleys(int steps, std::string path) {
      
      int n=0, m,h=0;
      for (int i=0; i<steps; i++)
      {
        m=n;
        if ( path[i]=='D' )
            n--; else n++;
        if (m==0 && n<0)
          h++;
      }
       return h;
}
