// Function : getSharedCount
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cb60
// Prototype: int getSharedCount(SubsectionPixelData * this)
// Body     : 0032cb60 - 0032cb74


/* juce::SubsectionPixelData::getSharedCount() const */

int __thiscall juce::SubsectionPixelData::getSharedCount(SubsectionPixelData *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = (**(code **)(**(long **)(this + 0x50) + 0x40))();
  return iVar2 + iVar1 + -1;
}


