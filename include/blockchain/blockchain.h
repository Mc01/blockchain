#include <memory>
#include <string>
#include <vector>
#include "block.h"
#include "utils/types.h"

class Blockchain {
    /*
     * Number of next mined Block
     * */
    int nextBlockNumber = 1;
    /*
     * Previous block Hash
     * */
    std::string previousBlockHash = "0x0";
    /*
     * Data elements are used to create new Block
     * */
    StringVectorPointer dataElements;
    /*
     * Blocks are stored and loaded from State
     * */
    std::vector<BlockPointer> blocks = {};
    void resetDataElements();
public:
    Blockchain();
    /*
     * Adds new data string as DataElement
     * */
    void addDataElement(const std::string&);
    void createBlock();
    void getBlock(int);
};
