// #include<bits/stdc++.h>
// #define loop(i) for(int i=0; i<n; i++) 
// using namespace std;
 
// int main()
// {
//     int t=0,n=0, count,a; 
//     vector<int> v;  
//     cin>>t;

//     while (t--)
//     {
      
//       // loop(i)
//       // {
//       //  cin>>v[i];
//       //  n++;
//       // }
//       while (cin>>a)
//       {
//         v.push_back(a);
//         n++;
//       }
//       vector<bool>visited(n,false); int k=0;
//       for(auto i=v.begin(); i<v.end(); i++)
//       { 
//         if(visited[k]==true)
//           continue;

//         count=1;// sbhi lmnt ki frq 1 min.th's why j=i+1
//         for(auto j=v.begin()+1; j<v.end(); j++)
//         {
//           if(*i==*j)
//           {
//             count++;
//             visited[k]=true;
//           }
//         }
//         k++;  
//         cout<<*i<<":"<<count<<endl;     
//       }

//     }
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define say(n) cout<<n<<endl;
#define yes cout<<"YES"<<endl;
#define loop(i,k,n) for(int i=k;i<n;i=i+1)// very useful
#define no cout<<"NO"<<endl;
#define en cout<<endl;
#define ndl <<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    string s,copy="";
   cin>>n>>s;
   
//    copy.assign(s);
//    for(auto i:copy)
//    {
//        if(i=='+')  i= '1';
//        else if(i=='-') i='-1';
//    }



   if(s[1]=='+'||s[1]=='-')
     s[0]=s[1];
   
   for(int i=1; i<n;i++)
   {
      int tmp=(s[i+1]^s[i-1]);
       if(s[i]=='0' && tmp!=6)
       {
           s[i]=s[i+1];
       }
   }
   int ans=count(s.begin(), s.end(),'0');
   say(ans)
}
int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}