// Project 1b: Solving graph coloring using exhaustive search
//

#include <iostream>
#include <limits.h>
#include <list>
#include <fstream>
#include <queue>
#include <vector>
#include <time.h>

#include "../common/d_except.h"
#include "../common/d_matrix.h"
#include "../common/graph.h"

using namespace std;

void exhaustiveColoring(graph g, int numColors, int limit);

int main()
{
   char x;
   ifstream fin;
   stack <int> moves;
   string fileName;
   int numColors;
   vector<int> solution;

   // Read the name of the graph from the keyboard or
   // hard code it here for testing.
   
   fileName = "../instances/color/color12-4.input";

   //cout << "Enter filename" << endl;
   //cin >> fileName;
   
   fin.open(fileName.c_str());
   if (!fin)
   {
      cerr << "Cannot open " << fileName << endl;
      return 1;
   }

   try
   {
      cout << "Reading number of colors" << endl;
      fin >> numColors;
	 
      cout << "Reading graph" << endl;
      graph g(fin);

      cout << "Num colors: " << numColors << endl;
      cout << g;

      exhaustiveColoring(g, numColors, 60);
      g.printEdges();
      g.printNodes();
   }    
   catch (indexRangeError &ex) 
   { 
      cout << ex.what() << endl; 
      return 1;
   }
   catch (rangeError &ex)
   {
      cout << ex.what() << endl; 
      return 1;
   }
}
    
void exhaustiveColoring(graph g, int numColors, int limit)
{

}