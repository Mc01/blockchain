#include <iostream>
#include <memory>
#include <string>


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
    /*
     * Consecutive number of current Block
     * */
    int number = 0;
    /*
     * Hash to previous block
     * */
    std::string previousHash = "0x0";
    /*
     *
     * */
    std::shared_ptr<std::string> body = nullptr;
    /*
     *
     * */
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
            const std::shared_ptr<std::string>&,
            int);
    /*
     *
     * */
    void getHeader();
    /*
     *
     * */
    void getBody();
    /*
     *
     * */
    void getHash();
    /*
     *
     * */
    std::string createHash();
};


typedef std::shared_ptr<Block> BlockPointer;
