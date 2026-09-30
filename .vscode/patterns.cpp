#include <iostream>
using namespace std;

void printP1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void printP2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void printP3(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << j << " ";
    }
    cout << "\n";
  }
}

void printP4(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << i << " ";
    }
    cout << "\n";
  }
}

//This pattern was solved using my own approach by simply reversing the second loop.
void printP5(int n){
  for(int i=0; i<n; i++){
    for(int j=n; j>i; j--){
      cout << "* ";
    }
    cout << "\n";
  }
}
//Same pattern as above but solved using the formula n-i+1.
void printP6(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout << j;
    }
    cout << "\n";
  }
}

void printP7(int n){
  
  for(int i=0; i<n; i++){
    
    //space
    for(int s=0; s<n-i-1; s++){
      cout << " ";
    }
    //stars
    for(int j=0; j<i*2+1; j++){
      cout << "*";
    }
    //space
    for(int s2=0; s2<n-i-1; s2++){
      cout << " ";    
    }

    cout << "\n";
  }
}

void printP8(int n){
  for(int i=0; i<n; i++){
    //space
    for(int s1=0; s1<i; s1++){
      cout << " ";
    }
    
    //stars
    for(int j=0; j<2*n-(2*i+1); j++){
      cout << "*";
    }
    
    //space
    for(int s2=0; s2<i; s2++){
      cout << " ";
    }

    cout << "\n";
  }
}

void printCombined(int n){
  for(int i=0; i<n; i++){
    //space
    for(int s1=0; s1<n-i-1; s1++){
      cout << " ";
    }

    //stars
    for(int j=0; j<2*i+1; j++){
      cout << "*";
    }

    //space
    for(int s2=0; s2<n-i-1; s2++){
      cout << " ";
    }

    cout << "\n";
  }

  for(int i=0; i<n; i++){
    //space
    for(int s1=0; s1<i; s1++){
      cout << " ";
    }
    
    //stars
    for(int j=0; j<2*n-(2*i+1); j++){
      cout << "*";
    }
    
    //space
    for(int s2=0; s2<i; s2++){
      cout << " ";
    }

    cout << "\n";
  }
}

void printP10(int n){
  for(int i=1; i<=2*n-1; i++){
    if(i<=n){
      for(int j=1; j<=i; j++){
      cout << "*";
    }
    cout << "\n";
    }
    else{
      for(int j=1; j<=2*n-i; j++){
        cout << "*";
      }
      cout << "\n";
    }
  }
}

void printP11(int n){
  for(int i=1; i<=n; i++){
    int start = 1;
    if(i%2 == 0){ start = 0; }
    else{ start = 1;}
    for(int j=1;j <=i; j++){
      cout << start;
      start = 1 - start;
    }
    cout << "\n";
  }
}

void printP12(int n){
  for(int i=1; i<=n; i++){
    //numbers
    for(int num1=1; num1<=i; num1++){
      cout << num1;
    }
    //spaces
    for(int space=1; space<=(n*2)-(i*2); space++){
      cout << " ";
    }
    //numbers
    for(int num2=i; num2>=1; num2--){
      cout << num2;
    }

    cout << "\n";
  }
}

void printP13(int n){
  int number = 1;
  for(int i=1; i<=n; i++){

    for(int num=1; num<=i; num++){
      cout << number;
      number++;
      cout << " ";
    }
    cout << "\n";
  }
}

void printP14(int n){
  for(int i=1; i<=n; i++){
    for(char a='A'; a< 'A'+i; a++){
      cout << a << " ";
    }
  cout << "\n";
  }
}

void printP15(int n){
  for(int i=1; i<=n; i++){
    for(char b='A'; b<='A'+n-i; b++){
      cout << b << " ";
    }
    cout << "\n";
  }
}

void printP16(int n){
  char c = 'A';
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << c << " ";
    }
    cout << "\n";
    c++;
  }
}

void printP17(int n){
  for(int i=1; i<=n; i++){

    //spaces
    for(int s1=0; s1<(n*2)-i; s1++){
      cout << " ";
    }

    //pattern 1
    for(char d='A'; d<='A'+i-1; d++){
      cout << d;
    }
    //pattern 2
    for(char e='A'+i-2; e>='A'; e--){
      cout << e;
    }

    //spaces
    for(int s2=0; s2<(n*2)-i; s2++){
      cout << " ";
    }

    cout << "\n";

  }
}

void printP17b(int n){
  for(int i=1; i<=n; i++){

    //spaces
    for(int s1=0; s1<(n*2)-i; s1++){
      cout << " ";
    }

    //pattern
    char ch= 'A';
    int breakpoint = (2*i+1) / 2;
    for(int j=1; j<=2*i +1; j++){
      cout << ch;
      if(j<=breakpoint)ch++;
      else ch--;
    }
    

    //spaces
    for(int s2=0; s2<((n*2)-i); s2++){
      cout << " ";
    }

    cout << "\n";

}
}

void printP18(int n){//my approach
  for(int i=1; i<=n; i++){
    char ch = 'E';
    for(int j=1; j<=i; j++){
      cout << ch << " ";
      ch--;
    }
    cout << "\n";
    
  }
}

