// Function : drawGlassPointer
// Namespace: juce:LookAndFeel_V2
// Entry    : 002b7910
// Prototype: undefined drawGlassPointer(float param_1, undefined8 param_2_00, float param_3, float param_4, Graphics * param_5, uint * param_6, int param_7)
// Body     : 002b7910 - 002b8383


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawGlassPointer(juce::Graphics&, float, float, float, juce::Colour const&,
   float, int) */

void __cdecl
juce::LookAndFeel_V2::drawGlassPointer
          (float param_1,undefined8 param_2_00,float param_3,float param_4,Graphics *param_5,
          uint *param_6,int param_7)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  Graphics *this;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *__ptr;
  double *__ptr_00;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *__src;
  double *__src_00;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float *local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8;
  Graphics *local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  double *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_98 [16];
  float local_88;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  float local_58 [4];
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_74 = (undefined4)((ulong)param_2_00 >> 0x20);
  fStack_100 = (float)param_2_00;
  if (param_3 <= param_4) {
    return;
  }
  local_118 = (float *)0x0;
  uStack_110 = 0;
  local_f8 = 1;
  local_98 = ZEXT416((uint)(DAT_005d9044 * param_3));
  local_108 = DAT_005d9044 * param_3 + param_1;
  local_68 = ZEXT416((uint)local_108);
  fStack_104 = local_108;
  fStack_fc = fStack_100;
  local_88 = param_1;
  local_78 = fStack_100;
  uStack_70 = in_XMM1_Dc;
  uStack_6c = in_XMM1_Dd;
  local_118 = malloc(0x20);
  *local_118 = 100002.0;
  local_118[1] = (float)local_68._0_4_;
  uStack_110 = 0x300000008;
  local_118[2] = local_78;
  local_f0 = (Graphics *)CONCAT44(local_f0._4_4_,local_88 + param_3);
  fVar20 = DAT_005d98e8 * param_3 + local_78;
  Path::lineTo(local_88 + param_3,fVar20,(Path *)&local_118);
  local_48 = local_78 + param_3;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  Path::lineTo(local_f0._0_4_,local_48,(Path *)&local_118);
  Path::lineTo(local_88,local_48,(Path *)&local_118);
  Path::lineTo(local_88,fVar20,(Path *)&local_118);
  lVar10 = (long)uStack_110._4_4_;
  if (lVar10 != 0) {
    if (0 < uStack_110._4_4_) {
      if ((local_118[uStack_110._4_4_ - 1] == DAT_005de41c) &&
         (!NAN(local_118[uStack_110._4_4_ - 1]) && !NAN(DAT_005de41c))) goto LAB_002b7adf;
    }
    iVar18 = uStack_110._4_4_ + 1;
    if ((int)(uint)uStack_110 <= uStack_110._4_4_) {
      uVar11 = uStack_110._4_4_ + iVar18 / 2 + 9U & 0xfffffff8;
      if ((uint)uStack_110 != uVar11) {
        if ((int)uVar11 < 1) {
          free(local_118);
          local_118 = (float *)0x0;
        }
        else {
          local_118 = realloc(local_118,(ulong)uVar11 << 2);
        }
      }
      uStack_110 = (ulong)uVar11;
    }
    uStack_110 = CONCAT44(iVar18,(uint)uStack_110);
    local_118[lVar10] = 100005.0;
  }
