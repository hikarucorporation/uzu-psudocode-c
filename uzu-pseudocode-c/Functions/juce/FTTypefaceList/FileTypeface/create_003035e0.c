// Function : create
// Namespace: juce:FTTypefaceList:FileTypeface
// Entry    : 003035e0
// Prototype: FTFaceWrapper * create(FTFaceWrapper * param_1, long param_2, long * param_3)
// Body     : 003035e0 - 003035fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FTTypefaceList::FileTypeface::create(juce::ReferenceCountedObjectPtr<juce::FTLibWrapper>)
   const */

FTFaceWrapper * __cdecl
juce::FTTypefaceList::FileTypeface::create(FTFaceWrapper *param_1,long param_2,long *param_3)

{
  FTFaceWrapper::from(param_1,param_3,(undefined8 *)(param_2 + 0x20),*(int *)(param_2 + 0x18));
  return param_1;
}


