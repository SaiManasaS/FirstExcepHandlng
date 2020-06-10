/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description: This is a program used to find 2 integer array 
 * elements that add up to a given target sum
 *
 * Revision History:
 * Initial version: June 10th, 2020
 */

#include <ctype.h>
#include <exception>
#include <iostream>

using namespace std;

class badAreaParams{};

float computTrianglArea(int tBase, int tHeight)
{
	if(tBase < 0 || tHeight < 0)
	{
		throw badAreaParams();
	}
	return (0.5 * tBase * tHeight);
}

int main () 
{
  int tBase = 0, tHeight = 0;
  float tArea = 0;
  cout << "Enter triangle base: " << endl;
  cin >> tBase;
  cout << "Enter triangle height: " << endl;
  cin >> tHeight;

  try
  {
      computTrianglArea(tBase, tHeight);
  }
  catch(badAreaParams) //  catch (exception& e)
  {
      cout << "Expected base/ height values are non-negative!" << endl;
  }

  while(1);
  return 0;
}