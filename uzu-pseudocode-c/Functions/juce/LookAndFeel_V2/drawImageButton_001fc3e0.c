// Function : drawImageButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fc3e0
// Prototype: undefined drawImageButton(float param_1, undefined8 param_2_00, Graphics * param_3, long * param_4, int param_5, int param_6, int param_7, int param_8, undefined4 * param_9, long param_10)
// Body     : 001fc3e0 - 001fc5be


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawImageButton(juce::Graphics&, juce::Image*, int, int, int, int,
   juce::Colour const&, float, juce::ImageButton&) */

void __thiscall
juce::LookAndFeel_V2::drawImageButton
          (float param_1,undefined8 param_2_00,Graphics *param_3,long *param_4,int param_5,
          int param_6,int param_7,int param_8,undefined4 *param_9,long param_10)

{
  uint3 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  
  do {
    puVar1 = (uint3 *)(param_10 + 0xe8);
    if ((*puVar1 & 0x8000) != 0) break;
    param_10 = *(long *)(param_10 + 0x30);
  } while (param_10 != 0);
  uVar6 = _DAT_005dcc70;
  if (*param_4 != 0) {
    uVar2 = *(undefined8 *)(*param_4 + 0x10);
    iVar4 = (int)uVar2;
    if (0 < iVar4) {
      local_2c = 0.0;
      local_28 = 0.0;
      local_24 = 0.0;
      local_1c = 0.0;
      iVar5 = (int)((ulong)uVar2 >> 0x20);
      if (0 < iVar5) {
        auVar8._0_4_ = (float)iVar4;
        auVar8._4_4_ = (float)iVar5;
        auVar8._8_8_ = 0;
        auVar7._0_4_ = (float)param_7;
        auVar7._4_4_ = (float)param_8;
        auVar7._8_8_ = 0;
        auVar8 = divps(auVar7,auVar8);
        local_2c = auVar8._0_4_ * 0.0;
        local_24 = auVar8._4_4_ * 0.0;
        local_28 = (float)param_5 - local_2c;
        local_1c = (float)param_6 - local_24;
        uVar6 = auVar8._0_8_;
      }
      goto LAB_001fc4c8;
    }
  }
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_1c = 0.0;
LAB_001fc4c8:
  local_30 = (undefined4)uVar6;
  local_20 = (undefined4)((ulong)uVar6 >> 0x20);
  if (*(char *)((long)param_9 + 3) != -1) {
    if ((*puVar1 & 0x8000) != 0) {
      param_1 = param_1 * DAT_005d9088;
    }
    if (param_3[0x10] != (Graphics)0x0) {
      param_3[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_3 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_3 + 8) + 0x98))(param_1);
    if ((*param_4 != 0) && (cVar3 = (**(code **)(**(long **)(param_3 + 8) + 0x68))(), cVar3 == '\0')
       ) {
      (**(code **)(**(long **)(param_3 + 8) + 0xe0))(*(long **)(param_3 + 8),param_4,&local_30);
    }
    if (*(char *)((long)param_9 + 3) == '\0') {
      return;
    }
  }
  Graphics::setColour(param_3,*param_9);
  if ((*param_4 != 0) && (cVar3 = (**(code **)(**(long **)(param_3 + 8) + 0x68))(), cVar3 == '\0'))
  {
    (**(code **)(**(long **)(param_3 + 8) + 0x70))();
    (**(code **)(**(long **)(param_3 + 8) + 0x50))(*(long **)(param_3 + 8),param_4,&local_30);
    (**(code **)(**(long **)(param_3 + 8) + 0xa8))();
    (**(code **)(**(long **)(param_3 + 8) + 0x78))();
  }
  return;
}


