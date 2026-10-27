// Function : createSliderTextBox
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f5540
// Prototype: Label * createSliderTextBox(LookAndFeel_V4 * this, Component * param_1)
// Body     : 001f5540 - 001f55cc


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::createSliderTextBox(juce::Slider&) */

Label * __thiscall
juce::LookAndFeel_V4::createSliderTextBox(LookAndFeel_V4 *this,Component *param_1)

{
  undefined1 auVar1 [16];
  Label *this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  this_00 = LookAndFeel_V2::createSliderTextBox(this,param_1);
  auVar4._0_4_ = -(uint)(*(int *)(this + 0x16c) == _DAT_005dce40);
  auVar4._4_4_ = -(uint)(*(int *)(this + 0x170) == _UNK_005dce44);
  auVar4._8_4_ = -(uint)(*(int *)(this + 0x174) == _UNK_005dce48);
  auVar4._12_4_ = -(uint)(*(int *)(this + 0x178) == _UNK_005dce4c);
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  auVar2._0_4_ = -(uint)(*(int *)(this + 0x15c) == _DAT_005dce50);
  auVar2._4_4_ = -(uint)(*(int *)(this + 0x160) == _UNK_005dce54);
  auVar2._8_4_ = -(uint)(*(int *)(this + 0x164) == _UNK_005dce58);
  auVar2._12_4_ = -(uint)(*(int *)(this + 0x168) == _UNK_005dce5c);
  auVar1._8_4_ = 0xffffffff;
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1._12_4_ = 0xffffffff;
  auVar3 = packssdw(auVar2 ^ auVar1,auVar4 ^ auVar3);
  if ((((((((((((((((((SUB161(auVar3 >> 7,0) & 1) == 0 && (SUB161(auVar3 >> 0xf,0) & 1) == 0) &&
                    (SUB161(auVar3 >> 0x17,0) & 1) == 0) && (SUB161(auVar3 >> 0x1f,0) & 1) == 0) &&
                  (SUB161(auVar3 >> 0x27,0) & 1) == 0) && (SUB161(auVar3 >> 0x2f,0) & 1) == 0) &&
                (SUB161(auVar3 >> 0x37,0) & 1) == 0) && (SUB161(auVar3 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar3 >> 0x47,0) & 1) == 0) && (SUB161(auVar3 >> 0x4f,0) & 1) == 0) &&
            (SUB161(auVar3 >> 0x57,0) & 1) == 0) && (SUB161(auVar3 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar3 >> 0x67,0) & 1) == 0) && (SUB161(auVar3 >> 0x6f,0) & 1) == 0) &&
        (SUB161(auVar3 >> 0x77,0) & 1) == 0) && -1 < auVar3[0xf]) && (*(int *)(this + 0x17c) == -1))
     && ((*(uint *)(*(long *)(param_1 + 0x1a0) + 0x20) & 0xfffffffe) == 2)) {
    Component::setColour
              ((Component *)this_00,0x1000281,_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0xb2000000);
  }
  return this_00;
}


