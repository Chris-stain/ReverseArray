
#include <iostream>


using namespace std;

void reverseArray(int arr[], int num)
{
    int temp;

    for (int i = 0; i < num; i++)
    {
      temp = arr[i];
      arr[i] = arr[num - i - 1];
      arr[num - i -1] = arr[i];
      arr[i] = temp;

      cout << arr[i] << " ";
    }
}


int main()
{
  int arr[100];
  int num;

  cout << "How many numbers for array?: ";
  cin >> num;

  for (int i = 0; i < num;i++)
  {
    cout << "#" << i + 1 << ":";
    cin >> arr[i];
  }

  cout << "The reversed array is : ";
  reverseArray(arr, num);

  return 0;
}
