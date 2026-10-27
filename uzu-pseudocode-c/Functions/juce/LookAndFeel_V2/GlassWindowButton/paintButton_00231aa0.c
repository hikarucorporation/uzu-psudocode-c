// Function : paintButton
// Namespace: juce:LookAndFeel_V2:GlassWindowButton
// Entry    : 00231aa0
// Prototype: undefined paintButton(GlassWindowButton * this, Graphics * param_1, int param_2, int param_3)
// Body     : 00231aa0 - 00231fad


/* juce::LookAndFeel_V2::GlassWindowButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::GlassWindowButton::paintButton
          (GlassWindowButton *this,Graphics *param_1,int param_2,int param_3)

{
  GlassWindowButton *pGVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  float *pfVar6;
  GlassWindowButton *pGVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  
  fVar12 = DAT_005d9038;
  if (param_3 == 0) {
    fVar12 = DAT_005de3cc;
  }
  if (param_2 == 0) {
    fVar12 = DAT_005de46c;
  }
  pGVar7 = this;
  do {
    pGVar1 = pGVar7 + 0xe8;
    if ((*(uint3 *)pGVar1 & 0x8000) != 0) break;
    pGVar7 = *(GlassWindowButton **)(pGVar7 + 0x30);
  } while (pGVar7 != (GlassWindowButton *)0x0);
  iVar3 = *(int *)(this + 0x40);
  iVar4 = *(int *)(this + 0x44);
  iVar8 = iVar3 - iVar4;
  if (iVar3 < iVar4) {
    iVar8 = -(iVar3 - iVar4);
    iVar4 = iVar3;
  }
  if ((*(uint3 *)pGVar1 & 0x8000) != 0) {
    fVar12 = fVar12 * DAT_005d9044;
  }
  fStack_3c = DAT_005d904c * (float)iVar4;
  local_38 = (float)iVar4 * DAT_005de3c8;
  local_48 = fStack_3c + 0.0;
  fStack_74 = fStack_3c + (float)iVar8 * DAT_005d9044;
  fStack_40 = fStack_3c + 0.0;
  fStack_3c = fStack_3c + 0.0;
  if (fVar12 <= 0.0) {
    uVar9 = 0x999999;
    uVar10 = 0xe6e6e6;
  }
  else {
    uVar10 = 0xffe6e6e6;
    if (fVar12 < DAT_005d9038) {
      uVar10 = SUB84((double)(DAT_005de3b0 * fVar12) + DAT_005d9098,0) << 0x18 | 0xe6e6e6;
    }
    uVar9 = 0xff999999;
    if (fVar12 < DAT_005d9038) {
      uVar9 = SUB84((double)(DAT_005de3b0 * fVar12) + DAT_005d9098,0) << 0x18 | 0x999999;
    }
  }
  fStack_7c = fStack_74 + local_38;
  local_80 = 0.0;
  fStack_78 = 0.0;
  local_70 = (float)((uint)local_70 & 0xffffff00);
  local_58 = fStack_74;
  fStack_54 = fStack_74;
  fStack_50 = fStack_74;
  fStack_4c = fStack_74;
  fStack_44 = fStack_74;
  local_68 = malloc(0x80);
  local_60 = 8;
  *local_68 = 0;
  *(uint *)(local_68 + 1) = uVar10;
  local_5c = 2;
  local_68[2] = 0x3ff0000000000000;
  *(uint *)(local_68 + 3) = uVar9;
                    /* try { // try from 00231c67 to 00231c73 has its CatchHandler @ 00231fc6 */
  Graphics::setGradientFill(param_1,(undefined8 *)&local_80);
  free(local_68);
  local_80 = local_48;
  fStack_7c = fStack_44;
  fStack_78 = local_38;
  fStack_74 = local_38;
  (**(code **)(**(long **)(param_1 + 8) + 0x130))(*(long **)(param_1 + 8),&local_80);
  uVar9 = 0;
  local_48 = local_48 + DAT_005d9078;
  local_58 = local_58 + DAT_005d9078;
  local_38 = local_38 + DAT_0065b5a8;
  if ((0.0 < fVar12) && (uVar9 = 0xff000000, fVar12 < DAT_005d9038)) {
    uVar9 = SUB84((double)(DAT_005de3b0 * fVar12) + DAT_005d9098,0) << 0x18;
  }
  local_80 = (float)(*(uint *)(this + 0x1f8) & 0xffffff | uVar9);
  drawGlassSphere(local_48,local_58,local_38,DAT_005d9038,param_1,(uint *)&local_80);
                    /* try { // try from 00231d48 to 00231d4f has its CatchHandler @ 00231fbe */
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_80);
                    /* try { // try from 00231d5a to 00231d5f has its CatchHandler @ 00231fb6 */
  cVar5 = (**(code **)(CONCAT44(fStack_7c,local_80) + 0x30))(&fStack_78);
                    /* try { // try from 00231d67 to 00231d6c has its CatchHandler @ 00231fae */
  (**(code **)(CONCAT44(fStack_7c,local_80) + 0x58))(&fStack_78);
  pGVar7 = this + 0x200;
  if (cVar5 != '\0') {
    pGVar7 = this + 0x228;
  }
  fVar11 = DAT_005d98f0 * local_38;
  local_80 = DAT_005d9038;
  local_70 = DAT_005d9038;
  if (0.0 < fVar11) {
    fVar13 = *(float *)(pGVar7 + 0x14) - *(float *)(pGVar7 + 0x10);
    fStack_7c = 0.0;
    if (0.0 < fVar13) {
      fVar17 = *(float *)(pGVar7 + 0x1c) - *(float *)(pGVar7 + 0x18);
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      local_6c = 0.0;
      if (0.0 < fVar17) {
        auVar15._4_4_ = fVar11;
        auVar15._0_4_ = fVar17;
        auVar15._8_8_ = 0;
        auVar16._4_4_ = fVar11;
        auVar16._0_4_ = fVar13;
        auVar16._8_8_ = 0;
        auVar16 = divps(auVar15,auVar16);
        fVar14 = auVar16._0_4_;
        if (fVar14 <= auVar16._4_4_) {
          fVar14 = fVar14 * fVar11;
          local_80 = fVar11;
        }
        else {
          local_80 = fVar11 / fVar14;
          fVar14 = fVar11;
        }
        local_80 = local_80 / fVar13;
        local_70 = fVar14 / fVar17;
        fStack_7c = local_80 * 0.0;
        fStack_78 = (fVar13 * DAT_005d98c8 - *(float *)(pGVar7 + 0x10)) * local_80 +
                    local_48 + local_38 * DAT_005d9088 + fVar11 * DAT_005d9044;
        fStack_74 = local_70 * 0.0;
        local_6c = (DAT_005d98c8 * fVar17 - *(float *)(pGVar7 + 0x18)) * local_70 +
                   fVar11 * DAT_005d9044 + local_38 * DAT_005d9088 + local_58;
      }
      goto LAB_00231ea6;
    }
  }
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_6c = 0.0;
LAB_00231ea6:
  fVar12 = fVar12 * DAT_005d98e8;
  uVar9 = 0;
  if ((0.0 < fVar12) && (uVar9 = 0xff000000, fVar12 < DAT_005d9038)) {
    uVar9 = SUB84((double)(fVar12 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  Graphics::setColour(param_1,_ZN4juce7ColoursL5blackE_14 & 0xffffff | uVar9);
  cVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)*(int *)(pGVar7 + 0xc) != 0)) {
    pfVar6 = *(float **)pGVar7;
    pfVar2 = pfVar6 + *(int *)(pGVar7 + 0xc);
    do {
      fVar12 = *pfVar6;
      if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
        if ((fVar12 == DAT_005de3d4) && (!NAN(fVar12) && !NAN(DAT_005de3d4))) {
LAB_00231f8d:
          (**(code **)(**(long **)(param_1 + 8) + 200))(*(long **)(param_1 + 8),pGVar7,&local_80);
          return;
        }
        if (((fVar12 == DAT_005de3d8) && (!NAN(fVar12) && !NAN(DAT_005de3d8))) ||
           ((fVar12 == DAT_005de3dc && (!NAN(fVar12) && !NAN(DAT_005de3dc))))) goto LAB_00231f8d;
      }
      else {
        pfVar6 = pfVar6 + 2;
      }
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfVar2);
  }
  return;
}


