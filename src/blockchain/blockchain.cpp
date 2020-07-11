#include "blockchain/blockchain.h"

void Blockchain::addDataElement(const std::string& _dataElement) {
    dataElements.push_back(_dataElement);
}

void Blockchain::createBlock() {
    std::shared_ptr<std::string> body(dataElements.data());
    BlockPointer blockPointer(new Block(
            nextBlockNumber++,
            previousBlockHash,
            body,
            dataElements.size()
    ));
    blocks.push_back(blockPointer);

    blockPointer->getHeader();
    blockPointer->getBody();
    blockPointer->getHash();
}
