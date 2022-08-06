#include <iostream>
#include <vector>
using namespace std;
bool uniqueOccurrences(vector<int> &nums)
{
  int arr[1000] = {0};
  for (int i = 0; i < nums.size(); i++)
  {
    int counter = 1;
    if (nums[i] == 9000)
    {
      continue;
    };
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] == nums[j])
      {
        counter++;
        nums[j] = 9000;
      }
    }
    cout << counter << " ";
    if (arr[counter])
      return false;
    else
      arr[counter] = 1;
  }
  return true;
}
int main()
{

  cout << "Enter size of vector: " << endl;
  int n, element;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++)
  {

    cin >> element;
    nums.push_back(element);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < nums.size(); j++)
    {
      if (i != j && nums[i] == nums[j])
      {
        cout << nums[i] << " " << nums[j] << " space \n";
        nums.erase(nums.begin() + j);
      }
    }
    nums.erase(nums.begin() + i);
    n = nums.size();
  }

  uniqueOccurrences(nums);
  return 0;
}