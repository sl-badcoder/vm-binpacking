//-------------------------------------------------------------------------------------
#include <cstdint>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>
//-------------------------------------------------------------------------------------
// class for Virtual machine
class VM {
public:
    //-------------------------------------------------------------------------------------
    VM(bool lat_i, uint32_t dram_size) : lat_i(lat_i), dram_size(dram_size), vm_id(next_id++) {
    }

    bool get_lat_i() { return this->lat_i; }
    uint32_t get_dram_size() { return this->dram_size; }
    uint32_t get_vm_id() const { return this->vm_id; }
    //-------------------------------------------------------------------------------------
private:
    //-------------------------------------------------------------------------------------
    static uint32_t next_id;
    uint32_t vm_id;
    bool lat_i;
    uint32_t dram_size;
    //-------------------------------------------------------------------------------------
};

// -------------------------------------------------------------------------------------
// class for the Cores
class Core {
public:
    Core(uint32_t dram_size, uint32_t access_time_dram) : dram_size(dram_size), access_time_dram(access_time_dram) {
    }

private:
    uint32_t dram_size;
    uint32_t access_time_dram;
};

// -------------------------------------------------------------------------------------
// class to simulate memory pool
class Pool {
public:
    //-------------------------------------------------------------------------------------
    Pool(uint32_t pool_size, uint32_t access_time_pool) {
        this->access_time_pool = access_time_pool;
        this->pool_size = pool_size;
    };
    //-------------------------------------------------------------------------------------
private:
    //-------------------------------------------------------------------------------------
    uint32_t pool_size;
    uint32_t access_time_pool;
    //-------------------------------------------------------------------------------------
};
