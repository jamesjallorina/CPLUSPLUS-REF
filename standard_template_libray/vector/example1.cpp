#include <iostream> 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

struct bins{
    char bins[6+1];
    int length;
};

char pan[] = "440013";

int main()
{
    int j = 0;
    struct bins temp_bin;
    vector<struct bins> bins;
    strcpy(temp_bin.bins, "440011");
    temp_bin.length = 6;
    bins.push_back(temp_bin);
    strcpy(temp_bin.bins, "440012");
    temp_bin.length = 6;
    bins.push_back(temp_bin);
    strcpy(temp_bin.bins, "440013");
    temp_bin.length = 6;
    bins.push_back(temp_bin);
    strcpy(temp_bin.bins, "440014");
    temp_bin.length = 6;
    bins.push_back(temp_bin);
    
    vector<struct bins>::iterator it;
    for(it=bins.begin(); it!=bins.end(); it++, j++)
    {   
        printf("bin[%d]: %s length is[%d]\n", j, it->bins, it->length);
    }
    for(it=bins.begin(); it!= bins.end(); it++)
    {
        if(strncmp(it->bins, pan, it->length) == 0)
        {
            printf("found onus bin[%s] and pan[%s]", it->bins, pan);
        }
    }
    return 0;
}