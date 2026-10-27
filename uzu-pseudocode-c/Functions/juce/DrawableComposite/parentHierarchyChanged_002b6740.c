// Function : parentHierarchyChanged
// Namespace: juce:DrawableComposite
// Entry    : 002b6740
// Prototype: undefined parentHierarchyChanged(DrawableComposite * this)
// Body     : 002b6740 - 002b678e


/* juce::DrawableComposite::parentHierarchyChanged() */

void __thiscall juce::DrawableComposite::parentHierarchyChanged(DrawableComposite *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x30) != 0) {
    lVar1 = __dynamic_cast(*(long *)(this + 0x30),&Component::typeinfo,&typeinfo,0);
    if (lVar1 != 0) {
      *(ulong *)(this + 0xf0) =
           CONCAT44(*(int *)(lVar1 + 0xf4) - (int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20),
                    *(int *)(lVar1 + 0xf0) - (int)*(undefined8 *)(this + 0x38));
    }
  }
  return;
}


