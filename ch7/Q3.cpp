/* Chapter 7，Programming exercises 7-3*/
#include <iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void input_and_show_box(box box){
    cout<<"Maker: "<<box.maker<<endl;
    cout<<"Height: "<<box.height<<endl;
    cout<<"Width: "<<box.width<<endl;
    cout<<"Length: "<<box.length<<endl;
    cout<<"volume: "<<box.volume<<endl;
}

void compute_volume(box * box){
    box->volume=box->height*box->width*box->length;
}

int main()
{   
    box box_01 = {"Mark Smith",3.5,2.5,1,0.0};
    cout<<"test 01:"<<endl;
    input_and_show_box(box_01); 
    cout<<"------------------"<<endl;
    cout<<"test 02:"<<endl;
    compute_volume(&box_01);
    input_and_show_box(box_01);
    return 0;
    
}

