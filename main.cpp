#include <iostream>


using namespace std;

void reverseArray(int arr[], int count)
{
    int temp;

    for (int i = 0; i < count/2; i++)
    {
      temp = arr[count - i - 1];
      arr[count - i -1] = arr[i];
      arr[i] = temp;
    }
}

void printArray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
         cout << arr[i] << " ";
    }
}

int main()
{
  int arr[100];
  int count;

  cout << "How many numbers for array?: ";
  cin >> count;

  for (int i = 0; i < count; i++)
  {
    cout << "#" << i + 1 << ":";
    cin >> arr[i];
  }
  reverseArray(arr, count);
  cout << "The reversed array is : ";
  printArray(arr, count);

  return 0;
}
