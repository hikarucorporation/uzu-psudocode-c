// Function : getDrawableBounds
// Namespace: juce:DrawableShape
// Entry    : 00286740
// Prototype: undefined getDrawableBounds(DrawableShape * this)
// Body     : 00286740 - 002867cb


/* juce::DrawableShape::getDrawableBounds() const */

void __thiscall juce::DrawableShape::getDrawableBounds(DrawableShape *this)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if ((((0.0 < *(float *)(this + 0x160)) && (this[0x203] != (DrawableShape)0x0)) &&
      (lVar1 = *(long *)(this + 0x208), lVar1 != 0)) && ((long)*(int *)(lVar1 + 0x24) != 0)) {
    lVar2 = 0;
    do {
      if (*(char *)(*(long *)(lVar1 + 0x18) + 0xb + lVar2) != '\0') {
        return;
      }
      bVar3 = (long)*(int *)(lVar1 + 0x24) * 0x10 + -0x10 != lVar2;
      lVar2 = lVar2 + 0x10;
    } while (bVar3);
  }
  return;
}


