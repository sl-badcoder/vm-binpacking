//-------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
//-------------------------------------------------------------------------------------
#include "storage.hpp"
//-------------------------------------------------------------------------------------
uint32_t VM::next_id = 0;
//-------------------------------------------------------------------------------------
int main (int argc, const char * argv[]) {
    std::cout << "[INFO]: Programm started" << std::endl;
    //-------------------------------------------------------------------------------------
    // create VMS
    std::vector<VM> vms_vector;
    int MAX_VM = 10;
    bool lat_i= 1;
    for (int i = 0; i < MAX_VM; i++) {
        vms_vector.push_back(VM(lat_i, i * 10));
        lat_i = !lat_i;
    }
    for (int i = 0; i < vms_vector.size(); i++) {
        std::cout << vms_vector[i].get_vm_id() << " ";
    }std::cout << std::endl;
    //-------------------------------------------------------------------------------------
    return 0;
}