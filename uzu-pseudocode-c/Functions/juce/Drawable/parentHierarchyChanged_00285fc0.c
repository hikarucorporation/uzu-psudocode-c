// Function : parentHierarchyChanged
// Namespace: juce:Drawable
// Entry    : 00285fc0
// Prototype: undefined parentHierarchyChanged(Drawable * this)
// Body     : 00285fc0 - 00286120


/* juce::Drawable::parentHierarchyChanged() */

void __thiscall juce::Drawable::parentHierarchyChanged(Drawable *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float __x;
  undefined8 uVar10;
  undefined8 extraout_XMM1_Qa;
  float local_48;
  float fStack_44;
  
  uVar10 = (**(code **)(*(long *)this + 0x1a8))();
  __x = (float)((ulong)uVar10 >> 0x20);
  fVar9 = (float)uVar10;
  if (*(long *)(this + 0x30) == 0) {
    iVar2 = 0;
    iVar5 = 0;
  }
  else {
    uVar10 = 0;
    lVar1 = __dynamic_cast(*(long *)(this + 0x30),&Component::typeinfo,&DrawableComposite::typeinfo,
                           0);
    iVar5 = 0;
    if (lVar1 != 0) {
      uVar10 = *(undefined8 *)(lVar1 + 0xf0);
      iVar5 = (int)((ulong)uVar10 >> 0x20);
    }
    iVar2 = (int)uVar10;
  }
  iVar7 = -0x80000000;
  if (DAT_00653430 < fVar9) {
    fVar8 = floorf(fVar9);
    iVar7 = (int)fVar8;
  }
  iVar4 = -0x80000000;
  if (DAT_00653430 < __x) {
    fVar8 = floorf(__x);
    iVar4 = (int)fVar8;
  }
  local_48 = (float)extraout_XMM1_Qa;
  fStack_44 = (float)((ulong)extraout_XMM1_Qa >> 0x20);
  iVar6 = 0x7fffffff;
  iVar3 = 0x7fffffff;
  if (fVar9 + local_48 < DAT_00653434) {
    fVar9 = ceilf(fVar9 + local_48);
    iVar3 = (int)fVar9;
  }
  if (__x + fStack_44 < DAT_00653434) {
    fVar9 = ceilf(__x + fStack_44);
    iVar6 = (int)fVar9;
  }
  *(ulong *)(this + 0xf0) = CONCAT44(-iVar4,-iVar7);
  Component::setBounds((Component *)this,iVar2 + iVar7,iVar5 + iVar4,iVar3 - iVar7,iVar6 - iVar4);
  return;
}


