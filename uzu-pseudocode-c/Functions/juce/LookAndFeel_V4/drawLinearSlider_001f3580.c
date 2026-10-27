// Function : drawLinearSlider
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f3580
// Prototype: undefined drawLinearSlider(float param_1, float param_2, float param_3, LookAndFeel_V4 * this, Graphics * param_5, ulong param_6_00, uint param_7, int param_8, int param_9, uint param_10, Component * param_11)
// Body     : 001f3580 - 001f40c7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawLinearSlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider::SliderStyle, juce::Slider&) */

void __thiscall
juce::LookAndFeel_V4::drawLinearSlider
          (float param_1,float param_2,float param_3,LookAndFeel_V4 *this,Graphics *param_5,
          ulong param_6_00,uint param_7,int param_8,int param_9,uint param_10,Component *param_11)

{
  uint uVar1;
  undefined8 __ptr;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  void *pvVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_178;
  float fStack_174;
  float local_128;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  float local_e0 [2];
  undefined1 local_d8 [4];
  undefined8 uStack_d4;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98;
  ulong local_90;
  ulong local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [16];
  float local_68 [4];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  uVar1 = *(uint *)(*(long *)(param_11 + 0x1a0) + 0x20);
  iVar11 = (int)param_6_00;
  if ((uVar1 & 0xfffffffe) == 2) {
    uVar5 = Component::findColour(param_11,0x1001310,'\0');
    Graphics::setColour(param_5,(int)uVar5);
    if ((*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) < 0xc) &&
       ((0xa05U >> (*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) & 0x1f) & 1) != 0)) {
      fVar13 = (float)iVar11;
      fVar14 = param_1 - fVar13;
      fVar15 = (float)param_9 + DAT_005d9054;
      param_1 = (float)(int)param_7 + DAT_005d9044;
    }
    else {
      fVar13 = (float)iVar11 + DAT_005d9044;
      fVar14 = (float)param_8 + DAT_005d9054;
      fVar15 = ((float)param_9 - param_1) + (float)(int)param_7;
    }
    local_b8 = (float *)CONCAT44(param_1,fVar13);
    uStack_b0 = CONCAT44(fVar15,fVar14);
    (**(code **)(**(long **)(param_5 + 8) + 0xb8))(*(long **)(param_5 + 8),&local_b8);
                    /* WARNING: Could not recover jumptable at 0x001f36a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x2c8))
              (this,param_5,param_6_00 & 0xffffffff,(ulong)param_7,param_8,param_9);
    return;
  }
  iVar4 = param_8;
  if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
    iVar4 = param_9;
  }
  if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
    local_178 = (float)iVar11;
    if (0xb < uVar1) goto LAB_001f3d9d;
LAB_001f36e6:
    if ((0xa05U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_001f3d9d;
    fStack_a0 = (float)param_9 * DAT_005d9044 + (float)(int)param_7;
    if (uVar1 < 0xc) goto LAB_001f3719;
LAB_001f3db1:
    local_58 = ZEXT416((uint)(float)(iVar11 + param_8));
    local_128 = local_178;
    if (0xb < uVar1) goto LAB_001f3ddb;
LAB_001f374c:
    if ((0xa05U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_001f3ddb;
    fVar13 = fStack_a0;
  }
  else {
    local_178 = (float)param_8 * DAT_005d9044 + (float)iVar11;
    if (uVar1 < 0xc) goto LAB_001f36e6;
LAB_001f3d9d:
    fStack_a0 = (float)(int)(param_7 + param_9);
    if (0xb < uVar1) goto LAB_001f3db1;
LAB_001f3719:
    if ((0xa05U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_001f3db1;
    local_128 = (float)(iVar11 + param_8);
    local_58 = ZEXT416((uint)local_128);
    if (uVar1 < 0xc) goto LAB_001f374c;
LAB_001f3ddb:
    fVar13 = (float)(int)param_7;
  }
  local_78 = ZEXT416((uint)(float)(int)param_7);
  local_88 = (ulong)param_10;
  local_b8 = (float *)0x0;
  uStack_b0 = 0;
  local_98 = 1;
  local_48 = ZEXT416((uint)fStack_a0);
  local_a8 = local_178;
  fStack_a4 = local_178;
  fStack_9c = fStack_a0;
  local_b8 = malloc(0x20);
  *local_b8 = 100002.0;
  local_b8[1] = local_178;
  uStack_b0 = 0x300000008;
  local_b8[2] = (float)local_48._0_4_;
  Path::lineTo(local_128,fVar13,(Path *)&local_b8);
                    /* try { // try from 001f3809 to 001f3821 has its CatchHandler @ 001f40d3 */
  uVar5 = Component::findColour(param_11,0x1001200,'\0');
  Graphics::setColour(param_5,(int)uVar5);
  fVar13 = (float)iVar4 * DAT_0065b200;
  if (DAT_005d98e4 <= (float)iVar4 * DAT_0065b200) {
    fVar13 = DAT_005d98e4;
  }
  uStack_d4 = 0x200000001;
  local_d8 = (undefined1  [4])fVar13;
  local_108 = ZEXT416(DAT_005d9038);
  local_f8 = 0x3f800000;
                    /* try { // try from 001f387c to 001f3921 has its CatchHandler @ 001f40ce */
  cVar3 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)uStack_b0._4_4_ != 0) {
      pfVar6 = local_b8;
      do {
        fVar14 = *pfVar6;
        if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
          if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
            if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
               ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_001f38d4;
          }
          (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                    (*(long **)(param_5 + 8),&local_b8,local_d8,local_108);
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_001f38d4:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_b8 + uStack_b0._4_4_);
    }
  }
  uVar9 = (int)local_88 - 9;
  uVar12 = (int)local_88 - 0xb;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = ZEXT816(0);
  local_e8 = 1;
  local_e0[0] = 0.0;
  local_e0[1] = 0.0;
  uVar1 = *(uint *)(*(long *)(param_11 + 0x1a0) + 0x20);
  if (uVar9 < 4) {
    if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
      local_80 = (float)param_8 * DAT_005d9044;
      local_178 = param_2;
      if (0xb < uVar1) goto LAB_001f4077;
LAB_001f39c8:
      if ((0xa05U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_001f4077;
      local_7c = (float)param_9 * DAT_005d9044;
      fStack_174 = local_7c;
    }
    else {
      local_80 = (float)param_8 * DAT_005d9044;
      local_178 = local_80;
      if (uVar1 < 0xc) goto LAB_001f39c8;
LAB_001f4077:
      local_7c = (float)param_9 * DAT_005d9044;
      fStack_174 = param_2;
    }
    if (uVar12 < 2) {
      local_e0[0] = local_80;
      if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
        local_e0[0] = param_1;
      }
      if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
        param_1 = local_7c;
      }
      local_e0[1] = param_1;
    }
    if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
      local_80 = param_3;
    }
    if ((0xb < uVar1) || ((0xa05U >> (uVar1 & 0x1f) & 1) == 0)) {
      local_7c = param_3;
    }
  }
  else {
    if ((0xb < uVar1) || (local_80 = param_1, (0xa05U >> (uVar1 & 0x1f) & 1) == 0)) {
      local_80 = (float)param_8 * DAT_005d9044 + (float)iVar11;
    }
    fStack_174 = (float)local_48._0_4_;
    if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
      local_7c = (float)param_9 * DAT_005d9044 + (float)local_78._0_4_;
    }
    else {
      local_7c = param_1;
    }
  }
                    /* try { // try from 001f3ae7 to 001f3ba6 has its CatchHandler @ 001f40d8 */
  local_90 = (ulong)param_7;
  iVar4 = (**(code **)(*(long *)this + 0x2e0))(this,param_11);
  local_f8 = CONCAT44(local_178,local_178);
  uStack_f0 = CONCAT44(fStack_174,fStack_174);
  pvVar7 = realloc((void *)local_108._0_8_,0x20);
  lVar10 = (long)(int)local_108._12_4_;
  local_108._8_4_ = 8;
  local_108._0_8_ = pvVar7;
  *(undefined4 *)((long)pvVar7 + lVar10 * 4) = 0x47c35100;
  *(float *)((long)pvVar7 + lVar10 * 4 + 4) = local_178;
  local_108._12_4_ = local_108._12_4_ + 3;
  *(float *)((long)pvVar7 + lVar10 * 4 + 8) = fStack_174;
  pfVar6 = &local_80;
  if (uVar12 < 2) {
    pfVar6 = local_e0;
  }
  Path::lineTo((float)*(undefined8 *)pfVar6,(float)((ulong)*(undefined8 *)pfVar6 >> 0x20),
               (Path *)local_108);
  uVar5 = Component::findColour(param_11,0x1001310,'\0');
  Graphics::setColour(param_5,(int)uVar5);
  local_68[1] = 1.4013e-45;
  local_68[2] = 2.8026e-45;
  _local_d8 = ZEXT416(DAT_005d9038);
  local_c8 = 0x3f800000;
                    /* try { // try from 001f3be0 to 001f3c81 has its CatchHandler @ 001f40cc */
  local_68[0] = fVar13;
  cVar3 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)(int)local_108._12_4_ != 0) {
      pfVar8 = (float *)local_108._0_8_;
      do {
        fVar14 = *pfVar8;
        if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
          if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
            if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
               ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_001f3c34;
          }
          (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                    (*(long **)(param_5 + 8),local_108,local_68,local_d8);
          break;
        }
        pfVar8 = pfVar8 + 2;
LAB_001f3c34:
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != (float *)(local_108._0_8_ + (long)(int)local_108._12_4_ * 4));
    }
  }
  if (1 < uVar9) {
                    /* try { // try from 001f3c89 to 001f3ca1 has its CatchHandler @ 001f40d8 */
    uVar5 = Component::findColour(param_11,0x1001300,'\0');
    Graphics::setColour(param_5,(int)uVar5);
    uStack_d4._4_4_ = (float)iVar4;
    uStack_d4._0_4_ = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) - DAT_005d9044 * uStack_d4._4_4_
    ;
    local_d8 = (undefined1  [4])((float)*(undefined8 *)pfVar6 - DAT_005d9044 * uStack_d4._4_4_);
    fStack_cc = uStack_d4._4_4_;
                    /* try { // try from 001f3cd5 to 001f3ce2 has its CatchHandler @ 001f40c8 */
    (**(code **)(**(long **)(param_5 + 8) + 0x130))(*(long **)(param_5 + 8),local_d8);
    if (3 < uVar9) goto LAB_001f3fca;
  }
  iVar4 = param_8;
  if ((*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) < 0xc) &&
     ((0xa05U >> (*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) & 0x1f) & 1) != 0)) {
    iVar4 = param_9;
  }
                    /* try { // try from 001f3e18 to 001f3e26 has its CatchHandler @ 001f40ca */
  uVar5 = Component::findColour(param_11,0x1001300,'\0');
  fVar14 = (float)iVar4 * DAT_005d98f0;
  if (fVar13 <= (float)iVar4 * DAT_005d98f0) {
    fVar14 = fVar13;
  }
  local_d8 = (undefined1  [4])(int)uVar5;
  if ((*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) < 0xc) &&
     ((0xa05U >> (*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) & 0x1f) & 1) != 0)) {
    fVar16 = (float)param_9 * _DAT_005dce10 + (float)local_78._0_4_;
    fVar17 = (float)(_DAT_006524b0 ^ (uint)fVar13) * _UNK_005dce14 +
             (float)(param_9 + (int)local_90);
    fVar15 = fVar16 - (fVar13 + fVar13);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    drawPointer(param_2 - fVar14,fVar15,fVar13 + fVar13,param_5,(undefined4 *)local_d8,2);
    fVar15 = param_3 - fVar13;
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    iVar11 = 4;
  }
  else {
    fVar15 = (float)param_8 * _DAT_005dce10 + (float)iVar11;
    fVar17 = (float)(_DAT_006524b0 ^ (uint)fVar13) * _UNK_005dce14 + (float)local_58._0_4_;
    fVar16 = fVar15 - (fVar13 + fVar13);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    drawPointer(fVar16,param_2 - fVar13,fVar13 + fVar13,param_5,(undefined4 *)local_d8,1);
    if (fVar17 <= fVar15) {
      fVar15 = fVar17;
    }
    fVar16 = param_3 - fVar14;
    iVar11 = 3;
  }
  drawPointer(fVar15,fVar16,fVar13 + fVar13,param_5,(undefined4 *)local_d8,iVar11);
LAB_001f3fca:
  if ((*(uint *)(*(long *)(param_11 + 0x1a0) + 0x20) & 0xfffffffe) == 2) {
                    /* try { // try from 001f3fe7 to 001f4012 has its CatchHandler @ 001f40d8 */
    (**(code **)(*(long *)this + 0x2c8))
              (this,param_5,param_6_00,local_90,param_8,param_9,local_88,param_11);
  }
  local_108._12_4_ = 0;
  auVar2 = local_108;
  __ptr = local_108._0_8_;
  local_108 = auVar2;
  free((void *)__ptr);
  uStack_b0 = uStack_b0 & 0xffffffff;
  free(local_b8);
  return;
}


