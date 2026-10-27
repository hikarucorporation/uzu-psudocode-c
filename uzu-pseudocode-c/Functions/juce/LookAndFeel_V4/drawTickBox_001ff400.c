// Function : drawTickBox
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ff400
// Prototype: undefined drawTickBox(float param_1, float param_2, undefined8 param_3_00, undefined8 param_4_00, LookAndFeel_V4 * this, Graphics * param_6, Component * param_7, int param_8)
// Body     : 001ff400 - 001ff5dd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V4::drawTickBox(juce::Graphics&, juce::Component&, float,
   float, float, float, bool, bool, bool, bool) */

void __thiscall
juce::LookAndFeel_V4::drawTickBox
          (float param_1,float param_2,undefined8 param_3_00,undefined8 param_4_00,
          LookAndFeel_V4 *this,Graphics *param_6,Component *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  ulong uVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  fStack_34 = (float)param_4_00;
  fStack_2c = (float)((ulong)param_4_00 >> 0x20);
  local_38 = (float)param_3_00;
  fStack_30 = (float)((ulong)param_3_00 >> 0x20);
  local_48 = param_1;
  fStack_44 = param_2;
  uVar4 = Component::findColour(param_7,0x1006503,'\0');
  Graphics::setColour(param_6,(int)uVar4);
  local_88 = local_48;
  fStack_84 = fStack_44;
  fStack_80 = local_38;
  fStack_7c = fStack_34;
  (**(code **)(**(long **)(param_6 + 8) + 0x118))
            (DAT_005d94d4,DAT_005d9038,*(long **)(param_6 + 8),&local_88);
  if (param_8 != 0) {
    uVar4 = Component::findColour(param_7,0x1006502,'\0');
    Graphics::setColour(param_6,(int)uVar4);
    (**(code **)(*(long *)(this + -8) + 0x60))(DAT_0065b218,&local_88,this + -8);
    auVar6._0_4_ = local_38 + _DAT_005dcd90;
    auVar6._4_4_ = fStack_34 + _UNK_005dcd94;
    auVar6._8_4_ = fStack_30 + _UNK_005dcd98;
    auVar6._12_4_ = fStack_2c + _UNK_005dcd9c;
    auVar6 = maxps(auVar6,ZEXT816(0));
    local_60 = auVar6._0_4_ / (local_74 - local_78);
    local_50 = auVar6._4_4_ / (local_6c - local_70);
    local_5c = local_60 * 0.0;
    local_54 = local_50 * 0.0;
    local_58 = (local_48 + _DAT_005dcda0) - local_78 * local_60;
    local_4c = (fStack_44 + _UNK_005dcda4) - local_70 * local_50;
                    /* try { // try from 001ff543 to 001ff5c1 has its CatchHandler @ 001ff5de */
    cVar3 = (**(code **)(**(long **)(param_6 + 8) + 0x68))();
    if ((cVar3 == '\0') && ((long)(int)fStack_7c != 0)) {
      pfVar5 = (float *)CONCAT44(fStack_84,local_88);
      pfVar1 = pfVar5 + (int)fStack_7c;
      do {
        fVar2 = *pfVar5;
        if ((fVar2 != DAT_005de3d0) || (NAN(fVar2) || NAN(DAT_005de3d0))) {
          if ((fVar2 != DAT_005de3d4) || (NAN(fVar2) || NAN(DAT_005de3d4))) {
            if (((fVar2 != DAT_005de3d8) || (NAN(fVar2) || NAN(DAT_005de3d8))) &&
               ((fVar2 != DAT_005de3dc || (NAN(fVar2) || NAN(DAT_005de3dc))))) goto LAB_001ff584;
          }
          (**(code **)(**(long **)(param_6 + 8) + 200))(*(long **)(param_6 + 8),&local_88,&local_60)
          ;
          break;
        }
        pfVar5 = pfVar5 + 2;
LAB_001ff584:
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != pfVar1);
    }
    fStack_7c = 0.0;
    free((void *)CONCAT44(fStack_84,local_88));
  }
  return;
}


