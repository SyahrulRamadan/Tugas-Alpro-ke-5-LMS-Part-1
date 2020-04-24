
#include <fstream>

using namespace std;



int main (){

ifstream myfile;

char teks;

myfile.open ("alpro.txt");

if(!myfile.fail() ) {

cout<<"Isi file -> ";

while (!myfile.eof() ) {

myfile.get(teks);

cout<<teks;

}

myfile.close();

}else{

cout<<"File tidak ditemukan\n";

}

return 0;

}


