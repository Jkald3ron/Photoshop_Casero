//
// Created by duesan on 22/09/22.
//
#include <fstream>
#include <iostream>
#include "cstring"
using namespace std;

// This code
void BinToImage() {
    try{
        remove("Result.jpg");
    }
    catch (bool){

    }
    ofstream image("Result.jpg", ios::out | ios::app);
    ifstream binary("bin_image_data.txt", ios::in | ios::app | ios:: binary);
    char contain;
    while (!binary.eof()) {
        contain = binary.get();
        image.put(contain);
    }
    image.close();
    binary.close();
}

