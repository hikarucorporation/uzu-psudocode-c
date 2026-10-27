// Function : toString
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194dd0
// Prototype: undefined toString(double param_1, Parameter * this, char * param_3)
// Body     : 00194dd0 - 00194f7f


/* Steinberg::Vst::Parameter::toString(double, char16_t*) const */

void __thiscall Steinberg::Vst::Parameter::toString(double param_1,Parameter *this,char *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  double dVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 in_R8B;
  undefined7 in_register_00000081;
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
  
  dVar4 = DAT_005db338;
  if (*(int *)(this + 0x314) == 1) {
    param_3[0] = 'O';
    param_3[1] = '\0';
    if (param_1 <= dVar4) {
      param_3[2] = 'f';
      param_3[3] = '\0';
      param_3[4] = 'f';
      param_3[5] = '\0';
      lVar6 = 3;
    }
    else {
      param_3[2] = 'n';
      param_3[3] = '\0';
      lVar6 = 2;
    }
    (param_3 + lVar6 * 2)[0] = '\0';
    (param_3 + lVar6 * 2)[1] = '\0';
    param_3 = param_3 + 0xfe;
LAB_00194ee0:
    param_3[0] = '\0';
    param_3[1] = '\0';
    return;
  }
  uVar5 = snprintf(param_3,0x80,"%.*lf",*(int *)(this + 0x330),CONCAT71(in_register_00000081,in_R8B)
                  );
  if ((int)uVar5 < 1) goto LAB_00194ee0;
  uVar8 = (ulong)uVar5;
  (param_3 + uVar8 * 2)[0] = '\0';
  (param_3 + uVar8 * 2)[1] = '\0';
  if (0xf < uVar5) {
    uVar10 = uVar8 - 1;
    uVar7 = (ulong)(uVar5 - 1);
    if (((((uint)uVar10 <= uVar5 - 1) && (uVar10 >> 0x20 == 0)) &&
        (param_3 + uVar7 * 2 + uVar10 * -2 <= param_3 + uVar7 * 2)) &&
       (((!CARRY8(uVar10,uVar10) && (param_3 + uVar7 + (1 - uVar8) <= param_3 + uVar7)) &&
        ((lVar6 = (uVar7 - uVar8) + 1, param_3 + uVar7 + 1 <= param_3 + lVar6 * 2 ||
         (param_3 + uVar7 * 2 + 2 <= param_3 + lVar6)))))) {
      uVar7 = (ulong)(uVar5 & 0xf);
      uVar11 = (ulong)(uVar5 & 0xfffffff0);
      do {
        uVar9 = uVar10 & 0xffffffff;
        uVar1 = *(ulong *)(param_3 + (uVar9 - 7));
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
        auVar2._4_8_ = auVar19._8_8_;
        auVar2[3] = uVar22;
        auVar2[2] = uVar22;
        uVar22 = (undefined1)(uVar1 >> 0x10);
        auVar2[1] = uVar22;
        auVar2[0] = uVar22;
        uVar22 = (undefined1)(uVar1 >> 8);
        auVar12._4_12_ = auVar2;
        auVar12[3] = uVar22;
        auVar12[2] = uVar22;
        auVar12[0] = (undefined1)uVar1;
        auVar12[1] = auVar12[0];
        uVar1 = *(ulong *)(param_3 + (uVar9 - 0xf));
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
        auVar3._4_8_ = auVar24._8_8_;
        auVar3[3] = uVar22;
        auVar3[2] = uVar22;
        uVar22 = (undefined1)(uVar1 >> 0x10);
        auVar3[1] = uVar22;
        auVar3[0] = uVar22;
        uVar22 = (undefined1)(uVar1 >> 8);
        auVar23._4_12_ = auVar3;
        auVar23[3] = uVar22;
        auVar23[2] = uVar22;
        auVar23[0] = (undefined1)uVar1;
        auVar23[1] = auVar23[0];
        auVar18._8_4_ = auVar12._0_4_;
        auVar18._0_8_ = auVar19._8_8_;
        auVar18._12_4_ = auVar2._0_4_;
        auVar19 = pshuflw(auVar18,auVar18,0x1b);
        auVar19 = pshufhw(auVar19,auVar19,0x1b);
        auVar19 = psraw(auVar19,8);
        auVar31._8_4_ = auVar23._0_4_;
        auVar31._0_8_ = auVar24._8_8_;
        auVar31._12_4_ = auVar3._0_4_;
        auVar32 = pshuflw(auVar31,auVar31,0x1b);
        auVar32 = pshufhw(auVar32,auVar32,0x1b);
        auVar32 = psraw(auVar32,8);
        auVar20._8_4_ = auVar19._0_4_;
        auVar20._0_8_ = auVar19._8_8_;
        auVar20._12_4_ = auVar19._4_4_;
        auVar19 = pshuflw(auVar20,auVar20,0x1b);
        auVar19 = pshufhw(auVar19,auVar19,0x1b);
        *(undefined1 (*) [16])(param_3 + uVar9 * 2 + -0xe) = auVar19;
        auVar21._0_8_ = auVar32._8_8_;
        auVar21._8_4_ = auVar32._0_4_;
        auVar21._12_4_ = auVar32._4_4_;
        auVar19 = pshuflw(auVar21,auVar21,0x1b);
        auVar19 = pshufhw(auVar19,auVar19,0x1b);
        *(undefined1 (*) [16])(param_3 + uVar9 * 2 + -0x1e) = auVar19;
        uVar10 = uVar10 - 0x10;
        uVar11 = uVar11 - 0x10;
      } while (uVar11 != 0);
      if ((uVar5 & 0xfffffff0) == uVar8) {
        return;
      }
      goto LAB_00194eaa;
    }
  }
  uVar7 = uVar8;
LAB_00194eaa:
  uVar7 = uVar7 + 1;
  do {
    uVar8 = (ulong)((int)uVar7 - 2);
    *(short *)(param_3 + uVar8 * 2) = (short)param_3[uVar8];
    uVar7 = uVar7 - 1;
  } while (1 < uVar7);
  return;
}