LAB_002b7adf:
  local_bc = (float)param_7 * DAT_005de3fc;
  local_98._0_4_ = (float)local_98._0_4_ + local_78;
  local_f0 = param_5;
  fVar20 = cosf(local_bc);
  fStack_dc = sinf(local_bc);
  local_e8._4_4_ = _DAT_006524b0 ^ (uint)fStack_dc;
  local_e8._0_4_ = fVar20;
  local_d4 = ((float)(_DAT_006524b0 ^ (uint)fStack_dc) * (float)local_68._0_4_ -
             (float)local_98._0_4_ * fVar20) + (float)local_98._0_4_;
  fStack_e0 = (fStack_dc * (float)local_98._0_4_ - fVar20 * (float)local_68._0_4_) +
              (float)local_68._0_4_;
  local_d8 = fVar20;
  Path::applyTransform((Path *)&local_118,(float *)local_e8);
  uVar11 = *param_6;
  uVar19 = uVar11 >> 0x18;
  uVar14 = SUB84((double)((float)uVar19 * DAT_005d9088) + DAT_005d9098,0);
  uVar9 = 0xff;
  if ((int)uVar14 < 0xff) {
    uVar9 = uVar14;
  }
  uVar16 = uVar11 & 0xffffff;
  uVar15 = uVar16 >> 8;
  uVar14 = uVar16 >> 0x10;
  uVar17 = (uint)_ZN4juce7ColoursL5whiteE_144._3_1_;
  if (uVar17 == 0) {
    uVar8 = uVar9 & 0xff;
    uVar4 = uVar14;
    uVar13 = uVar15;
    uVar5 = uVar16;
  }
  else {
    uVar4 = ~(uVar9 << 0x18) >> 0x18;
    uVar8 = (uVar17 ^ 0xff) * uVar4 >> 8 ^ 0xff;
    uVar5 = (uVar4 * uVar17) / uVar8;
    uVar4 = ((_ZN4juce7ColoursL5whiteE_144._2_1_ - uVar14) * uVar5 >> 8) + uVar14;
    uVar13 = (((uint)_ZN4juce7ColoursL5whiteE_144._1_1_ - (uVar15 & 0xff)) * uVar5 >> 8) + uVar15;
    uVar5 = (((uint)(byte)_ZN4juce7ColoursL5whiteE_144 - (uVar11 & 0xff)) * uVar5 >> 8) + uVar16;
  }
  if (uVar17 == 0) {
    uVar9 = uVar9 & 0xff;
  }
  else {
    uVar7 = ~(uVar9 << 0x18) >> 0x18;
    uVar9 = (uVar17 ^ 0xff) * uVar7 >> 8 ^ 0xff;
    uVar7 = (uVar7 * uVar17) / uVar9;
    uVar14 = uVar14 + ((_ZN4juce7ColoursL5whiteE_144._2_1_ - uVar14) * uVar7 >> 8);
    uVar15 = uVar15 + (((uint)_ZN4juce7ColoursL5whiteE_144._1_1_ - (uVar15 & 0xff)) * uVar7 >> 8);
    uVar16 = uVar16 + (((uint)(byte)_ZN4juce7ColoursL5whiteE_144 - (uVar11 & 0xff)) * uVar7 >> 8);
  }
  auVar1._4_4_ = 0;
  auVar1._0_4_ = local_78;
  auVar1._8_4_ = local_48;
  auVar1._12_4_ = 0;
  _local_e8 = auVar1 << 0x20;
  local_d8 = (float)((uint)local_d8 & 0xffffff00);
  __ptr = malloc(0x80);
  this = local_f0;
  uVar7 = uVar11 >> 8;
  uVar12 = uVar11 >> 0x10;
  local_c8 = 8;
  *__ptr = 0;
  *(uint *)(__ptr + 1) =
       uVar5 & 0xff | (uVar13 & 0xff) << 8 | (uVar4 & 0xff) << 0x10 | uVar8 << 0x18;
  local_c4 = 2;
  __ptr[2] = 0x3ff0000000000000;
  *(uint *)(__ptr + 3) =
       uVar16 & 0xff | (uVar15 & 0xff) << 8 | (uVar14 & 0xff) << 0x10 | uVar9 << 0x18;
  if (uVar17 != 0) {
    uVar19 = (uVar17 ^ 0xff) * (~uVar11 >> 0x18) >> 8 ^ 0xff;
    uVar9 = ((~uVar11 >> 0x18) * uVar17) / uVar19;
    uVar12 = uVar12 + (((uint)_ZN4juce7ColoursL5whiteE_144._2_1_ - (uVar12 & 0xff)) * uVar9 >> 8);
    uVar7 = uVar7 + (((uint)_ZN4juce7ColoursL5whiteE_144._1_1_ - (uVar7 & 0xff)) * uVar9 >> 8);
    uVar11 = uVar11 + (((uint)(byte)_ZN4juce7ColoursL5whiteE_144 - (uVar11 & 0xff)) * uVar9 >> 8);
  }
  local_d0 = (double *)__ptr;
  if ((double)__ptr[2] <= DAT_00652e30) {
    __src = __ptr + 4;
  }
  else {
    uVar9 = 2 - (DAT_00652e30 < (double)__ptr[2]);
    __src = __ptr + (ulong)uVar9 * 2;
    memmove(__ptr + (ulong)uVar9 * 2 + 2,__src,(ulong)(2 - uVar9) << 4);
  }
  *__src = 0x3fd999999999999a;
  *(uint *)(__src + 1) =
       uVar11 & 0xff | (uVar7 & 0xff) << 8 | (uVar12 & 0xff) << 0x10 | uVar19 << 0x18;
  local_c4 = 3;
                    /* try { // try from 002b7e9e to 002b7f5d has its CatchHandler @ 002b8386 */
  Graphics::setGradientFill(this,(undefined8 *)local_e8);
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)uStack_110._4_4_ != 0) {
      pfVar6 = local_118;
      do {
        fVar20 = *pfVar6;
        if ((fVar20 != DAT_005de3d0) || (NAN(fVar20) || NAN(DAT_005de3d0))) {
          if ((fVar20 != DAT_005de3d4) || (NAN(fVar20) || NAN(DAT_005de3d4))) {
            if (((fVar20 != DAT_005de3d8) || (NAN(fVar20) || NAN(DAT_005de3d8))) &&
               ((fVar20 != DAT_005de3dc || (NAN(fVar20) || NAN(DAT_005de3dc))))) goto LAB_002b7f04;
          }
          local_b8 = ZEXT416((uint)DAT_005d9038);
          local_a8 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_118,local_b8);
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_002b7f04:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_118 + uStack_110._4_4_);
    }
  }
  free(__ptr);
  uVar2 = _ZN4juce7ColoursL16transparentBlackE_5;
  fVar20 = ((float)*(byte *)((long)param_6 + 3) / DAT_005de3b0) * DAT_005d9044 * param_4;
  uVar9 = 0;
  uVar11 = 0;
  if ((0.0 < fVar20) && (uVar11 = 0xff000000, fVar20 < DAT_005d9038)) {
    uVar11 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  uVar14 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  local_e8._4_4_ = local_98._0_4_;
  local_e8._0_4_ = local_68._0_4_;
  fStack_e0 = local_88 + param_3 * _DAT_005de524;
  fStack_dc = (float)local_98._0_4_;
  local_d8 = (float)CONCAT31(local_d8._1_3_,1);
  __ptr_00 = malloc(0x80);
  local_c8 = 8;
  *__ptr_00 = 0.0;
  *(undefined4 *)(__ptr_00 + 1) = uVar2;
  __ptr_00[2] = 1.0;
  *(uint *)(__ptr_00 + 3) = uVar11 | uVar14;
  __ptr_00[4] = __ptr_00[2];
  *(undefined4 *)(__ptr_00 + 5) = *(undefined4 *)(__ptr_00 + 3);
  *(undefined4 *)((long)__ptr_00 + 0x2c) = *(undefined4 *)((long)__ptr_00 + 0x1c);
  __ptr_00[2] = 0.5;
  *(undefined4 *)(__ptr_00 + 3) = uVar2;
  local_c4 = 3;
  fVar20 = DAT_005de528 * param_4;
  if ((0.0 < fVar20) && (uVar9 = 0xff000000, fVar20 < DAT_005d9038)) {
    uVar9 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  lVar10 = 0;
  local_d0 = __ptr_00;
  if (((_DAT_00652bb0 < *__ptr_00) || (lVar10 = 1, _DAT_00652bb0 < __ptr_00[2])) ||
     (lVar10 = 2, _DAT_00652bb0 < __ptr_00[4])) {
    __src_00 = __ptr_00 + lVar10 * 2;
    memmove(__ptr_00 + lVar10 * 2 + 2,__src_00,(ulong)((uint)lVar10 ^ 3) << 4);
  }
  else {
    __src_00 = __ptr_00 + 6;
  }
  *__src_00 = 0.7;
  *(uint *)(__src_00 + 1) = uVar9 | uVar14;
  local_c4 = 4;
                    /* try { // try from 002b8157 to 002b8276 has its CatchHandler @ 002b8388 */
  Graphics::setGradientFill(this,(undefined8 *)local_e8);
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)uStack_110._4_4_ != 0) {
      pfVar6 = local_118;
      do {
        fVar20 = *pfVar6;
        if ((fVar20 != DAT_005de3d0) || (NAN(fVar20) || NAN(DAT_005de3d0))) {
          if ((fVar20 != DAT_005de3d4) || (NAN(fVar20) || NAN(DAT_005de3d4))) {
            if (((fVar20 != DAT_005de3d8) || (NAN(fVar20) || NAN(DAT_005de3d8))) &&
               ((fVar20 != DAT_005de3dc || (NAN(fVar20) || NAN(DAT_005de3dc))))) goto LAB_002b81b4;
          }
          local_b8 = ZEXT416((uint)DAT_005d9038);
          local_a8 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_118,local_b8);
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_002b81b4:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_118 + uStack_110._4_4_);
    }
  }
  fVar20 = ((float)*(byte *)((long)param_6 + 3) / DAT_005de3b0) * DAT_005d9044;
  uVar11 = 0;
  if ((0.0 < fVar20) && (uVar11 = 0xff000000, fVar20 < DAT_005d9038)) {
    uVar11 = SUB84((double)(fVar20 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  Graphics::setColour(this,_ZN4juce7ColoursL5blackE_14 & 0xffffff | uVar11);
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_b8 = ZEXT416((uint)DAT_005d9038);
  local_a8 = 0x3f800000;
                    /* try { // try from 002b82b2 to 002b834b has its CatchHandler @ 002b8384 */
  local_58[0] = param_4;
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)uStack_110._4_4_ != 0) {
      pfVar6 = local_118;
      do {
        fVar20 = *pfVar6;
        if ((fVar20 != DAT_005de3d0) || (NAN(fVar20) || NAN(DAT_005de3d0))) {
          if ((fVar20 != DAT_005de3d4) || (NAN(fVar20) || NAN(DAT_005de3d4))) {
            if (((fVar20 != DAT_005de3d8) || (NAN(fVar20) || NAN(DAT_005de3d8))) &&
               ((fVar20 != DAT_005de3dc || (NAN(fVar20) || NAN(DAT_005de3dc))))) goto LAB_002b8304;
          }
          (**(code **)(**(long **)(this + 8) + 0xd8))
                    (*(long **)(this + 8),&local_118,local_58,local_b8);
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_002b8304:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_118 + uStack_110._4_4_);
    }
  }
  free(__ptr_00);
  uStack_110 = uStack_110 & 0xffffffff;
  free(local_118);
  return;
}


