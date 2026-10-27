// Function : refreshBounds
// Namespace: juce:DrawableText
// Entry    : 002af5e0
// Prototype: undefined refreshBounds(DrawableText * this)
// Body     : 002af5e0 - 002af826


/* juce::DrawableText::refreshBounds() */

void __thiscall juce::DrawableText::refreshBounds(DrawableText *this)

{
  long *plVar1;
  Font *this_00;
  float fVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  uint uVar17;
  uint local_68;
  
  fVar11 = hypotf((float)*(undefined8 *)(this + 0x160) - (float)*(undefined8 *)(this + 0x168),
                  (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(this + 0x168) >> 0x20));
  fVar12 = hypotf((float)*(undefined8 *)(this + 0x160) - (float)*(undefined8 *)(this + 0x170),
                  (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(this + 0x170) >> 0x20));
  fVar14 = DAT_00652618;
  fVar16 = 0.0;
  if (fVar12 <= DAT_00652618) {
    fVar12 = DAT_00652618;
  }
  fVar13 = *(float *)(this + 0x178);
  fVar2 = *(float *)(this + 0x17c);
  if (fVar13 <= fVar12) {
    fVar12 = fVar13;
  }
  bVar4 = fVar13 < DAT_00652618;
  uVar17 = -(uint)bVar4 & (uint)DAT_00652618;
  if (fVar11 <= DAT_00652618) {
    fVar11 = DAT_00652618;
  }
  if (fVar2 <= fVar11) {
    fVar11 = fVar2;
  }
  local_68 = -(uint)(fVar2 < DAT_00652618) & (uint)DAT_00652618 |
             ~-(uint)(fVar2 < DAT_00652618) & (uint)fVar11;
  this_00 = (Font *)(this + 0x188);
  lVar5 = *(long *)(this + 0x180);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)this_00;
  *(long *)this_00 = lVar5;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Font::setHeight((float)(uVar17 | ~-(uint)bVar4 & (uint)fVar12),this_00);
  Font::setHorizontalScale(local_68,this_00);
  uVar15 = (**(code **)(*(long *)this + 0x1a8))(this);
  fVar12 = (float)((ulong)uVar15 >> 0x20);
  fVar11 = (float)uVar15;
  if (*(long *)(this + 0x30) == 0) {
    uVar15 = 0;
    iVar10 = 0;
  }
  else {
    uVar15 = 0;
    lVar5 = __dynamic_cast(*(long *)(this + 0x30),&Component::typeinfo,&DrawableComposite::typeinfo,
                           0);
    iVar10 = 0;
    if (lVar5 != 0) {
      uVar15 = *(undefined8 *)(lVar5 + 0xf0);
      iVar10 = (int)((ulong)uVar15 >> 0x20);
    }
  }
  iVar6 = -0x80000000;
  iVar9 = -0x80000000;
  if (DAT_00653430 < fVar11) {
    fVar13 = floorf(fVar11);
    iVar9 = (int)fVar13;
  }
  if (DAT_00653430 < fVar12) {
    fVar13 = floorf(fVar12);
    iVar6 = (int)fVar13;
  }
  iVar8 = 0x7fffffff;
  iVar7 = 0x7fffffff;
  if (fVar11 + fVar14 < DAT_00653434) {
    fVar14 = ceilf(fVar11 + fVar14);
    iVar7 = (int)fVar14;
  }
  if (fVar12 + fVar16 < DAT_00653434) {
    fVar14 = ceilf(fVar12 + fVar16);
    iVar8 = (int)fVar14;
  }
  *(ulong *)(this + 0xf0) = CONCAT44(-iVar6,-iVar9);
  Component::setBounds
            ((Component *)this,(int)uVar15 + iVar9,iVar10 + iVar6,iVar7 - iVar9,iVar8 - iVar6);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


