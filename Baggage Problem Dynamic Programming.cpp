int main()
{
	int m, n;

    cin >> m >> n; // m = capacity of bag n = number of item

    int arrw [n]; 
    int arrv [n];
    for(int i =0; i<n; i++)
    {
        cin>> arrw[i] >> arrv[i]; // arrw= weight of object, arrv= value of object
    }

    int k [n+1][m+1]; //memorization array

    for(int i =0; i<=n;i++) //n
    {
        for(int w=0; w<=m; w++){ //m

            if( i ==0|| w ==0) // n =0 or w =0
                k[i][w]=0;

            else if(arrw[i]<=w) //weight of object< = w


                k[i][w]= max(arrv[i]+ k[i-1] [w-arrw[i]], k[i-1] [w]); //fill the array 

            else
            k[i][w]=k[i-1][w];

        }
    }

			cout << k[n][m];
	return 0;
}
