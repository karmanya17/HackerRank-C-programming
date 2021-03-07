
int  sum (int count,...) {
    int i,s=0;
    va_list lst;
    va_start(lst, count);
    for(int i=0;i<count;i++)
    {
        int n=va_arg(lst,int);
        s=s+n;
    }
    va_end(lst);
    return s;

}

int min(int count,...) {
    int i,min=MAX_ELEMENT;
    va_list lst;
    va_start(lst, count);
    for(i=0;i<count;i++)
    {
        int n=va_arg(lst, int);
        if(min>n)
        {
            min=n;
        }
    }
    va_end(lst);
    return min;

}

int max(int count,...) {
    int i,max=MIN_ELEMENT;
    va_list lst;
    va_start(lst, count);
    for(i=0;i<count;i++)
    {
        int n=va_arg(lst,int);
        if(max<n)
        max=n;
    }
    va_end(lst);
    return max;
}
