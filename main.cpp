#include <iostream>
#define N 8
using namespace std;

int main()
{
/* int N;
cout << "Enter number of elements " << endl;     //We can enter the number of elements ourselves.(Remove the comment mark);
cin >> N; */

int a[N]= {8, 5, 9, 10, 8, 8, 4, 6};
   int sum = 0, maximum, minimum, max_i;
     double average;
   /* a[0] = 10;
      a[7] = 9;            // we can change the array value. (Remove the comment mark);
      a[3] = 1; */
       for (int i = 0; i < N; i++){
       sum = sum + a[i];              // sum += a[i];   sum = 8+5+9+10+8+8+4+6 = 58;
       };
   cout << "Elements sum = " << sum << endl;
   average = (double)sum / N;                    // average = 58 / 8 = 7,25;
   cout << "Average = " << average << endl;
   cout << endl;
   maximum = a[0];
   minimum = a[0];
   for (int i=0; i<N; i++){
    if (a[i] > maximum) { maximum = a[i]; max_i = i; };
    if (a[i] < minimum) minimum = a[i];
    if (a[i] > average) cout << a[i] << " ";
   }
   cout << endl << endl;
   cout << "Maximum = " << maximum << " Its place = " << max_i + 1<<endl;
   cout << "Minimum = " << minimum << endl;
   return 0;
}