void printP18B(int n){//striver's approach
  for(int i=1; i<=n; i++){
    for(char ch = 'E'-i+1; ch<='E'; ch++){
      cout << ch << " ";
    }
    cout << "\n";
  }
}

void printP19(int n){
  for(int i=1; i<=n; i++){
    //pattern1
    for(int p1=n; p1>=i; p1--){
      cout << "*";
    }

    //spaces
    for(int s1=0; s1<=2*i-2; s1++){
      cout << " ";
    }

    //pattern2
    for(int p2=n; p2>=i; p2--){
      cout << "*";
    }

    cout << "\n";
  }

  for(int p=1; p<=n; p++){
    //pattern1
    for(int p2p1=1; p2p1<=p; p2p1++){
      cout << "*";
    }

    //spaces
    for(int s2=(2*n)-(2*p); s2>=0; s2--){
      cout << " ";
    }

    //pattern2
    for(int p2p2=1; p2p2<=p; p2p2++){
      cout << "*";
    }
    cout << "\n";
  }
}

void printP20(int n){
  for(int i=1; i<=n; i++){

    //pattern1p1
    for(int p1=1; p1<=i; p1++){
      cout << "*";
    }

    //spaces
    for(int s1=1; s1<=2*n-(2*i); s1++){
      cout << " ";
    }

    //pattern1p2
    for(int p2=1; p2<=i; p2++){
      cout << "*";
    }

    cout << "\n";
  }

  for(int i=n-1; i>=1; i--){

    //pattern2p1
    for(int p1=1; p1<=i; p1++){
      cout << "*";
    }

    //spaces
    for(int s=1; s<=(2*n)-(2*i); s++){
      cout << " ";
    }

    //pattern2p2
    for(int p2=1; p2<=i; p2++){
      cout << "*";
    }

    cout << "\n";
  }
}

void printP20b(int n){
  for(int i=1; i<(2*n); i++){
    int stars = i;
    if(i>=n) stars = (2*n)-i;
    
    for(int p=1; p<=stars; p++){
      cout << "*";
    }

    int space = 1;
    if(i<=n) space=(2*n)-(2*i);
    else{
      space=(2*i)-(2*n);
    }
    
    for(int s=1; s<=space; s++){
      cout << " ";
    }

    for(int p2=1; p2<=stars; p2++){
      cout << "*";
    }

    cout << "\n";
  }
}

void printP21(int n){
  for(int i=1; i<=n; i++){
    
    if(i*n == n || i*n == n*n){
    for(int j=1; j<=n; j++){
      cout << "*";
    }
  }
  else{
    for(int k=1; k<=n; k++){
      if(k*n == n || k*n == n*n){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
  }
    cout << "\n";
  }
}

void printP22(int n){
  for(int i=0; i<2*n-1; i++){
    for(int j=0; j<2*n-1; j++){
      int top = i;
      int left = j;
      int right = (2*n-1) - 1 - j;
      int bottom = (2*n-1)- 1 - i;
      cout << n - min(min(top, bottom), min(left, right));
    }
    cout << "\n";
  }
}

int main() {

  int n;
  cin >> n;
  cout << "Pattern 1: " << endl;
  printP1(n);
  cout << "\n";
  cout << "Pattern 2: " << endl;
  printP2(n);
  cout << "\n";
  cout << "Pattern 3: " << endl;
  printP3(n);
  cout << "\n";
  cout << "Pattern 4: " << endl;
  printP4(n);
  cout << "\n";
  cout << "Pattern 5: " << endl;
  printP5(n);
  cout << "\n";
  cout << "Pattern 6: " << endl;
  printP6(n);
  cout << '\n';
  cout << "Pattern 7: " << endl;
  printP7(n);
  cout << "\n";
  cout << "Pattern 8: " << endl;
  printP8(n);
  cout << "\n";
  cout << "Combined Pattern (10): " << endl;
  printCombined(n);
  cout << "\n";
  cout << "Pattern 10: " << endl;
  printP10(n);
  cout << "\n";
  cout << "Pattern 11: " << endl;
  printP11(n);
  cout << "\n";
  cout << "Pattern 12: "<< endl;
  printP12(n);
  cout << "\n";
  cout << "Pattern 13: "<< endl;
  printP13(n);
  cout << "\n";
  cout << "Pattern 14: "<< endl;
  printP14(n);
  cout << "\n";
  cout << "Pattern 15: " << endl;
  printP15(n);
  cout << "\n";
  cout << "Pattern 16: " << endl;
  printP16(n);
  cout << "\n";
  cout << "Pattern 17: " << endl;
  printP17(n);
  cout << "\n";
  cout << "Pattern 17b: " << endl;
  printP17b(n);
  cout << "\n";
  cout << "Pattern 18: " << endl;
  printP18(n);
  cout << "\n";
  cout << "Pattern 18B: " << endl;
  printP18B(n);
  cout << "\n";
  cout << "Pattern 19: " << endl;
  printP19(n);
  cout << "\n";
  cout << "Pattern 20: " << endl;
  printP20b(n);
  cout << "\n";
  cout << "Pattern 21: " << endl;
  printP21(n);
  cout << "\n";
  cout << "Pattern 22:  " << endl;
  printP22(n);
  return 0;

}