#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "utils/types.h"

class Block {

private:
    /*
     * Hash of current current Block
     * Calculated from concat of:
     * - number
     * - previousHash
     * - body
     * */
    std::string hash = "0x0";
    int number = 0;
    std::string previousHash = "0x0";
    StringVectorPointer dataElements = nullptr;
    StringPointer body = nullptr;
    int elementsCount;

public:
    /*
     * Constructor args:
     * - int -> number of current block
     * - string -> hash of previous block
     * - ptr_of_string -> list of strings
     * */
    Block(
            int,
            const std::string&,
            StringVector );
    void getHeader();
    void getBody();
    void getHash();
    std::string createHash();
};


typedef std::shared_ptr<Block> BlockPointer;
