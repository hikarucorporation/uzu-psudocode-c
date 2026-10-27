// Function : drawGlassSphere
// Namespace: juce:LookAndFeel_V2
// Entry    : 00232090
// Prototype: undefined drawGlassSphere(float param_1, float param_2, float param_3, float param_4, Graphics * param_5, uint * param_6)
// Body     : 00232090 - 0023291c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawGlassSphere(juce::Graphics&, float, float, float, juce::Colour const&,
   float) */

void __cdecl
juce::LookAndFeel_V2::drawGlassSphere
          (float param_1,float param_2,float param_3,float param_4,Graphics *param_5,uint *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  Graphics *this;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *__ptr;
  double *__ptr_00;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *__src;
  double *__src_00;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 local_110 [8];
  float fStack_108;
  float fStack_104;
  undefined1 local_100;
  double *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  Graphics *local_e8;
  uint *local_e0;
  float *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_68;
  float local_58;
  float local_48;
  
  if (param_4 < param_3) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (float *)0x0;
    uStack_d0 = 0;
    local_b8 = 1;
    local_e8 = param_5;
    local_88 = param_3;
    fStack_84 = param_3;
    fStack_80 = param_3;
    fStack_7c = param_3;
    local_78 = param_1;
    fStack_74 = param_2;
    local_68 = param_2;
    local_58 = param_3;
    local_48 = param_1;
    Path::addEllipse(CONCAT44(param_2,param_1),CONCAT44(param_3,param_3),(Path *)&local_d8);
    uVar19 = *param_6;
    uVar18 = uVar19 >> 0x18;
    uVar12 = SUB84((double)((float)uVar18 * DAT_005d9088) + DAT_005d9098,0);
    uVar11 = 0xff;
    if ((int)uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar17 = uVar19 & 0xffffff;
    uVar16 = uVar17 >> 8;
    uVar15 = uVar17 >> 0x10;
    uVar12 = _ZN4juce7ColoursL5whiteE_144 >> 0x18;
    if (uVar12 == 0) {
      uVar10 = uVar11 & 0xff;
      uVar5 = uVar15;
      uVar14 = uVar16;
      uVar6 = uVar17;
    }
    else {
      uVar5 = ~(uVar11 << 0x18) >> 0x18;
      uVar10 = (uVar12 ^ 0xff) * uVar5 >> 8 ^ 0xff;
      uVar6 = (uVar5 * uVar12) / uVar10;
      uVar5 = (((_ZN4juce7ColoursL5whiteE_144 >> 0x10 & 0xff) - uVar15) * uVar6 >> 8) + uVar15;
      uVar14 = (((_ZN4juce7ColoursL5whiteE_144 >> 8 & 0xff) - (uVar16 & 0xff)) * uVar6 >> 8) +
               uVar16;
      uVar6 = (((_ZN4juce7ColoursL5whiteE_144 & 0xff) - (uVar19 & 0xff)) * uVar6 >> 8) + uVar17;
    }
    if (uVar12 == 0) {
      uVar11 = uVar11 & 0xff;
    }
    else {
      uVar8 = ~(uVar11 << 0x18) >> 0x18;
      uVar11 = (uVar12 ^ 0xff) * uVar8 >> 8 ^ 0xff;
      uVar8 = (uVar8 * uVar12) / uVar11;
      uVar15 = uVar15 + (((_ZN4juce7ColoursL5whiteE_144 >> 0x10 & 0xff) - uVar15) * uVar8 >> 8);
      uVar16 = uVar16 + (((_ZN4juce7ColoursL5whiteE_144 >> 8 & 0xff) - (uVar16 & 0xff)) * uVar8 >> 8
                        );
      uVar17 = uVar17 + (((_ZN4juce7ColoursL5whiteE_144 & 0xff) - (uVar19 & 0xff)) * uVar8 >> 8);
    }
    auVar1._4_4_ = 0;
    auVar1._0_4_ = local_68;
    auVar1._8_4_ = local_68 + local_58;
    auVar1._12_4_ = 0;
    _local_110 = auVar1 << 0x20;
    local_100 = 0;
    local_e0 = param_6;
    __ptr = malloc(0x80);
    this = local_e8;
    uVar8 = uVar19 >> 8;
    uVar13 = uVar19 >> 0x10;
    local_f0 = 8;
    *__ptr = 0;
    *(uint *)(__ptr + 1) =
         uVar6 & 0xff | (uVar14 & 0xff) << 8 | (uVar5 & 0xff) << 0x10 | uVar10 << 0x18;
    local_ec = 2;
    __ptr[2] = 0x3ff0000000000000;
    *(uint *)(__ptr + 3) =
         uVar17 & 0xff | (uVar16 & 0xff) << 8 | (uVar15 & 0xff) << 0x10 | uVar11 << 0x18;
    if (uVar12 != 0) {
      uVar18 = (uVar12 ^ 0xff) * (~uVar19 >> 0x18) >> 8 ^ 0xff;
      uVar11 = ((~uVar19 >> 0x18) * uVar12) / uVar18;
      uVar13 = uVar13 + (((_ZN4juce7ColoursL5whiteE_144 >> 0x10 & 0xff) - (uVar13 & 0xff)) * uVar11
                        >> 8);
      uVar8 = uVar8 + (((_ZN4juce7ColoursL5whiteE_144 >> 8 & 0xff) - (uVar8 & 0xff)) * uVar11 >> 8);
      uVar19 = uVar19 + (((_ZN4juce7ColoursL5whiteE_144 & 0xff) - (uVar19 & 0xff)) * uVar11 >> 8);
    }
    local_f8 = (double *)__ptr;
    if ((double)__ptr[2] <= DAT_00652e30) {
      __src = __ptr + 4;
    }
    else {
      uVar11 = 2 - (DAT_00652e30 < (double)__ptr[2]);
      __src = __ptr + (ulong)uVar11 * 2;
      memmove(__ptr + (ulong)uVar11 * 2 + 2,__src,(ulong)(2 - uVar11) << 4);
    }
    *__src = 0x3fd999999999999a;
    *(uint *)(__src + 1) =
         uVar19 & 0xff | (uVar8 & 0xff) << 8 | (uVar13 & 0xff) << 0x10 | uVar18 << 0x18;
    local_ec = 3;
                    /* try { // try from 00232404 to 002324bd has its CatchHandler @ 0023292c */
    Graphics::setGradientFill(this,(undefined8 *)local_110);
    cVar4 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if ((cVar4 == '\0') && ((long)uStack_d0._4_4_ != 0)) {
      pfVar7 = local_d8;
      do {
        fVar20 = *pfVar7;
        if ((fVar20 != DAT_005de3d0) || (NAN(fVar20) || NAN(DAT_005de3d0))) {
          if ((fVar20 != DAT_005de3d4) || (NAN(fVar20) || NAN(DAT_005de3d4))) {
            if (((fVar20 != DAT_005de3d8) || (NAN(fVar20) || NAN(DAT_005de3d8))) &&
               ((fVar20 != DAT_005de3dc || (NAN(fVar20) || NAN(DAT_005de3dc))))) goto LAB_00232464;
          }
          _local_a8 = ZEXT416((uint)DAT_005d9038);
          local_98 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_d8,local_a8);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_00232464:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != local_d8 + uStack_d0._4_4_);
    }
    free(__ptr);
    uVar19 = _ZN4juce7ColoursL5whiteE_144;
    uVar3 = _ZN4juce7ColoursL16transparentWhiteE_6;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = DAT_005de478 * local_58 + local_68;
    auVar2._8_4_ = local_58 * DAT_005d9088 + local_68;
    auVar2._12_4_ = 0;
    _local_110 = auVar2 << 0x20;
    local_100 = 0;
    local_f8 = malloc(0x80);
    local_f0 = 8;
    *local_f8 = 0.0;
    *(uint *)(local_f8 + 1) = uVar19;
    local_ec = 2;
    local_f8[2] = 1.0;
    *(undefined4 *)(local_f8 + 3) = uVar3;
                    /* try { // try from 00232551 to 0023255d has its CatchHandler @ 00232922 */
    Graphics::setGradientFill(this,(undefined8 *)local_110);
    free(local_f8);
    local_110._4_4_ = _UNK_005dd0c4 * fStack_84 + fStack_74;
    local_110._0_4_ = _DAT_005dd0c0 * local_88 + local_78;
    fStack_108 = _DAT_005dd0d0 * local_88;
    fStack_104 = _UNK_005dd0d4 * fStack_84;
                    /* try { // try from 0023259b to 002325a5 has its CatchHandler @ 0023291d */
    (**(code **)(**(long **)(this + 8) + 0x130))(*(long **)(this + 8),local_110);
    uVar3 = _ZN4juce7ColoursL16transparentBlackE_5;
    local_110._4_4_ = _UNK_005d9924 * fStack_84 + fStack_74;
    fVar20 = ((float)*(byte *)((long)local_e0 + 3) / DAT_005de3b0) * DAT_005d9044 * param_4;
    uVar11 = 0;
    uVar19 = 0;
    if ((0.0 < fVar20) && (uVar19 = 0xff000000, fVar20 < DAT_005d9038)) {
      uVar19 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    uVar12 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
    local_110._0_4_ = _DAT_005d9920 * local_88 + local_78;
    fStack_108 = local_48;
    fStack_104 = (float)local_110._4_4_;
    local_100 = 1;
    __ptr_00 = malloc(0x80);
    local_f0 = 8;
    *__ptr_00 = 0.0;
    *(undefined4 *)(__ptr_00 + 1) = uVar3;
    __ptr_00[2] = 1.0;
    *(uint *)(__ptr_00 + 3) = uVar19 | uVar12;
    __ptr_00[4] = __ptr_00[2];
    *(undefined4 *)(__ptr_00 + 5) = *(undefined4 *)(__ptr_00 + 3);
    *(undefined4 *)((long)__ptr_00 + 0x2c) = *(undefined4 *)((long)__ptr_00 + 0x1c);
    __ptr_00[2] = 0.7;
    *(undefined4 *)(__ptr_00 + 3) = uVar3;
    local_ec = 3;
    fVar20 = DAT_005d9068 * param_4;
    if ((0.0 < fVar20) && (uVar11 = 0xff000000, fVar20 < DAT_005d9038)) {
      uVar11 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    lVar9 = 0;
    local_f8 = __ptr_00;
    if (((DAT_005de638 < *__ptr_00) || (lVar9 = 1, DAT_005de638 < __ptr_00[2])) ||
       (lVar9 = 2, DAT_005de638 < __ptr_00[4])) {
      __src_00 = __ptr_00 + lVar9 * 2;
      memmove(__ptr_00 + lVar9 * 2 + 2,__src_00,(ulong)((uint)lVar9 ^ 3) << 4);
    }
    else {
      __src_00 = __ptr_00 + 6;
    }
    *__src_00 = 0.8;
    *(uint *)(__src_00 + 1) = uVar11 | uVar12;
    local_ec = 4;
                    /* try { // try from 0023278e to 002328e4 has its CatchHandler @ 0023292e */
    Graphics::setGradientFill(this,(undefined8 *)local_110);
    cVar4 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if ((cVar4 == '\0') && ((long)uStack_d0._4_4_ != 0)) {
      pfVar7 = local_d8;
      do {
        fVar20 = *pfVar7;
        if ((fVar20 != DAT_005de3d0) || (NAN(fVar20) || NAN(DAT_005de3d0))) {
          if ((fVar20 != DAT_005de3d4) || (NAN(fVar20) || NAN(DAT_005de3d4))) {
            if (((fVar20 != DAT_005de3d8) || (NAN(fVar20) || NAN(DAT_005de3d8))) &&
               ((fVar20 != DAT_005de3dc || (NAN(fVar20) || NAN(DAT_005de3dc))))) goto LAB_002327f4;
          }
          _local_a8 = ZEXT416((uint)DAT_005d9038);
          local_98 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_d8,local_a8);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_002327f4:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != local_d8 + uStack_d0._4_4_);
    }
    fVar20 = ((float)*(byte *)((long)local_e0 + 3) / DAT_005de3b0) * DAT_005d9044;
    uVar19 = 0;
    if ((0.0 < fVar20) && (uVar19 = 0xff000000, fVar20 < DAT_005d9038)) {
      uVar19 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    Graphics::setColour(this,_ZN4juce7ColoursL5blackE_14 & 0xffffff | uVar19);
    local_a8._4_4_ = fStack_74;
    local_a8._0_4_ = local_78;
    fStack_a0 = local_88;
    fStack_9c = fStack_84;
    (**(code **)(**(long **)(this + 8) + 0x128))(param_4,*(long **)(this + 8),local_a8);
    free(__ptr_00);
    uStack_d0 = uStack_d0 & 0xffffffff;
    free(local_d8);
  }
  return;
}


