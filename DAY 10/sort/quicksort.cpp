#include<iostream>
using namespace std;

  int partition(int input[],int start,int end){
  int pivot=input[start];
  int count =0;
  for(int i=start+1;i<=end;i++)
  {
      if(input[i]<=pivot)
    {
      count++;
    }
  } 
    int pivotIndex=start+count;
    int temp=input[start];
    input[start]=input[pivotIndex];
    input[pivotIndex]=temp;
    
    int i=start;
    int j=end;
    while(i<pivotIndex && j>pivotIndex)
    {
      if(input[i]<=pivot)
     {
        i++;
      }
      else if(input[j]>pivot)
       {
        j--;
       }
        else 
          {
          int tempo=input[i];
          input[i]=input[j];
          input[j]=tempo;
          i++;
          j--;
        }
      }
     
return pivotIndex;  
} 
void QuickSort(int input[], int start, int end)
{
    if(start>=end)
    {
      return;
    }
  int p = partition(input,start,end);
  QuickSort(input,start,p-1);
  QuickSort(input,p+1,end);
}


int main(){
    int n=7;
    int arr[]={5,7,6,2,1,4,8};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    QuickSort(arr,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}