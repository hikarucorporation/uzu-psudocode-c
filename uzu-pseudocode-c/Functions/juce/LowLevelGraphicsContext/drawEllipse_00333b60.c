// Function : drawEllipse
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 00333b60
// Prototype: undefined drawEllipse(float param_1, LowLevelGraphicsContext * this, undefined8 * param_3)
// Body     : 00333b60 - 00333cfd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LowLevelGraphicsContext::drawEllipse(juce::Rectangle<float> const&, float) */

void __thiscall
juce::LowLevelGraphicsContext::drawEllipse
          (float param_1,LowLevelGraphicsContext *this,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  undefined1 local_88 [16];
  undefined8 local_78;
  void *local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  float local_38 [4];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_48 = 1;
  uVar1 = param_3[1];
  fVar3 = (float)uVar1;
  fVar6 = (float)((ulong)uVar1 >> 0x20);
  fVar2 = (float)((uint)fVar3 & _DAT_005d91c0);
  if ((fVar2 == DAT_005d94c8) ||
     (fVar7 = (float)((uint)fVar6 & _DAT_005d91c0), fVar7 == DAT_005d94c8)) {
    if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
LAB_00333bec:
      Path::addEllipse(*param_3,uVar1,(Path *)&local_68);
      local_38[1] = 0.0;
      local_38[2] = 0.0;
      local_88 = ZEXT416(DAT_005d9038);
      local_78 = 0x3f800000;
                    /* try { // try from 00333c2d to 00333c42 has its CatchHandler @ 00333cfe */
      local_38[0] = param_1;
      (**(code **)(*(long *)this + 0xd8))(this,(Path *)&local_68,local_38,local_88);
      goto LAB_00333cdf;
    }
  }
  else {
    fVar8 = (float)((uint)(fVar3 - fVar6) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar8) {
      if (fVar7 <= fVar2) {
        fVar7 = fVar2;
      }
      if (fVar7 * DAT_005d94d0 < fVar8) goto LAB_00333bec;
    }
  }
  local_28 = param_1 * DAT_005d9044;
  fVar2 = local_28 + local_28;
  auVar4._0_4_ = fVar3 + fVar2;
  auVar4._4_4_ = fVar6 + fVar2;
  auVar4._8_4_ = fVar2 + 0.0;
  auVar4._12_4_ = fVar2 + 0.0;
  auVar4 = maxps(auVar4,ZEXT816(0));
  fStack_24 = local_28;
  fStack_20 = local_28;
  fStack_1c = local_28;
  Path::addEllipse(CONCAT44((float)((ulong)*param_3 >> 0x20) - local_28,(float)*param_3 - local_28),
                   auVar4._0_8_,(Path *)&local_68);
  auVar5._0_4_ = (float)param_3[1] - fVar2;
  auVar5._4_4_ = (float)((ulong)param_3[1] >> 0x20) - fVar2;
  auVar5._8_4_ = 0.0 - fVar2;
  auVar5._12_4_ = 0.0 - fVar2;
  auVar4 = maxps(auVar5,_DAT_005d9480);
  Path::addEllipse(CONCAT44((float)((ulong)*param_3 >> 0x20) + fStack_24,(float)*param_3 + local_28)
                   ,auVar4._0_8_,(Path *)&local_68);
  local_48 = 0;
  local_88 = ZEXT416(DAT_005d9038);
  local_78 = 0x3f800000;
                    /* try { // try from 00333cce to 00333cde has its CatchHandler @ 00333d00 */
  (**(code **)(*(long *)this + 200))(this,(Path *)&local_68,local_88);
LAB_00333cdf:
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return;
}


