// Function : setRange
// Namespace: juce:Slider
// Entry    : 002d8d80
// Prototype: undefined setRange(undefined8 param_1, undefined8 param_2, undefined8 param_3, Slider * this)
// Body     : 002d8d80 - 002d900b


/* juce::Slider::setRange(double, double, double) */

void __thiscall
juce::Slider::setRange(undefined8 param_1,undefined8 param_2,undefined8 param_3,Slider *this)

{
  Pimpl *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  Pimpl local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  code *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  code *local_20;
  undefined8 uStack_18;
  
  this_00 = *(Pimpl **)(this + 0x1a0);
  uStack_80 = *(undefined8 *)(this_00 + 0x110);
  local_78 = this_00[0x118];
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (code *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = (code *)0x0;
  uStack_18 = 0;
  this_00[0x118] = local_78;
  *(undefined8 *)(this_00 + 0xf8) = param_1;
  *(undefined8 *)(this_00 + 0x100) = param_2;
  *(undefined8 *)(this_00 + 0x108) = param_3;
  *(undefined8 *)(this_00 + 0x110) = uStack_80;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = *(undefined8 *)(this_00 + 0x120);
  uStack_c0 = *(undefined8 *)(this_00 + 0x128);
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  local_b8 = *(code **)(this_00 + 0x130);
  *(undefined8 *)(this_00 + 0x130) = 0;
  local_b0 = *(undefined8 *)(this_00 + 0x138);
  *(undefined8 *)(this_00 + 0x138) = 0;
  local_98 = param_1;
  uStack_90 = param_2;
  local_88 = param_3;
  if (local_b8 == (code *)0x0) {
    local_c8 = 0;
    uStack_c0 = 0;
    uVar5 = 0;
    pcVar6 = (code *)0x0;
  }
  else {
                    /* try { // try from 002d8e5a to 002d8e69 has its CatchHandler @ 002d9034 */
    (*local_b8)(&local_c8,&local_c8,3);
    uVar5 = uStack_38;
    pcVar6 = local_40;
    local_c8 = 0;
    uStack_c0 = 0;
    if (local_40 != (code *)0x0) {
      local_c8 = local_50;
      uStack_c0 = uStack_48;
      local_40 = (code *)0x0;
      uStack_38 = 0;
    }
  }
  local_a8 = local_c8;
  uVar3 = local_a8;
  uStack_a0 = uStack_c0;
  uVar4 = uStack_a0;
  uVar1 = *(undefined8 *)(this_00 + 0x140);
  uVar2 = *(undefined8 *)(this_00 + 0x148);
  local_a8._0_4_ = (undefined4)local_c8;
  local_a8._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
  uStack_a0._0_4_ = (undefined4)uStack_c0;
  uStack_a0._4_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
  *(undefined4 *)(this_00 + 0x140) = (undefined4)local_a8;
  *(undefined4 *)(this_00 + 0x144) = local_a8._4_4_;
  *(undefined4 *)(this_00 + 0x148) = (undefined4)uStack_a0;
  *(undefined4 *)(this_00 + 0x14c) = uStack_a0._4_4_;
  local_b8 = *(code **)(this_00 + 0x150);
  *(code **)(this_00 + 0x150) = pcVar6;
  local_b0 = *(undefined8 *)(this_00 + 0x158);
  *(undefined8 *)(this_00 + 0x158) = uVar5;
  if (local_b8 != (code *)0x0) {
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_a8 = uVar3;
    uStack_a0 = uVar4;
                    /* try { // try from 002d8f0a to 002d8f16 has its CatchHandler @ 002d902c */
    (*local_b8)(&local_c8,&local_c8,3);
  }
  uVar5 = uStack_18;
  pcVar6 = local_20;
  local_c8 = 0;
  uStack_c0 = 0;
  if (local_20 != (code *)0x0) {
    local_c8 = local_30;
    uStack_c0 = uStack_28;
    local_20 = (code *)0x0;
    uStack_18 = 0;
  }
  local_a8 = local_c8;
  uStack_a0 = uStack_c0;
  uVar1 = *(undefined8 *)(this_00 + 0x160);
  uVar2 = *(undefined8 *)(this_00 + 0x168);
  *(undefined4 *)(this_00 + 0x160) = (undefined4)local_c8;
  *(undefined4 *)(this_00 + 0x164) = local_c8._4_4_;
  *(undefined4 *)(this_00 + 0x168) = (undefined4)uStack_c0;
  *(undefined4 *)(this_00 + 0x16c) = uStack_c0._4_4_;
  local_b8 = *(code **)(this_00 + 0x170);
  *(code **)(this_00 + 0x170) = pcVar6;
  local_b0 = *(undefined8 *)(this_00 + 0x178);
  *(undefined8 *)(this_00 + 0x178) = uVar5;
  local_c8 = uVar1;
  uStack_c0 = uVar2;
  if (local_b8 != (code *)0x0) {
                    /* try { // try from 002d8f98 to 002d8fa4 has its CatchHandler @ 002d9024 */
    (*local_b8)(&local_c8,&local_c8,3);
    if (local_20 != (code *)0x0) {
                    /* try { // try from 002d8fba to 002d8fc3 has its CatchHandler @ 002d900c */
      (*local_20)(&local_30,&local_30,3);
    }
  }
  if (local_40 != (code *)0x0) {
                    /* try { // try from 002d8fd6 to 002d8fdf has its CatchHandler @ 002d901c */
    (*local_40)(&local_50,&local_50,3);
  }
  if (local_60 != (code *)0x0) {
                    /* try { // try from 002d8fef to 002d8ff8 has its CatchHandler @ 002d9014 */
    (*local_60)(&local_70,&local_70,3);
  }
  Pimpl::updateRange(this_00);
  return;
}


