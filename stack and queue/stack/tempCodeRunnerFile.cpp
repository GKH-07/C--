for(int i=0;i<7;i++)
{
    for (int j = i-1; j > 0 ;j--)
    {
        if(arr[i]>arr[j]){
            span[i]++;
        }
        else{
            break;
        }
    }
    
}