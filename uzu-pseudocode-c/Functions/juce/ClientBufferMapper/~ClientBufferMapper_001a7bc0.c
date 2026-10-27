// Function : ~ClientBufferMapper
// Namespace: juce:ClientBufferMapper
// Entry    : 001a7bc0
// Prototype: undefined ~ClientBufferMapper(ClientBufferMapper * this)
// Body     : 001a7bc0 - 001a7cd0


/* juce::ClientBufferMapper::~ClientBufferMapper() */

void __thiscall juce::ClientBufferMapper::~ClientBufferMapper(ClientBufferMapper *this)

{
  BigInteger *pBVar1;
  BigInteger *pBVar2;
  
  pBVar2 = *(BigInteger **)(this + 0x2a8);
  pBVar1 = *(BigInteger **)(this + 0x2b0);
  if (pBVar2 != pBVar1) {
    do {
      if (*(void **)(pBVar2 + 0x28) != (void *)0x0) {
        operator_delete(*(void **)(pBVar2 + 0x28));
      }
      BigInteger::~BigInteger(pBVar2);
      pBVar2 = pBVar2 + 0x50;
    } while (pBVar2 != pBVar1);
    pBVar2 = *(BigInteger **)(this + 0x2a8);
  }
  if (pBVar2 != (BigInteger *)0x0) {
    operator_delete(pBVar2);
  }
  pBVar2 = *(BigInteger **)(this + 0x290);
  pBVar1 = *(BigInteger **)(this + 0x298);
  if (pBVar2 != pBVar1) {
    do {
      if (*(void **)(pBVar2 + 0x28) != (void *)0x0) {
        operator_delete(*(void **)(pBVar2 + 0x28));
      }
      BigInteger::~BigInteger(pBVar2);
      pBVar2 = pBVar2 + 0x50;
    } while (pBVar2 != pBVar1);
    pBVar2 = *(BigInteger **)(this + 0x290);
  }
  if (pBVar2 != (BigInteger *)0x0) {
    operator_delete(pBVar2);
  }
  free(*(void **)(this + 0x178));
  if (*(void **)(this + 0x148) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x148));
  }
  free(*(void **)(this + 0x30));
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


