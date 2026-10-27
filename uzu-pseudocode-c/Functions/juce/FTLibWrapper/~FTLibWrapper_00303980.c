// Function : ~FTLibWrapper
// Namespace: juce:FTLibWrapper
// Entry    : 00303980
// Prototype: undefined ~FTLibWrapper(FTLibWrapper * this)
// Body     : 00303980 - 003039bc


/* juce::FTLibWrapper::~FTLibWrapper() */

void __thiscall juce::FTLibWrapper::~FTLibWrapper(FTLibWrapper *this)

{
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 00303990 to 00303994 has its CatchHandler @ 003039c5 */
    FT_Done_FreeType();
  }
  if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 0030399e to 003039a2 has its CatchHandler @ 003039bd */
    FcConfigDestroy();
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


