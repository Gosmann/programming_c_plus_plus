#include "std_lib_facilities.h"

int area(int length, int width){
    return length * width;
}

int framed_area(int length, int width){
    constexpr int frame_width = 2;

    if(length - frame_width <= 0 || width - frame_width <= 0){
        //printf("non-positive area() argument called by framed_area() \n");
    }

    return area(length - frame_width, width - frame_width);
}

int f(int x, int y, int z){
    
    int area1 = area(x, y);
    if(area1 <= 0) printf("non-positive area \n");
    int area2 = framed_area(1, z);
    if(area2 <= 0) printf("non-positive area \n");
    int area3 = framed_area(y, z);
    double ratio = double(area1)/area3;

    cout << area1 << " " << area2 << " " << area3 << " \n" ;

    return area1;
}

int main(){
    
    int x, y, z;

    while(1){

        cin >> x >> y >> z;

        int ans =  f(x, y, z);

    }

    return 0;
}