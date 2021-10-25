#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    int i =0;
    s.min = numberset [i];
    s.max = numberset [i];
    for(i=0; i < setlength; i++)
    {
        s.average = s.average + numberset [i];
        if(numberset [i]< s.min)
        {
            s.min =numberset [i];
        }
        if(numberset [i]> s.max)
        {
            s.max =numberset [i];
        }            
    }
        s.average = s.average / setlength;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
