void tube(){
    int n, t;
        cin>>n>>t;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<n;j++) cin>>b[j];
 
        int ans = -1;
        for (int i=0;i<n;i++)
            if (a[i]<=t-i)
            {
                  if (ans==-1 || b[i]>b[ans-1])
                    ans = i + 1;
            }
        cout << ans << endl;
    
}