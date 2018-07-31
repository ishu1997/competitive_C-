//array_hourGlass_problem
//link_to_the_problem :- 
https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

   int Max_sum=0,sum=0;
int m,n;

for(int i =1; i<5; i++)    {
   
    for(int j =1; j<5; j++ )    {
   
    sum = arr[i][j];

    m = i-1;
    n = j-1;

    for(int k = n; k < j+2; k++ )    {
           sum = sum + arr[m][k];
        }    
  
    m = i+1;

        for(int k = n; k < j+2; k++ )    {
           sum = sum + arr[m][k];
        }   
        
        if(i==1 && j==1){
            Max_sum = sum;
        }

        if(Max_sum < sum){
           Max_sum = sum;
         }
      
    }    
}
return Max_sum;           
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
