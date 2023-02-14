#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double count_dg(int num, int tot, int  level, int depth);
double sum_dg(int num, int m, int sum, int  level, int depth);
void max_dig(string a, int level, int& depth, int& i, int& maxim, int aa);
int max(string a, int i, int aa, int ss);
//double min_dig(string a, int level, int& depth);
int main() {

    int num, m = 0 ,sum = 0, tot = 0 ;
    cout << "enter numeric "; cin >> num;
    ostringstream ss; ss << num;
    string a = ss.str();
    int depth = 0; 
    int i = 0;
    int maxim = 0;
    int aa = 0;
    max(a,  i, 0, ss);
    //max_dig(a, 1, depth, i, maxim, aa);
    cout << "Total  digits = " << count_dg(num, tot, 1, depth) << endl;
    cout << "Sum of  digits = " << sum_dg(num, m, sum, 1, depth)<< endl;
  //  cout << "Max digit = " << maxim<< endl;
  //  cout << "Min digit = " << min_dig(a, 1, depth) <<endl;
}

double count_dg( int num, int tot, int level, int depth) {
    if (level > depth) {
        depth = level;
    }
    cout << "level = " << level << endl;

    if (num > 0)
        return count_dg(num / 10, tot + 1, level + 1, depth);
    else
        return tot;


}
double sum_dg(int num, int m, int sum, int  level, int depth) {
     
    if (level > depth) {
        depth = level;
    }
    cout << "level = " << level << endl;

    if (num > 0)

        return sum_dg(num / 10, num % 10, sum + m, level + 1, depth);
    else
        return (sum + m);
}


int max(string a, int i, int aa, int ss) {
    if (i < a.length())
        ss << a[i];
    i++;

    max(a, i, aa, ss);
        return ss;

    

}
/*void max_dig(string a, int level, int& depth, int& i, int& maxim, int aa) {

    if (level > depth) {
        depth = level;
    }
    cout << "level = " << level << endl;

    
    if (i < a.length()) {
        stringstream ss; ss << a[i];
        ss >> aa;
        i++;
    }

    if (aa > maxim)
    {
        maxim = aa;
    }
    max_dig(a, level, depth, i, maxim, aa);
     
}          
double min_dig(string a, int  level, int depth) {
   
    if (level > depth) {
        depth = level;
    }
    cout << "level = " << level << endl;

    
    int aa; int minim = 10;
    for (int i = 0; i < a.length(); i++) {
        stringstream ss; ss << a[i];
        ss >> aa;
        if (aa < minim) { minim = aa; }
    }
    return minim;
}

/*int main()
{
    int num, num1, m, sum = 0, tot = 0;
    cout << "Enter the Number: ";
    cin >> num;
    while (num > 0)
    {
        tot++;
        num = num / 10;
    }

    cout << "Total Digits = " << tot << endl;

    cout << "Enter the Number: "; cin >> num1;
    while (num1 > 0)
    {
        m = num1 % 10;
        sum = sum + m;
        num1 = num1 / 10;
    }
    cout << "Sum of Digits = " << sum;
    cout << endl;
    return 0;

}

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << *min_element(begin(s), end(s)) << endl;
    return 0;
}


;/* int main() {
    
    int num, num1, m, sum = 0, tot = 0;

    cout << "sum of digits" << sum_dg(num, tot);

}
*/
