#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size"<<endl;
    cin>>n>>m;
    int arr1[n][m];
    int arr2[n][m];
    int arr[n][m];
    cout<<"Enter the 1st Values....."<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the 2nd  Values....."<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr2[i][j];
        }
    }
    cout<<"======= 2D 1st Array ========"<<endl;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"======= 2D 2st Array ========"<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"======= Sum of the Two Arrays ========"<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"====== Transfer Matrix ======"<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
 
    
}
