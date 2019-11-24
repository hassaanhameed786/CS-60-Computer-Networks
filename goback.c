//go back-n protocol
#include <stdio.h>
void main()
{
    int windowsize;
    int sent =0;
    int ack,i;
    printf ("enter window size\n");
    scanf("%d",&windowsize);

    while(1)

    {
        for(i=0; i < windowsize; i++)
        {
            printf("Frame %d has been tramsmitted.\n", sent+1);
            sent++;
            if(sent == windowsize)
                break;
        }
        ack = rand() % windowsize+1;
        printf("Last acknowledgement received =%d\n",ack+1);

        if(ack == windowsize)
            break;
        else
            sent =ack;
    }
    return ;
}
