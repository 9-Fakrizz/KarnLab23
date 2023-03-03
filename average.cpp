#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){

    float sum;
     if(argc > 1)
     {
        for(int i = 0; i < argc ; i++ ){
            sum += atof(argv[i]);
        }
        sum = sum/(argc-1);

        cout <<"---------------------------------\n";
        cout <<"Average of "<<argc-1<<" numbers = "<<sum <<"\n" ;
        cout <<"---------------------------------\n";

     }
     else{
        cout << "Please input numbers to find average.";
     }
     return 0;

}