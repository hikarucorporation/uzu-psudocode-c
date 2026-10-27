// Function : paint
// Namespace: juce:Slider
// Entry    : 002e3910
// Prototype: undefined paint(Slider * this, undefined8 param_1)
// Body     : 002e3910 - 002e3d79


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::paint(juce::Graphics&) */

void __thiscall juce::Slider::paint(Slider *this,undefined8 param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  uint uVar11;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar12;
  uint uVar13;
  ushort uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar7 = *(long *)(this + 0x1a0);
  while ((*(long *)(this + 0x68) == 0 ||
         (pLVar12 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
         pLVar12 == (LookAndFeel_V4 *)0x0))) {
    this = *(Slider **)(this + 0x30);
    if (this == (Slider *)0x0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e3969 to 002e3972 has its CatchHandler @ 002e3d8d */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 002e3976 to 002e397d has its CatchHandler @ 002e3d7a */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar12 = Desktop::getDefaultLookAndFeel(Desktop::instance);
      uVar11 = *(uint *)(lVar7 + 0x20);
joined_r0x002e3997:
      if (uVar11 == 8) {
        return;
      }
      if ((uVar11 & 0xfffffffc) == 4) {
        dVar15 = (double)(**(code **)(**(long **)(lVar7 + 0x18) + 0x1c8))
                                   (*(undefined8 *)(lVar7 + 0xe0));
        (**(code **)(*(long *)(pLVar12 + 0x58) + 0x38))
                  ((float)dVar15,*(undefined4 *)(lVar7 + 0x1bc),*(undefined4 *)(lVar7 + 0x1c0),
                   pLVar12 + 0x58,param_1,*(undefined4 *)(lVar7 + 0x1f0),
                   *(undefined4 *)(lVar7 + 500),*(undefined4 *)(lVar7 + 0x1f8),
                   *(undefined4 *)(lVar7 + 0x1fc),*(undefined8 *)(lVar7 + 0x18));
        return;
      }
      uVar3 = *(undefined4 *)(lVar7 + 0x1f0);
      uVar4 = *(undefined4 *)(lVar7 + 500);
      uVar5 = *(undefined4 *)(lVar7 + 0x1f8);
      uVar6 = *(undefined4 *)(lVar7 + 0x1fc);
      dVar18 = *(double *)(lVar7 + 0xf8);
      dVar15 = *(double *)(lVar7 + 0x100);
      if (dVar15 <= dVar18) {
        dVar16 = DAT_005db338;
      }
      else {
        dVar1 = *(double *)(lVar7 + 0xe0);
        dVar16 = 0.0;
        if (dVar18 <= dVar1) {
          if (dVar1 <= dVar15) {
            dVar16 = (double)(**(code **)(**(long **)(lVar7 + 0x18) + 0x1c8))(dVar1);
            uVar11 = *(uint *)(lVar7 + 0x20);
            dVar15 = *(double *)(lVar7 + 0x100);
            dVar18 = *(double *)(lVar7 + 0xf8);
          }
          else {
            dVar16 = _DAT_005d9000;
          }
        }
      }
      uVar13 = uVar11 - 1;
      dVar21 = _DAT_005d9000 - dVar16;
      uVar14 = (ushort)(0xa05 >> ((byte)uVar13 & 0x1f));
      dVar1 = dVar21;
      dVar10 = dVar21;
      if ((uVar11 != 8) && (dVar1 = dVar16, dVar10 = dVar16, (0xa05U >> (uVar13 & 0x1f) & 1) != 0))
      {
        dVar1 = dVar21;
      }
      if (uVar13 < 0xc) {
        iVar8 = (int)*(undefined8 *)(lVar7 + 0x1d8);
        iVar9 = (int)((ulong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20);
      }
      else {
        iVar8 = (int)*(undefined8 *)(lVar7 + 0x1d8);
        iVar9 = (int)((ulong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20);
        dVar1 = dVar10;
      }
      dVar10 = (double)iVar9;
      dVar16 = (double)iVar8;
      dVar21 = dVar16;
      dVar22 = dVar10;
      if (dVar15 <= dVar18) {
        uVar14 = uVar14 & 1;
        dVar17 = DAT_005db338;
      }
      else {
        uVar14 = uVar14 & 1;
        dVar17 = *(double *)(lVar7 + 0xe8);
        if (dVar18 <= dVar17) {
          if (dVar17 <= dVar15) {
            dVar17 = (double)(**(code **)(**(long **)(lVar7 + 0x18) + 0x1c8))(dVar17);
            uVar11 = *(uint *)(lVar7 + 0x20);
            dVar15 = *(double *)(lVar7 + 0x100);
            dVar18 = *(double *)(lVar7 + 0xf8);
            uVar13 = uVar11 - 1;
            uVar14 = (ushort)(0xa05 >> ((byte)uVar13 & 0x1f)) & 1;
            dVar21 = (double)(int)*(undefined8 *)(lVar7 + 0x1d8);
            dVar22 = (double)(int)((ulong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20);
          }
          else {
            dVar17 = _DAT_005d9000;
          }
        }
        else {
          dVar17 = 0.0;
        }
      }
      dVar19 = _DAT_005d9000 - dVar17;
      if (uVar11 == 8) {
        dVar17 = dVar19;
      }
      dVar20 = dVar17;
      if (uVar14 != 0) {
        dVar20 = dVar19;
      }
      if (0xb < uVar13) {
        dVar20 = dVar17;
      }
      dVar17 = dVar21;
      dVar19 = dVar22;
      if (dVar15 <= dVar18) {
        dVar18 = DAT_005db338;
      }
      else {
        dVar2 = *(double *)(lVar7 + 0xf0);
        if (dVar18 <= dVar2) {
          dVar18 = _DAT_005d9000;
          if (dVar2 <= dVar15) {
            dVar18 = (double)(**(code **)(**(long **)(lVar7 + 0x18) + 0x1c8))(dVar2);
            uVar11 = *(uint *)(lVar7 + 0x20);
            uVar13 = uVar11 - 1;
            uVar14 = (ushort)(0xa05 >> ((byte)uVar13 & 0x1f)) & 1;
            dVar17 = (double)(int)*(undefined8 *)(lVar7 + 0x1d8);
            dVar19 = (double)(int)((ulong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20);
          }
        }
        else {
          dVar18 = 0.0;
        }
      }
      dVar15 = _DAT_005d9000 - dVar18;
      if (uVar11 != 8) {
        dVar15 = dVar18;
      }
      dVar21 = dVar20 * dVar22 + dVar21;
      dVar18 = _DAT_005d9000 - dVar18;
      if (uVar14 == 0) {
        dVar18 = dVar15;
      }
      if (0xb < uVar13) {
        dVar18 = dVar15;
      }
      (**(code **)(*(long *)(pLVar12 + 0x58) + 0x10))
                ((float)(dVar1 * dVar10 + dVar16),
                 CONCAT44((int)((ulong)dVar21 >> 0x20),(float)dVar21),
                 (float)(dVar19 * dVar18 + dVar17),pLVar12 + 0x58,param_1,uVar3,uVar4,uVar5,uVar6,
                 uVar11,*(undefined8 *)(lVar7 + 0x18));
      return;
    }
  }
  uVar11 = *(uint *)(lVar7 + 0x20);
  goto joined_r0x002e3997;
}


