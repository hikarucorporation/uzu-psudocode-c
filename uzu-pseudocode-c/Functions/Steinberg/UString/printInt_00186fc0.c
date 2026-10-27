// Function : printInt
// Namespace: Steinberg:UString
// Entry    : 00186fc0
// Prototype: undefined8 printInt(UString * this, undefined8 param_1)
// Body     : 00186fc0 - 00187111


/* Steinberg::UString::printInt(long) */

undefined8 __thiscall Steinberg::UString::printInt(UString *this,undefined8 param_1)

{
  ulong uVar1;
  char *__s;
  long lVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  uint uVar5;
  undefined4 extraout_var;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar22;
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  __s = *(char **)this;
  uVar5 = snprintf(__s,(long)*(int *)(this + 8),"%lld",param_1);
  if ((int)uVar5 < 1) goto LAB_00187066;
  lVar2 = *(long *)this;
  uVar6 = (ulong)uVar5;
  *(undefined2 *)(lVar2 + uVar6 * 2) = 0;
  if (uVar5 < 0x10) {
LAB_0018703c:
    uVar9 = uVar6;
  }
  else {
    uVar10 = uVar6 - 1;
    uVar9 = (ulong)(uVar5 - 1);
    if (((uVar5 - 1 < (uint)uVar10) || (uVar10 >> 0x20 != 0)) ||
       ((lVar11 = (uVar9 - uVar6) + 1, (char *)(lVar2 + lVar11 * 2) < __s + uVar9 + 1 &&
        (__s + lVar11 < (char *)(lVar2 + uVar9 * 2 + 2))))) goto LAB_0018703c;
    uVar9 = (ulong)(uVar5 & 0xf);
    uVar7 = (ulong)(uVar5 & 0xfffffff0);
    do {
      uVar8 = uVar10 & 0xffffffff;
      uVar1 = *(ulong *)(__s + (uVar8 - 7));
      uVar22 = (undefined1)(uVar1 >> 0x38);
      auVar17._8_6_ = 0;
      auVar17._0_8_ = uVar1;
      auVar17[0xe] = uVar22;
      auVar17[0xf] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x30);
      auVar16._14_2_ = auVar17._14_2_;
      auVar16._8_5_ = 0;
      auVar16._0_8_ = uVar1;
      auVar16[0xd] = uVar22;
      auVar15._13_3_ = auVar16._13_3_;
      auVar15._8_4_ = 0;
      auVar15._0_8_ = uVar1;
      auVar15[0xc] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x28);
      auVar14._12_4_ = auVar15._12_4_;
      auVar14._8_3_ = 0;
      auVar14._0_8_ = uVar1;
      auVar14[0xb] = uVar22;
      auVar13._11_5_ = auVar14._11_5_;
      auVar13._8_2_ = 0;
      auVar13._0_8_ = uVar1;
      auVar13[10] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x20);
      auVar32._10_6_ = auVar13._10_6_;
      auVar32[8] = 0;
      auVar32._0_8_ = uVar1;
      auVar32[9] = uVar22;
      auVar19._9_7_ = auVar32._9_7_;
      auVar19[8] = uVar22;
      auVar19._0_8_ = uVar1;
      uVar22 = (undefined1)(uVar1 >> 0x18);
      auVar3._4_8_ = auVar19._8_8_;
      auVar3[3] = uVar22;
      auVar3[2] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x10);
      auVar3[1] = uVar22;
      auVar3[0] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 8);
      auVar12._4_12_ = auVar3;
      auVar12[3] = uVar22;
      auVar12[2] = uVar22;
      auVar12[0] = (undefined1)uVar1;
      auVar12[1] = auVar12[0];
      uVar1 = *(ulong *)(__s + (uVar8 - 0xf));
      uVar22 = (undefined1)(uVar1 >> 0x38);
      auVar30._8_6_ = 0;
      auVar30._0_8_ = uVar1;
      auVar30[0xe] = uVar22;
      auVar30[0xf] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x30);
      auVar29._14_2_ = auVar30._14_2_;
      auVar29._8_5_ = 0;
      auVar29._0_8_ = uVar1;
      auVar29[0xd] = uVar22;
      auVar28._13_3_ = auVar29._13_3_;
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar1;
      auVar28[0xc] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x28);
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_3_ = 0;
      auVar27._0_8_ = uVar1;
      auVar27[0xb] = uVar22;
      auVar26._11_5_ = auVar27._11_5_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar1;
      auVar26[10] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x20);
      auVar25._10_6_ = auVar26._10_6_;
      auVar25[8] = 0;
      auVar25._0_8_ = uVar1;
      auVar25[9] = uVar22;
      auVar24._9_7_ = auVar25._9_7_;
      auVar24[8] = uVar22;
      auVar24._0_8_ = uVar1;
      uVar22 = (undefined1)(uVar1 >> 0x18);
      auVar4._4_8_ = auVar24._8_8_;
      auVar4[3] = uVar22;
      auVar4[2] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 0x10);
      auVar4[1] = uVar22;
      auVar4[0] = uVar22;
      uVar22 = (undefined1)(uVar1 >> 8);
      auVar23._4_12_ = auVar4;
      auVar23[3] = uVar22;
      auVar23[2] = uVar22;
      auVar23[0] = (undefined1)uVar1;
      auVar23[1] = auVar23[0];
      auVar18._8_4_ = auVar12._0_4_;
      auVar18._0_8_ = auVar19._8_8_;
      auVar18._12_4_ = auVar3._0_4_;
      auVar19 = pshuflw(auVar18,auVar18,0x1b);
      auVar19 = pshufhw(auVar19,auVar19,0x1b);
      auVar19 = psraw(auVar19,8);
      auVar31._8_4_ = auVar23._0_4_;
      auVar31._0_8_ = auVar24._8_8_;
      auVar31._12_4_ = auVar4._0_4_;
      auVar32 = pshuflw(auVar31,auVar31,0x1b);
      auVar32 = pshufhw(auVar32,auVar32,0x1b);
      auVar32 = psraw(auVar32,8);
      auVar20._8_4_ = auVar19._0_4_;
      auVar20._0_8_ = auVar19._8_8_;
      auVar20._12_4_ = auVar19._4_4_;
      auVar19 = pshuflw(auVar20,auVar20,0x1b);
      auVar19 = pshufhw(auVar19,auVar19,0x1b);
      *(undefined1 (*) [16])(lVar2 + -0xe + uVar8 * 2) = auVar19;
      auVar21._0_8_ = auVar32._8_8_;
      auVar21._8_4_ = auVar32._0_4_;
      auVar21._12_4_ = auVar32._4_4_;
      auVar19 = pshuflw(auVar21,auVar21,0x1b);
      auVar19 = pshufhw(auVar19,auVar19,0x1b);
      *(undefined1 (*) [16])(lVar2 + -0x1e + uVar8 * 2) = auVar19;
      uVar10 = uVar10 - 0x10;
      uVar7 = uVar7 - 0x10;
    } while (uVar7 != 0);
    if ((uVar5 & 0xfffffff0) == uVar6) goto LAB_00187066;
  }
  uVar9 = uVar9 + 1;
  do {
    uVar6 = (ulong)((int)uVar9 - 2);
    *(short *)(lVar2 + uVar6 * 2) = (short)__s[uVar6];
    uVar9 = uVar9 - 1;
  } while (1 < uVar9);
LAB_00187066:
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar5) >> 8),0 < (int)uVar5);
}


