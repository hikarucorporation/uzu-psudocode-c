// Function : toString
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 00195260
// Prototype: undefined toString(long * param_1, char * param_2_00)
// Body     : 00195260 - 001955b3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::RangeParameter::toString(double, char16_t*) const */

void __cdecl Steinberg::Vst::RangeParameter::toString(long *param_1,char *param_2_00)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  double dVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong in_R8;
  undefined1 uVar37;
  double dVar15;
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar56 [16];
  
  iVar2 = *(int *)((long)param_1 + 0x314);
  dVar15 = (double)(**(code **)(*param_1 + 0xb0))();
  dVar7 = DAT_005db338;
  if (iVar2 < 2) {
    if (*(int *)((long)param_1 + 0x314) == 1) {
      param_2_00[0] = 'O';
      param_2_00[1] = '\0';
      if (dVar15 <= dVar7) {
        param_2_00[2] = 'f';
        param_2_00[3] = '\0';
        param_2_00[4] = 'f';
        param_2_00[5] = '\0';
        lVar13 = 3;
      }
      else {
        param_2_00[2] = 'n';
        param_2_00[3] = '\0';
        lVar13 = 2;
      }
      (param_2_00 + lVar13 * 2)[0] = '\0';
      (param_2_00 + lVar13 * 2)[1] = '\0';
      param_2_00 = param_2_00 + 0xfe;
LAB_00195477:
      param_2_00[0] = '\0';
      param_2_00[1] = '\0';
      return;
    }
    uVar8 = snprintf(param_2_00,0x80,"%.*lf",(int)param_1[0x66],in_R8);
    if ((int)uVar8 < 1) goto LAB_00195477;
    uVar10 = (ulong)uVar8;
    (param_2_00 + uVar10 * 2)[0] = '\0';
    (param_2_00 + uVar10 * 2)[1] = '\0';
    if (0xf < uVar8) {
      uVar11 = uVar10 - 1;
      uVar9 = (ulong)(uVar8 - 1);
      if ((((((uint)uVar11 <= uVar8 - 1) && (uVar11 >> 0x20 == 0)) &&
           (param_2_00 + uVar9 * 2 + uVar11 * -2 <= param_2_00 + uVar9 * 2)) &&
          ((!CARRY8(uVar11,uVar11) && (param_2_00 + uVar9 + (1 - uVar10) <= param_2_00 + uVar9))))
         && ((lVar13 = (uVar9 - uVar10) + 1, param_2_00 + uVar9 + 1 <= param_2_00 + lVar13 * 2 ||
             (param_2_00 + uVar9 * 2 + 2 <= param_2_00 + lVar13)))) {
        uVar9 = (ulong)(uVar8 & 0xf);
        uVar14 = (ulong)(uVar8 & 0xfffffff0);
        do {
          uVar12 = uVar11 & 0xffffffff;
          uVar1 = *(ulong *)(param_2_00 + (uVar12 - 7));
          uVar37 = (undefined1)(uVar1 >> 0x38);
          auVar25._8_6_ = 0;
          auVar25._0_8_ = uVar1;
          auVar25[0xe] = uVar37;
          auVar25[0xf] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x30);
          auVar47._14_2_ = auVar25._14_2_;
          auVar47._8_5_ = 0;
          auVar47._0_8_ = uVar1;
          auVar47[0xd] = uVar37;
          auVar33._13_3_ = auVar47._13_3_;
          auVar33._8_4_ = 0;
          auVar33._0_8_ = uVar1;
          auVar33[0xc] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x28);
          auVar32._12_4_ = auVar33._12_4_;
          auVar32._8_3_ = 0;
          auVar32._0_8_ = uVar1;
          auVar32[0xb] = uVar37;
          auVar31._11_5_ = auVar32._11_5_;
          auVar31._8_2_ = 0;
          auVar31._0_8_ = uVar1;
          auVar31[10] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x20);
          auVar30._10_6_ = auVar31._10_6_;
          auVar30[8] = 0;
          auVar30._0_8_ = uVar1;
          auVar30[9] = uVar37;
          auVar29._9_7_ = auVar30._9_7_;
          auVar29[8] = uVar37;
          auVar29._0_8_ = uVar1;
          uVar37 = (undefined1)(uVar1 >> 0x18);
          auVar5._4_8_ = auVar29._8_8_;
          auVar5[3] = uVar37;
          auVar5[2] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x10);
          auVar5[1] = uVar37;
          auVar5[0] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 8);
          auVar28._4_12_ = auVar5;
          auVar28[3] = uVar37;
          auVar28[2] = uVar37;
          auVar28[0] = (undefined1)uVar1;
          auVar28[1] = auVar28[0];
          uVar1 = *(ulong *)(param_2_00 + (uVar12 - 0xf));
          uVar37 = (undefined1)(uVar1 >> 0x38);
          auVar55._8_6_ = 0;
          auVar55._0_8_ = uVar1;
          auVar55[0xe] = uVar37;
          auVar55[0xf] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x30);
          auVar54._14_2_ = auVar55._14_2_;
          auVar54._8_5_ = 0;
          auVar54._0_8_ = uVar1;
          auVar54[0xd] = uVar37;
          auVar53._13_3_ = auVar54._13_3_;
          auVar53._8_4_ = 0;
          auVar53._0_8_ = uVar1;
          auVar53[0xc] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x28);
          auVar52._12_4_ = auVar53._12_4_;
          auVar52._8_3_ = 0;
          auVar52._0_8_ = uVar1;
          auVar52[0xb] = uVar37;
          auVar51._11_5_ = auVar52._11_5_;
          auVar51._8_2_ = 0;
          auVar51._0_8_ = uVar1;
          auVar51[10] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x20);
          auVar50._10_6_ = auVar51._10_6_;
          auVar50[8] = 0;
          auVar50._0_8_ = uVar1;
          auVar50[9] = uVar37;
          auVar49._9_7_ = auVar50._9_7_;
          auVar49[8] = uVar37;
          auVar49._0_8_ = uVar1;
          uVar37 = (undefined1)(uVar1 >> 0x18);
          auVar6._4_8_ = auVar49._8_8_;
          auVar6[3] = uVar37;
          auVar6[2] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 0x10);
          auVar6[1] = uVar37;
          auVar6[0] = uVar37;
          uVar37 = (undefined1)(uVar1 >> 8);
          auVar48._4_12_ = auVar6;
          auVar48[3] = uVar37;
          auVar48[2] = uVar37;
          auVar48[0] = (undefined1)uVar1;
          auVar48[1] = auVar48[0];
          auVar34._8_4_ = auVar28._0_4_;
          auVar34._0_8_ = auVar29._8_8_;
          auVar34._12_4_ = auVar5._0_4_;
          auVar25 = pshuflw(auVar34,auVar34,0x1b);
          auVar25 = pshufhw(auVar25,auVar25,0x1b);
          auVar25 = psraw(auVar25,8);
          auVar56._8_4_ = auVar48._0_4_;
          auVar56._0_8_ = auVar49._8_8_;
          auVar56._12_4_ = auVar6._0_4_;
          auVar47 = pshuflw(auVar56,auVar56,0x1b);
          auVar47 = pshufhw(auVar47,auVar47,0x1b);
          auVar47 = psraw(auVar47,8);
          auVar35._8_4_ = auVar25._0_4_;
          auVar35._0_8_ = auVar25._8_8_;
          auVar35._12_4_ = auVar25._4_4_;
          auVar25 = pshuflw(auVar35,auVar35,0x1b);
          auVar25 = pshufhw(auVar25,auVar25,0x1b);
          *(undefined1 (*) [16])(param_2_00 + uVar12 * 2 + -0xe) = auVar25;
          auVar36._0_8_ = auVar47._8_8_;
          auVar36._8_4_ = auVar47._0_4_;
          auVar36._12_4_ = auVar47._4_4_;
          auVar25 = pshuflw(auVar36,auVar36,0x1b);
          auVar25 = pshufhw(auVar25,auVar25,0x1b);
          *(undefined1 (*) [16])(param_2_00 + uVar12 * 2 + -0x1e) = auVar25;
          uVar11 = uVar11 - 0x10;
          uVar14 = uVar14 - 0x10;
        } while (uVar14 != 0);
        if ((uVar8 & 0xfffffff0) == uVar10) {
          return;
        }
        goto LAB_00195438;
      }
    }
    uVar9 = uVar10;
