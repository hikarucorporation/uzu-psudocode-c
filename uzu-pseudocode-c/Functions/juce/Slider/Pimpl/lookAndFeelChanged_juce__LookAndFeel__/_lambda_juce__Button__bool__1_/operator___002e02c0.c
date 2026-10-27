// Function : operator()
// Namespace: juce:Slider:Pimpl:lookAndFeelChanged_juce__LookAndFeel__:_lambda_juce__Button__bool__1_
// Entry    : 002e02c0
// Prototype: undefined operator()({lambda(juce::Button&,bool)#1} * this, Component * param_2, Component param_3)
// Body     : 002e02c0 - 002e0496


/* juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,
   bool)#1}::TEMPNAMEPLACEHOLDERVALUE(juce::Button&, bool) const */

void __thiscall
juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::
operator()(_lambda_juce__Button__bool__1_ *this,Component *param_2,Component param_3)

{
  long lVar1;
  Component *this_00;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  code *local_38;
  undefined8 local_30;
  
  lVar1 = *(long *)this;
  this_00 = *(Component **)(lVar1 + 0x18);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,1);
  Component::addChildComponent(this_00,param_2,0xffffffff);
  local_48 = *(undefined4 *)(param_2 + 0x100);
  uStack_44 = *(undefined4 *)(param_2 + 0x104);
  uStack_40 = *(undefined4 *)(param_2 + 0x108);
  uStack_3c = *(undefined4 *)(param_2 + 0x10c);
  *(long *)(param_2 + 0x100) = lVar1;
  param_2[0x108] = param_3;
  local_38 = *(code **)(param_2 + 0x110);
  *(code **)(param_2 + 0x110) =
       std::
       _Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()(juce::Button&,bool)const::{lambda()#1}>
       ::_M_manager;
  local_30 = *(undefined8 *)(param_2 + 0x118);
  *(code **)(param_2 + 0x118) =
       std::
       _Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()(juce::Button&,bool)const::{lambda()#1}>
       ::_M_invoke;
  if (local_38 != (code *)0x0) {
                    /* try { // try from 002e034c to 002e0358 has its CatchHandler @ 002e0497 */
    (*local_38)(&local_48,&local_48,3);
  }
  if (*(int *)(lVar1 + 0x228) == 0) {
    *(undefined8 *)(param_2 + 0x1a0) = 0x640000012c;
    *(undefined4 *)(param_2 + 0x1a8) = 0x14;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    puVar3 = *(undefined8 **)(param_2 + 0x90);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = operator_new(0x18);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined8 **)(param_2 + 0x90) = puVar3;
      __ptr = (void *)*puVar3;
      iVar5 = *(int *)((long)puVar3 + 0xc);
    }
    else {
      __ptr = (void *)*puVar3;
      iVar5 = *(int *)((long)puVar3 + 0xc);
    }
    lVar4 = (long)iVar5;
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (*(long *)((long)__ptr + lVar6) == lVar1) goto LAB_002e0456;
        lVar6 = lVar6 + 8;
      } while (lVar4 * 8 != lVar6);
    }
    if ((int)*(uint *)(puVar3 + 1) <= iVar5) {
      uVar7 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar3 + 1) != uVar7) {
        if ((int)uVar7 < 1) {
          free(__ptr);
          *puVar3 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar7 << 3);
          *puVar3 = __ptr;
        }
      }
      *(uint *)(puVar3 + 1) = uVar7;
      iVar5 = *(int *)((long)puVar3 + 0xc);
      lVar4 = (long)iVar5;
    }
    *(int *)((long)puVar3 + 0xc) = iVar5 + 1;
    *(long *)((long)__ptr + lVar4 * 8) = lVar1;
  }
LAB_002e0456:
  (**(code **)(*(long *)param_2 + 0x1a0))(param_2,*(undefined8 *)(this + 8));
  param_2[0xea] = (Component)((byte)param_2[0xea] | 0x20);
  plVar2 = *(long **)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


