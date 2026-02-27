// 1.
/*Find the second largest element
write a programm to find the second largest number in 1d array without sorting the array .
input :10 , 20 , 4, 45, 99
output: 45*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int a[n];
//     int large;
//     int ssslarge;

//     for (int  i = 0; i < n; i++)
//     {
//         cin>>a[i];

//     }
//        large= a[0];

//     for (int  i = 1; i < n; i++)
//     {
//         if(a[i]>large){
//             ssslarge=large;
//             large = a[i];

//         }

//     }
//     cout<<ssslarge<<endl;

// }

/*2.reverse an array
write a  program to reverse the elements of an array
input : 1,2,3,4,5
output:5,4,3,2,1*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int a[5];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];

//     }
//     for (int i = n-1; i >=0; i--)
//     {
//         cout<<a[i]<<endl;
//     }

// }

/*3.rotate an array:
rotate the array elements by a given number of positions to the left to right .
input : 1 ,2,3,4,5  and rotate by 2 positions
output : 3,4,5,1,2*/
// ??????????????????????????????????????????????????????????????

/*4. count frequency of elements
finds how many times each element occurs in an array
input: 1,2,2,3,4,1,3
output :
1: 2 times
2: 2 times
3: 2 times
4: 1 times*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"how many? :";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)

//     {
//        cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//     int common=1;

//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i]==arr[j]){
//                 common++;
//                 arr[j]=-1;
//             }
//         }
//          if (arr[i] != -1) cout<<arr[i]<<": "<<common<<"times"<<endl;

//     }

// }

/*5. find missing number
an array contains numbers 1 to N with one missing number . find the missing number .
input : 1,2,3,5(N=5)
output :4
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[n], sum=0,error=0;
//     for (int i = 1; i <= n-1; i++)
//     {
//         cin>>arr[i];
//         sum+=arr[i];

//     }
// //    cout<<sum<<endl;
// for (int i = 1; i <= n; i++)
//     {
//         error+=i;

//     }
//    cout<<error-sum<<endl;

// }

/*6. check for duplicate elements
check if an array contains any duplicate elements*/
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define dd double
// int main()
// {
//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }

//     // cout<<"aila jaduuuuuuuuuuu"<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {

//             if (a[i] == a[j])
//             {
//                 cout << "Yes , duplicate number exists" << endl;
//                 return 0;
//             }
//         }
//     }
// }

/*7. find pairs with a given sum
find all pairs in the array whose sum  equals a given value.
input : 1,2,3,4,5

output:
(1,4)
(2,3)*/
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define dd double
// int main()
// {
//     int target ;
//     cin>>target;
// int arr[5];
// for (int i = 0; i < 5; i++)
// {
//     cin>>arr[i];
// }

//     // cout<<"aila jaduuuuuuuuuuu"<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {

//             if (arr[i] + arr[j] == target)
//             {
//                 cout <<"("<<arr[i]<<") , (" <<arr[j]<<")"<< endl;
                
//             }
//         }
//     }
// }


/*8.move all zero to the end
move all the zero in an array to the end without changing the order  of non zero elemenets
input : 1,0,2,0,3
output : 1,2,3,0,0
*/
// #include <bits/stdc++.h>
// using namespace std;
// #define ass return 0
// #define ll long long
// #define dd double
// int main(){
//     int n= 5;
//     int arr[n];
//     int count=0;
//     for (int  i = 0; i < n; i++)
//     {
//        cin>>arr[i];
//     }
//     for (int  i = 0; i < n; i++)
//     {
        
//         if(arr[i]==0){
//             count++;
//         }

//        if (arr[i]!=0){
//         cout<<arr[i]<<endl;
//        }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         cout<<"0"<<endl;
//     }
    

//     // cout<<"0->"<<count<<endl;

// }
//fjf