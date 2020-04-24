//
// Created by taohu on 2020/4/17.
//

#include <iostream>

using namespace std;

int main() {
    int a=10;
    int arr[]={1,2,3};
    char str[]="hello";
    int len_a = sizeof(a);
    int len_arr = sizeof(arr);
    int len_str = sizeof(str);

    printf("len_a=%d,len_arr=%d,len_str=%d\n",len_a,len_arr,len_str);
}