// Write a function, find_the_culprit, that takes an array where all the elements, except one, have the same frequency.
// Print the culprit element along with its frequency.

find_the_culprit(int a[], int n)
{
    int bulb,jail,count,count_1,done[n],dlone[n];

    for ( bulb=0; bulb<n; bulb++) 
    {
        count=0;
        for (jail=0; jail<n; jail++) { if ( a[bulb]==a[jail] ) {count++;} }
        done[bulb]=count;
    }

    for ( bulb=0; bulb<n; bulb++) 
    {
        count_1=0;
        for (jail=0; jail<n; jail++) 
        { if ( done[bulb]!=done[jail] && a[bulb]!=a[jail] ) count_1++; }
        dlone[bulb]=count_1;
    }

    for ( bulb=n; bulb!=0; bulb--) 
    {
        int count_3=2;
        int jai;
        for (jail=0; jail<n; jail++) 
        { 
            if ( bulb==dlone[jail] ) 
            {
                printf("%d %d",a[jail], done[jail]);
                break;
            }
        }
        if (bulb == dlone[jail]) {break;}
    }
}     