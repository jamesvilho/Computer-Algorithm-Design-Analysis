int maxSumSubArray(int* a,int& n){
    int maxsum = 0;
    int currsum = 0;
    for(int i =0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum>maxsum)
        maxsum=currsum;
        if(currsum<0)
        currsum=0;
    }
return maxsum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    cin>>arr[i];
    int x = maxSumSubArray(arr,n);
    cout<<x;

}
