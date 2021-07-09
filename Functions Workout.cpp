//Clayton Bradford
//Second Programs
//Function Workout
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

//Prototypes
double print(double);
void header(ofstream&);
double read(ifstream&);
double sum(double, double);
double power(double, double);
double large(double, double);
double small(double, double);
double average(double, double);
double difference(double, double);

//File I/O
ifstream inf("Function.in");
ofstream out("Function.out");

//Header output to file
void header(ofstream& out)
{
    out << "\tFunction Workout Program\n\n";
}

//Data to be read from the infile
double read(ifstream& inf)
{
    double a;
    inf >> a;
    return a;
}

//Transfers the data to the outfile
double print(double b)
{
    out << "\t\t" << b << endl;
    return b;
}

//Sums up two numbers
double sum(double c, double d)
{
    return c + d;
}

//Averages two numbers
double division(double j,double h)
{
    return j / h;
}

//Difference of two numbers
double difference(double u, double y)
{
    return u - y;
}

//Raises the number to a power
double power(double e, double w)
{
    return pow(e,w);
}

//Largest of two numbers
double large(double t, double m)
{
    return max(t,m);
}

//Smallest of two numbers
double small(double d, double s)
{
    return min(d,s);
}

int main()
{
    //Variables for functions to be used
    double n1,n2,n3,n4,n5,total,average,subtract,exponent,
           largest,smallest,average_large,average_small,run;

    //Constants for the averages
    const double FIVE=5.0, FOUR=4.0;

    //function call to print the header
    header(out);

    //Causes all calculations to be 3 decimal places and fixed notation
    out << setprecision(3) << fixed;

    //Loop used to ensure all the data from infile has been read
    while(!inf.eof())
    {
        //variables assigned to functions to assign respective data to
        n1=read(inf);
        n2=read(inf);
        n3=read(inf);
        n4=read(inf);
        n5=read(inf);

        //Function calls to print the values to file
        out << "\tFive Values\n";
        print(n1);
        print(n2);
        print(n3);
        print(n4);
        print(n5);

        //Function calls to sum the values
        out << "\n\tSum of FIVE Numbers\n";
        total=sum(sum(sum(sum(n1,n2),n3),n4),n5);
        print(total);

        //Function call for average
        out << "\n\tAverage of the Numbers\n";
        average=division(total,FIVE);
        print(average);

        //Function call to find difference
        out << "\n\tDifference between FIRST and THIRD\n";
        subtract=difference(n1,n3);
        print(subtract);

        //Function call to find difference
        out << "\n\tDifference between SECOND and FOURTH\n";
        subtract=difference(n2,n4);
        print(subtract);

        //Function call to power a set of numbers
        out << "\n\tFIRST raised to THIRD\n";
        exponent=power(n1,n3);
        print(exponent);

        //Function call to power a set of numbers
        out << "\n\tSECOND raised to FIFTH\n";
        exponent=power(n2,n5);
        print(exponent);

        //Function call to find largest number
        out << "\n\tLargest of the FIVE NUMBERS\n";
        largest=large(large(large(large(n1,n2),n3),n4),n5);
        print(largest);

        //Function call to find the smallest number
        out << "\n\tSmallest of the FIVE NUMBERS\n";
        smallest=small(small(small(small(n1,n2),n3),n4),n5);
        print(smallest);

        //Function call to find average of 4 largest
        out << "\n\tAverage of FOUR LARGEST\n";
        average_large=division(difference(total,smallest),FOUR);
        print(average_large);

        //Function call to find average of 4 smallest
        out << "\n\tAverage of FOUR SMALLEST\n";
        average_small=divisio n(difference(total,largest),FOUR);
        print(average_small);

        //Function call to find running total
        out << "\n\tRUNNING TOTAL\n";
        print(n1);
        run=sum(n1,n2);
        print(run);
        run=sum(run,n3);
        print(run);
        run=sum(run,n4);
        print(run);
        run=sum(run,n5);
        print(run);

    }

    //flushes buffer
    out.close();
    inf.close();
    return 0;
}
