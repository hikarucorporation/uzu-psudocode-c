// Function : resized
// Namespace: juce:DrawableButton
// Entry    : 002878b0
// Prototype: undefined resized(undefined8 param_1, undefined8 param_2, long * param_3)
// Body     : 002878b0 - 00287a28


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::DrawableButton::resized() */

void __cdecl juce::DrawableButton::resized(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  Component *this;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  undefined1 local_28 [16];
  
  this = (Component *)param_3[0x48];
  if ((this != (Component *)0x0) && (iVar1 = (int)param_3[0x3f], iVar1 != 1)) {
    if (iVar1 == 5) {
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
    }
    else if (iVar1 == 4) {
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
    }
    local_38 = (**(code **)(*param_3 + 0x1d0))();
    if ((0.0 < (float)param_2) && (0.0 < (float)((ulong)param_2 >> 0x20))) {
      local_28._8_4_ = in_XMM1_Dc;
      local_28._0_8_ = param_2;
      local_28._12_4_ = in_XMM1_Dd;
      uVar7 = (**(code **)(*(long *)this + 0x1a8))(this);
      fVar8 = (float)((ulong)param_2 >> 0x20);
      local_4c = 0.0;
      uVar9 = _DAT_005dcc70;
      if ((float)param_2 <= 0.0) {
        local_48 = 0.0;
        local_44 = 0.0;
        local_3c = 0.0;
      }
      else {
        local_48 = 0.0;
        local_44 = 0.0;
        local_3c = 0.0;
        if (0.0 < fVar8) {
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = param_2;
          auVar10._12_4_ = in_XMM1_Dd;
          auVar10 = divps(local_28,auVar10);
          uVar9 = auVar10._0_8_;
          if (bVar2) {
            uVar5 = local_38;
          }
          else {
            fVar11 = auVar10._4_4_;
            if (auVar10._0_4_ <= auVar10._4_4_) {
              fVar11 = auVar10._0_4_;
            }
            if (bVar3) {
              fVar6 = DAT_005d9038;
              if (fVar11 <= DAT_005d9038) {
                fVar6 = fVar11;
              }
              fVar11 = fVar6;
            }
            if (bVar4) {
              fVar6 = DAT_005d9038;
              if (DAT_005d9038 <= fVar11) {
                fVar6 = fVar11;
              }
              fVar11 = fVar6;
            }
            uVar9 = CONCAT44(fVar11,fVar11);
            uVar5 = CONCAT44(local_38._4_4_ + (local_28._4_4_ - fVar8 * fVar11) * _UNK_005d9924,
                             (float)local_38 +
                             (local_28._0_4_ - (float)param_2 * fVar11) * _DAT_005d9920);
          }
          local_4c = (float)uVar9 * 0.0;
          fVar8 = (float)((ulong)uVar9 >> 0x20);
          local_44 = fVar8 * 0.0;
          local_48 = (float)uVar5 - (float)uVar7 * (float)uVar9;
          local_3c = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar7 >> 0x20) * fVar8;
        }
      }
      local_50 = (float)uVar9;
      local_40 = (undefined4)((ulong)uVar9 >> 0x20);
      Component::setTransform(this,&local_50);
    }
  }
  return;
}


