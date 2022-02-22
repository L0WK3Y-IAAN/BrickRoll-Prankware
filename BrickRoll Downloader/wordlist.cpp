#include <fstream>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char** argv)
{

  ifstream ifs("myfile.txt");
  
  string content( (istreambuf_iterator<char>(ifs) ),(istreambuf_iterator<char>()) );
  for(int i=0;i<content.length();i++)
  {
    content.append("> \n")[i];

  }
  cout << content << endl;
  return 0;
}
