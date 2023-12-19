#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
        int count = 0;
        float sum = 0;
        float sum_of_square = 0; 
        string textline;
        ifstream source;
        source.open("score.txt");
        while (getline(source, textline)){
                sum += atof(textline.c_str());
                sum_of_square += atof(textline.c_str())* atof(textline.c_str());
                count++;
        }
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum/count << "\n";
        cout << "Standard deviation = " << sqrt(((1.0/(count))*sum_of_square)-(sum/count)*(sum/count));
}