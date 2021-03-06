#include <iostream>
using namespace std;

int main()
{
  int a_size, b_size;
  cin >> a_size >> b_size;
  int a[a_size];
  int b[b_size];
  for (int i = 0; i < a_size; ++i)
  {
    cin >> a[i];
  }
  
  for (int j = 0; j < b_size; ++j)
  {
    cin >> b[j];
  }

  for(int i = 0; i < b_size; ++i)
  {
    int l = 0, r = a_size - 1;
    int right = -1;
    int left = -1;
    while (l <= r)
    {
    	int m = (l + r) / 2;
    	if (a[m] == b[i])
    	{
    		right = m;
        	r = m - 1;
      	}
      	else if (a[m] > b[i])
      	{
      		r = m - 1;
      	}
      	else
      	{
      		l = m + 1;
      	}
    }
    
    l = 0, r = a_size - 1;
    
    while (l <= r)
    {
      	int m = (l + r) / 2;
      	if (a[m] == b[i])
      	{
       		left = m;
        	l = m + 1;
      	}
      	else if (a[m] > b[i])
      	{
       		r = m - 1;
      	}
      	else
      	{
        	l = m + 1;
      	}
    }
    if (right != -1 && left != -1)
    {
      	right++;
      	left++;
      	cout << right << " " << left << endl;
    }
    else
    {
      	cout << "0";
      	cout << endl;
    }
    
  }  
  
}
