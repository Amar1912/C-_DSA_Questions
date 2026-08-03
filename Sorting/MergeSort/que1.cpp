//Merge Two Sorted Arrays
#include <iostream>
using namespace std;


int main (){
     int n1, n2;

    cout << "Enter size of Array 1: ";
    cin >> n1;

    cout << "Enter size of Array 2: ";
    cin >> n2;

    int arr1[n1], arr2[n2];
    int result[n1 + n2];
    cout << "Enter elements of Array 1: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of Array 2: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
      int i = 0, j = 0, k = 0;
    
      while(i < n1 && j < n2)
      {
         if(arr1[i] < arr2[j])
         {
            result[k] = arr1[i];
            i++;
         }
         else
         {
            result[k] = arr2[j];
            j++;
         }
            k++;
      }

      while(i < n1)
      {
         result[k] = arr1[i];
         i++;
         k++;
      }
      while(j < n2)
      {
         result[k] = arr2[j];
         j++;
         k++;
      }
      cout << "Merged array in Ascending Order: ";
      for(int i = 0; i < n1 + n2; i++)
      {
         cout << result[i] << " ";
      }
      cout << endl;
}