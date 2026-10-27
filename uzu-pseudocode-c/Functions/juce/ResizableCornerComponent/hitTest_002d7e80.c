// Function : hitTest
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7e80
// Prototype: undefined4 hitTest(ResizableCornerComponent * this, int param_1, int param_2)
// Body     : 002d7e80 - 002d7eaf


/* juce::ResizableCornerComponent::hitTest(int, int) */

undefined4 __thiscall
juce::ResizableCornerComponent::hitTest(ResizableCornerComponent *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x40) < 1) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x44);
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return CONCAT31((int3)(iVar2 >> 10),
                  (iVar1 - (param_1 * iVar1) / *(int *)(this + 0x40)) - (iVar2 >> 2) <= param_2);
}


