// Function : drawComboBox
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f1f00
// Prototype: undefined drawComboBox(undefined8 param_1, Graphics * param_2, int param_3, ulong param_4)
// Body     : 001f1f00 - 001f221c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V4::drawComboBox(juce::Graphics&, int, int, bool, int, int, int, int,
   juce::ComboBox&) */

void __cdecl
juce::LookAndFeel_V4::drawComboBox(undefined8 param_1,Graphics *param_2,int param_3,ulong param_4)

{
  Graphics *this;
  char cVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  uint uVar5;
  Component *pCVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  Component *in_stack_00000020;
  float *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  Graphics *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  pCVar6 = in_stack_00000020;
  local_60 = param_2;
  do {
    pCVar6 = *(Component **)(pCVar6 + 0x30);
    if (pCVar6 == (Component *)0x0) break;
    lVar2 = __dynamic_cast(pCVar6,&Component::typeinfo,&ChoicePropertyComponent::typeinfo,0);
  } while (lVar2 == 0);
  uVar3 = Component::findColour(in_stack_00000020,0x1000b00,'\0');
  this = local_60;
  Graphics::setColour(local_60,(int)uVar3);
  local_78 = (float)param_3;
  fStack_74 = (float)(int)param_4;
  uStack_70 = 0;
  local_a8 = (float *)0x0;
  uStack_a0._0_4_ = local_78;
  uStack_a0._4_4_ = fStack_74;
  (**(code **)(**(long **)(this + 8) + 0x120))(*(long **)(this + 8),&local_a8);
  uVar3 = Component::findColour(in_stack_00000020,0x1000c00,'\0');
  Graphics::setColour(this,(int)uVar3);
  auVar7._0_4_ = local_78 + _DAT_005d9910;
  auVar7._4_4_ = fStack_74 + _UNK_005d9914;
  auVar7._8_4_ = (float)uStack_70 + _UNK_005d9918;
  auVar7._12_4_ = uStack_70._4_4_ + _UNK_005d991c;
  auVar7 = maxps(auVar7,_DAT_005d9480);
  uStack_a0 = auVar7._0_8_;
  local_a8 = _DAT_005d9920;
  (**(code **)(**(long **)(this + 8) + 0x118))(*(long **)(this + 8),&local_a8);
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  local_88 = 1;
  local_78 = (float)(param_3 + -0x1e);
  fStack_74 = (float)((int)(((uint)(param_4 >> 0x1f) & 1) + (int)param_4) >> 1);
  uStack_70 = 0;
  fVar8 = _DAT_005dce00 + local_78;
  fVar9 = _UNK_005dce04 + fStack_74;
  local_98 = CONCAT44(fVar8,fVar8);
  fStack_90 = fVar9;
  fStack_8c = fVar9;
  local_a8 = malloc(0x20);
  *local_a8 = 100002.0;
  local_a8[1] = fVar8;
  uStack_a0 = 0x300000008;
  local_a8[2] = fVar9;
  Path::lineTo((float)(param_3 + -0x14),fStack_74 + DAT_0065449c,(Path *)&local_a8);
  Path::lineTo((float)(param_3 + -10) + DAT_00652610,fVar9,(Path *)&local_a8);
                    /* try { // try from 001f20f1 to 001f2135 has its CatchHandler @ 001f221f */
  uVar3 = Component::findColour(in_stack_00000020,0x1000e00,'\0');
  do {
    if ((*(ushort *)(in_stack_00000020 + 0xe8) & 0x8000) != 0) {
      uVar5 = 0x33000000;
      goto LAB_001f2125;
    }
    in_stack_00000020 = *(Component **)(in_stack_00000020 + 0x30);
  } while (in_stack_00000020 != (Component *)0x0);
  uVar5 = 0xe6000000;
LAB_001f2125:
  Graphics::setColour(this,(uint)uVar3 & 0xffffff | uVar5);
  local_58 = 0x40000000;
  local_50 = 0;
  local_48 = ZEXT416(DAT_005d9038);
  local_38 = 0x3f800000;
                    /* try { // try from 001f2167 to 001f21f8 has its CatchHandler @ 001f221d */
  cVar1 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)(int)uStack_a0._4_4_ != 0) {
      pfVar4 = local_a8;
      do {
        fVar8 = *pfVar4;
        if ((fVar8 != DAT_005de3d0) || (NAN(fVar8) || NAN(DAT_005de3d0))) {
          if ((fVar8 != DAT_005de3d4) || (NAN(fVar8) || NAN(DAT_005de3d4))) {
            if (((fVar8 != DAT_005de3d8) || (NAN(fVar8) || NAN(DAT_005de3d8))) &&
               ((fVar8 != DAT_005de3dc || (NAN(fVar8) || NAN(DAT_005de3dc))))) goto LAB_001f21b4;
          }
          (**(code **)(**(long **)(this + 8) + 0xd8))
                    (*(long **)(this + 8),&local_a8,&local_58,local_48);
          break;
        }
        pfVar4 = pfVar4 + 2;
LAB_001f21b4:
        pfVar4 = pfVar4 + 1;
      } while (pfVar4 != local_a8 + (int)uStack_a0._4_4_);
    }
  }
  uStack_a0 = uStack_a0 & 0xffffffff;
  free(local_a8);
  return;
}


