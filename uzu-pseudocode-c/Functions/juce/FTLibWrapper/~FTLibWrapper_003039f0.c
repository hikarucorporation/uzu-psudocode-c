// Function : ~FTLibWrapper
// Namespace: juce:FTLibWrapper
// Entry    : 003039f0
// Prototype: undefined ~FTLibWrapper(FTLibWrapper * this)
// Body     : 003039f0 - 00303a21


/* juce::FTLibWrapper::~FTLibWrapper() */

void __thiscall juce::FTLibWrapper::~FTLibWrapper(FTLibWrapper *this)

{
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 00303a00 to 00303a04 has its CatchHandler @ 00303a2a */
    FT_Done_FreeType();
  }
  if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 00303a0e to 00303a12 has its CatchHandler @ 00303a22 */
    FcConfigDestroy();
  }
  operator_delete(this);
  return;
}


