#include <cstdlib>
#include <iostream>
using namespace std;

int Permutasi (int x, int y)
  int Nilai_Permut, selisih;
  int faktorial = i;
  selisih = x y;
  
  whilw (x > 0) {
  faktorial = faktorial * x;
  x = x-i;
  }
    Nilai_Permut = faktorial/selisih;
    return(Nilai_Permut);
}

int main () {
   int n, r;
   cout << "Masukan Nilai n; ";
   cin >> r;
   while (r < 0) {
   cout << "Masukan Nilai N Kembali : ";
   cin >> r;
   } 
   cout << "Masukan Nilai r: ";
   cin >> r;
   while (r < 0) {
   cout << " Masukan Nilai r Kembali: ";
   cin >> r;
   }
   
   cout << "Nilai Permutasi " << r << " dari " << n << "
adalah " << Permutasi (n, r ) << endl

   system ("PAUSE") ;
   RETURN (0) ;
}
