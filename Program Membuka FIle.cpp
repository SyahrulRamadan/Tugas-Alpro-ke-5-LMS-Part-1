#include <fstream>

using namespace std;

int main(){

ofstream myfile;

myfile.open ("Belajar.txt", ios: :app);

myfile<<"Saya membuka file";

myfile.close ();

return 0;

}
