// Function : mouseWheelMove
// Namespace: juce:Slider
// Entry    : 002e3500
// Prototype: undefined mouseWheelMove(Slider * this, ulong * param_1, ulong * param_2)
// Body     : 002e3500 - 002e37ef


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __thiscall juce::Slider::mouseWheelMove(Slider *this,ulong *param_1,ulong *param_2)

{
  Pimpl *pPVar1;
  long *plVar2;
  long lVar3;
  Slider *pSVar4;
  long *plVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar15;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar16;
  long local_78;
  undefined1 local_70 [88];
  
  pSVar4 = this;
  do {
    if ((*(ushort *)(pSVar4 + 0xe8) & 0x8000) != 0) goto LAB_002e3555;
    pSVar4 = *(Slider **)(pSVar4 + 0x30);
  } while (pSVar4 != (Slider *)0x0);
  pPVar1 = *(Pimpl **)(this + 0x1a0);
  if ((pPVar1[0x23b] == (Pimpl)0x0) || (*(int *)(pPVar1 + 0x20) - 9U < 2)) {
LAB_002e3555:
    for (plVar2 = *(long **)(this + 0x30); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[6]) {
      plVar5 = plVar2;
      while ((*(ushort *)(plVar5 + 0x1d) & 0x8000) == 0) {
        plVar5 = (long *)plVar5[6];
        if (plVar5 == (long *)0x0) {
          if (plVar2 == (long *)0x0) {
            return;
          }
          MouseEvent::getEventRelativeTo((float *)&local_78,param_1,plVar2);
          (**(code **)(*plVar2 + 0x48))(plVar2,&local_78,param_2);
          return;
        }
      }
    }
  }
  else if (((param_1[8] != *(ulong *)(pPVar1 + 0x1e8)) &&
           (*(ulong *)(pPVar1 + 0x1e8) = param_1[8],
           *(double *)(pPVar1 + 0xf8) <= *(double *)(pPVar1 + 0x100) &&
           *(double *)(pPVar1 + 0x100) != *(double *)(pPVar1 + 0xf8))) &&
          ((param_1[2] & 0x1f0) == 0)) {
    if (*(Label **)(pPVar1 + 600) != (Label *)0x0) {
      Label::hideEditor(*(Label **)(pPVar1 + 600),'\0');
    }
    (**(code **)(**(long **)(pPVar1 + 0x50) + 0x10))(&local_78);
                    /* try { // try from 002e362b to 002e3635 has its CatchHandler @ 002e3824 */
    dVar7 = (double)(**(code **)(local_78 + 0x20))(local_70);
                    /* try { // try from 002e363b to 002e3640 has its CatchHandler @ 002e381c */
    (**(code **)(local_78 + 0x58))(local_70);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *param_2;
    fVar16 = SUB164(_DAT_005d91c0 & auVar14,4);
    auVar9._4_4_ = fVar16;
    auVar9._0_4_ = fVar16;
    auVar9._8_4_ = fVar16;
    auVar9._12_4_ = fVar16;
    uVar15 = (uint)(*param_2 >> 0x20);
    uVar6 = -(uint)(fVar16 < SUB164(_DAT_005d91c0 & auVar14,0));
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = uVar6;
    auVar11._0_4_ = ~uVar6 & uVar15;
    auVar11._4_4_ = ~(uint)fVar16 & uVar15;
    auVar11._8_4_ = ~(uint)fVar16 & uVar15;
    auVar11._12_4_ = ~(uint)fVar16 & uVar15;
    auVar11 = auVar11 | (auVar14 ^ _DAT_006524b0) & auVar10;
    auVar12 = auVar11;
    if ((char)param_2[1] != '\0') {
      auVar12._0_4_ = auVar11._0_4_ ^ (uint)DAT_006524b0;
      auVar12._4_4_ = 0;
      auVar12._8_4_ = auVar11._8_4_ ^ DAT_006524b0._8_4_;
      auVar12._12_4_ = auVar11._12_4_ ^ DAT_006524b0._12_4_;
    }
    if (*(int *)(pPVar1 + 0x20) == 8) {
      dVar8 = (double)auVar12._0_4_ * *(double *)(pPVar1 + 0x108);
    }
    else {
      dVar8 = (double)auVar12._0_4_ * _DAT_005de6d0;
      dVar13 = (double)(**(code **)(**(long **)(pPVar1 + 0x18) + 0x1c8))(dVar7);
      dVar13 = dVar13 + dVar8;
      if (((*(uint *)(pPVar1 + 0x20) & 0xfffffffc) == 4) && (pPVar1[0x1c4] == (Pimpl)0x0)) {
        dVar8 = floor(dVar13);
        dVar13 = dVar13 - dVar8;
      }
      else {
        dVar8 = _DAT_005d9000;
        if (dVar13 <= _DAT_005d9000) {
          dVar8 = dVar13;
        }
        dVar13 = (double)(~-(ulong)(dVar13 < 0.0) & (ulong)dVar8);
      }
      dVar8 = (double)(**(code **)(**(long **)(pPVar1 + 0x18) + 0x1c0))(dVar13);
      dVar8 = dVar8 - dVar7;
    }
    dVar13 = (double)(_DAT_005d91b0 & (ulong)dVar8);
    if (dVar13 == DAT_005d94e0) {
      if ((dVar8 == 0.0) && (!NAN(dVar8))) {
        return;
      }
    }
    else {
      if (dVar13 <= DAT_005db368) {
        return;
      }
      if (dVar13 <= DAT_005db370 * dVar13) {
        return;
      }
    }
    if (dVar13 <= *(double *)(pPVar1 + 0x108)) {
      dVar13 = *(double *)(pPVar1 + 0x108);
    }
    dVar8 = *(double *)(&DAT_0065b160 + (ulong)(dVar8 < 0.0) * 8);
    lVar3 = *(long *)(pPVar1 + 0x18);
    Pimpl::sendDragStart(*(Pimpl **)(lVar3 + 0x1a0));
                    /* try { // try from 002e37bc to 002e37d5 has its CatchHandler @ 002e37f8 */
    dVar7 = (double)(**(code **)(**(long **)(pPVar1 + 0x18) + 0x1d0))
                              (dVar13 * dVar8 + dVar7,*(long **)(pPVar1 + 0x18),0);
    Pimpl::setValue(dVar7,pPVar1,2);
    pPVar1 = *(Pimpl **)(lVar3 + 0x1a0);
    if (pPVar1 != (Pimpl *)0x0) {
                    /* try { // try from 002e37e6 to 002e37ea has its CatchHandler @ 002e37f0 */
      Pimpl::sendDragEnd(pPVar1);
    }
  }
  return;
}


