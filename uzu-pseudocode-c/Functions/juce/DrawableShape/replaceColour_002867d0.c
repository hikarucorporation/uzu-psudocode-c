// Function : replaceColour
// Namespace: juce:DrawableShape
// Entry    : 002867d0
// Prototype: undefined8 replaceColour(DrawableShape * this, int param_1, undefined4 param_2)
// Body     : 002867d0 - 0028687a


/* juce::DrawableShape::replaceColour(juce::Colour, juce::Colour) */

undefined8 __thiscall
juce::DrawableShape::replaceColour(DrawableShape *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(this + 0x1d0) == param_1) && (*(long *)(this + 0x1d8) == 0)) &&
     (*(long *)(this + 0x1e0) == 0)) {
    *(undefined4 *)(this + 0x1d0) = param_2;
    *(undefined8 *)(this + 0x1d8) = 0;
    *(undefined8 *)(this + 0x1e0) = 0;
    *(undefined1 (*) [16])(this + 0x1e8) = ZEXT416(DAT_005d9038);
    *(undefined8 *)(this + 0x1f8) = 0x3f800000;
    uVar2 = 1;
    iVar1 = *(int *)(this + 0x200);
  }
  else {
    uVar2 = 0;
    iVar1 = *(int *)(this + 0x200);
  }
  if ((iVar1 != param_1) || (*(long *)(this + 0x208) != 0)) {
    return uVar2;
  }
  if (*(long *)(this + 0x210) == 0) {
    *(undefined4 *)(this + 0x200) = param_2;
    *(undefined8 *)(this + 0x208) = 0;
    *(undefined8 *)(this + 0x210) = 0;
    *(undefined1 (*) [16])(this + 0x218) = ZEXT416(DAT_005d9038);
    *(undefined8 *)(this + 0x228) = 0x3f800000;
    return 1;
  }
  return uVar2;
}


