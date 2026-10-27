// Function : getTopLeft
// Namespace: juce:ImagePixelDataNativeExtensions:Concrete_juce__SubsectionPixelData__getNativeExtensions____Wrapped_
// Entry    : 0032d200
// Prototype: ulong getTopLeft(Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> * this)
// Body     : 0032d200 - 0032d262


/* juce::ImagePixelDataNativeExtensions::Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>::getTopLeft()
   const */

ulong __thiscall
juce::ImagePixelDataNativeExtensions::
Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>::getTopLeft
          (Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> *this)

{
  long lVar1;
  long *in_RAX;
  ulong uVar2;
  long *local_18;
  
  local_18 = in_RAX;
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x50) + 0x68))(&local_18);
                    /* try { // try from 0032d21f to 0032d221 has its CatchHandler @ 0032d263 */
  uVar2 = (**(code **)(*local_18 + 0x10))();
  lVar1 = *(long *)(*(long *)(this + 8) + 0x58);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return (ulong)(uint)((int)lVar1 + (int)uVar2) |
         (uVar2 & 0xffffffff00000000) + lVar1 & 0xffffffff00000000;
}


