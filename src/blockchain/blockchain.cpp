#include "blockchain/blockchain.h"

Blockchain::Blockchain() {
    resetDataElements();
}

void Blockchain::resetDataElements() {
    this->dataElements = std::make_shared<StringVector>();
}

void Blockchain::addDataElement(const std::string& _dataElement) {
    this->dataElements->push_back(_dataElement);
}

void Blockchain::createBlock() {
    BlockPointer blockPointer = std::make_shared<Block>(
            this->nextBlockNumber++,
            this->previousBlockHash,
            std::move(*(this->dataElements)) );
    resetDataElements();
    blocks.push_back(blockPointer);
}

void Blockchain::getBlock(int i) {
    BlockPointer blockPointer = this->blocks[i];
    blockPointer->getHeader();
    blockPointer->getBody();
    blockPointer->getHash();
}