LAB_00195438:
    uVar9 = uVar9 + 1;
    do {
      uVar10 = (ulong)((int)uVar9 - 2);
      *(short *)(param_2_00 + uVar10 * 2) = (short)param_2_00[uVar10];
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
    return;
  }
  uVar8 = snprintf(param_2_00,0x80,"%lld",(long)dVar15);
  if ((int)uVar8 < 1) goto LAB_00195477;
  uVar10 = (ulong)uVar8;
  (param_2_00 + uVar10 * 2)[0] = '\0';
  (param_2_00 + uVar10 * 2)[1] = '\0';
  if (0xf < uVar8) {
    uVar11 = uVar10 - 1;
    uVar9 = (ulong)(uVar8 - 1);
    if (((((uint)uVar11 <= uVar8 - 1) && (uVar11 >> 0x20 == 0)) &&
        ((param_2_00 + uVar9 * 2 + uVar11 * -2 <= param_2_00 + uVar9 * 2 &&
         ((!CARRY8(uVar11,uVar11) && (param_2_00 + uVar9 + (1 - uVar10) <= param_2_00 + uVar9))))))
       && ((lVar13 = (uVar9 - uVar10) + 1, param_2_00 + uVar9 + 1 <= param_2_00 + lVar13 * 2 ||
           (param_2_00 + uVar9 * 2 + 2 <= param_2_00 + lVar13)))) {
      uVar9 = (ulong)(uVar8 & 0xf);
      uVar14 = (ulong)(uVar8 & 0xfffffff0);
      do {
        uVar12 = uVar11 & 0xffffffff;
        uVar1 = *(ulong *)(param_2_00 + (uVar12 - 7));
        uVar37 = (undefined1)(uVar1 >> 0x38);
        auVar23._8_6_ = 0;
        auVar23._0_8_ = uVar1;
        auVar23[0xe] = uVar37;
        auVar23[0xf] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x30);
        auVar22._14_2_ = auVar23._14_2_;
        auVar22._8_5_ = 0;
        auVar22._0_8_ = uVar1;
        auVar22[0xd] = uVar37;
        auVar21._13_3_ = auVar22._13_3_;
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar1;
        auVar21[0xc] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x28);
        auVar20._12_4_ = auVar21._12_4_;
        auVar20._8_3_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20[0xb] = uVar37;
        auVar19._11_5_ = auVar20._11_5_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar1;
        auVar19[10] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x20);
        auVar18._10_6_ = auVar19._10_6_;
        auVar18[8] = 0;
        auVar18._0_8_ = uVar1;
        auVar18[9] = uVar37;
        auVar17._9_7_ = auVar18._9_7_;
        auVar17[8] = uVar37;
        auVar17._0_8_ = uVar1;
        uVar37 = (undefined1)(uVar1 >> 0x18);
        auVar3._4_8_ = auVar17._8_8_;
        auVar3[3] = uVar37;
        auVar3[2] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x10);
        auVar3[1] = uVar37;
        auVar3[0] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 8);
        auVar16._4_12_ = auVar3;
        auVar16[3] = uVar37;
        auVar16[2] = uVar37;
        auVar16[0] = (undefined1)uVar1;
        auVar16[1] = auVar16[0];
        uVar1 = *(ulong *)(param_2_00 + (uVar12 - 0xf));
        uVar37 = (undefined1)(uVar1 >> 0x38);
        auVar45._8_6_ = 0;
        auVar45._0_8_ = uVar1;
        auVar45[0xe] = uVar37;
        auVar45[0xf] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x30);
        auVar44._14_2_ = auVar45._14_2_;
        auVar44._8_5_ = 0;
        auVar44._0_8_ = uVar1;
        auVar44[0xd] = uVar37;
        auVar43._13_3_ = auVar44._13_3_;
        auVar43._8_4_ = 0;
        auVar43._0_8_ = uVar1;
        auVar43[0xc] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x28);
        auVar42._12_4_ = auVar43._12_4_;
        auVar42._8_3_ = 0;
        auVar42._0_8_ = uVar1;
        auVar42[0xb] = uVar37;
        auVar41._11_5_ = auVar42._11_5_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar1;
        auVar41[10] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x20);
        auVar40._10_6_ = auVar41._10_6_;
        auVar40[8] = 0;
        auVar40._0_8_ = uVar1;
        auVar40[9] = uVar37;
        auVar39._9_7_ = auVar40._9_7_;
        auVar39[8] = uVar37;
        auVar39._0_8_ = uVar1;
        uVar37 = (undefined1)(uVar1 >> 0x18);
        auVar4._4_8_ = auVar39._8_8_;
        auVar4[3] = uVar37;
        auVar4[2] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 0x10);
        auVar4[1] = uVar37;
        auVar4[0] = uVar37;
        uVar37 = (undefined1)(uVar1 >> 8);
        auVar38._4_12_ = auVar4;
        auVar38[3] = uVar37;
        auVar38[2] = uVar37;
        auVar38[0] = (undefined1)uVar1;
        auVar38[1] = auVar38[0];
        auVar24._8_4_ = auVar16._0_4_;
        auVar24._0_8_ = auVar17._8_8_;
        auVar24._12_4_ = auVar3._0_4_;
        auVar25 = pshuflw(auVar24,auVar24,0x1b);
        auVar25 = pshufhw(auVar25,auVar25,0x1b);
        auVar25 = psraw(auVar25,8);
        auVar46._8_4_ = auVar38._0_4_;
        auVar46._0_8_ = auVar39._8_8_;
        auVar46._12_4_ = auVar4._0_4_;
        auVar47 = pshuflw(auVar46,auVar46,0x1b);
        auVar47 = pshufhw(auVar47,auVar47,0x1b);
        auVar47 = psraw(auVar47,8);
        auVar26._8_4_ = auVar25._0_4_;
        auVar26._0_8_ = auVar25._8_8_;
        auVar26._12_4_ = auVar25._4_4_;
        auVar25 = pshuflw(auVar26,auVar26,0x1b);
        auVar25 = pshufhw(auVar25,auVar25,0x1b);
        *(undefined1 (*) [16])(param_2_00 + uVar12 * 2 + -0xe) = auVar25;
        auVar27._0_8_ = auVar47._8_8_;
        auVar27._8_4_ = auVar47._0_4_;
        auVar27._12_4_ = auVar47._4_4_;
        auVar25 = pshuflw(auVar27,auVar27,0x1b);
        auVar25 = pshufhw(auVar25,auVar25,0x1b);
        *(undefined1 (*) [16])(param_2_00 + uVar12 * 2 + -0x1e) = auVar25;
        uVar11 = uVar11 - 0x10;
        uVar14 = uVar14 - 0x10;
      } while (uVar14 != 0);
      if ((uVar8 & 0xfffffff0) == uVar10) {
        return;
      }
      goto LAB_0019532f;
    }
  }
  uVar9 = uVar10;
LAB_0019532f:
  uVar9 = uVar9 + 1;
  do {
    uVar10 = (ulong)((int)uVar9 - 2);
    *(short *)(param_2_00 + uVar10 * 2) = (short)param_2_00[uVar10];
    uVar9 = uVar9 - 1;
  } while (1 < uVar9);
  return;
}


