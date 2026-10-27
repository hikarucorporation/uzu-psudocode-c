// Function : operator()
// Namespace: juce:Component:MouseListenerList:sendMouseEvent_void_juce__MouseListener_____juce__MouseEvent_const____juce__HierarchyCheck~4aeeebab:_lambda_auto_1__auto_2__1_
// Entry    : 0023beb0
// Prototype: bool operator()(long * param_1, long param_2)
// Body     : 0023beb0 - 0023c0da


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* auto juce::Component::MouseListenerList::sendMouseEvent<void
   (juce::MouseListener::*)(juce::MouseEvent const&)>(juce::HierarchyChecker&, void
   (juce::MouseListener::*&&)(juce::MouseEvent const&))::{lambda(auto:1&,
   auto:2)#1}::TEMPNAMEPLACEHOLDERVALUE(void (juce::MouseListener::*&)(juce::MouseEvent const&),
   juce::Component::MouseListenerList::sendMouseEvent<void (juce::MouseListener::*)(juce::MouseEvent
   const&)>(juce::HierarchyChecker&, void (juce::MouseListener::*&&)(juce::MouseEvent
   const&))::{lambda(auto:1&)#2}) const */

bool __cdecl
juce::Component::MouseListenerList::
sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
::{lambda(auto:1&,auto:2)#1}::operator()(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  bool bVar11;
  float local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  
  plVar2 = *(long **)(param_2 + 0x90);
  if (plVar2 != (long *)0x0) {
    plVar8 = *(long **)(param_2 + 0xd8);
    if (plVar8 == (long *)0x0) {
      plVar8 = operator_new(0x18);
      *(undefined4 *)(plVar8 + 1) = 0;
      *plVar8 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar8[2] = param_2;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar10 = *(long **)(param_2 + 0xd8);
      *(long **)(param_2 + 0xd8) = plVar8;
      if (plVar10 == (long *)0x0) goto LAB_0023bee4;
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
      plVar8 = *(long **)(param_2 + 0xd8);
      if (plVar8 != (long *)0x0) goto LAB_0023bee4;
      plVar8 = (long *)0x0;
      uVar9 = *(uint *)(plVar2 + 2);
      bVar4 = 0 < (int)uVar9;
      if (0 < (int)uVar9) goto LAB_0023befb;
LAB_0023c07e:
      bVar5 = false;
      bVar11 = bVar4;
joined_r0x0023c083:
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        iVar1 = (int)*plVar2;
        UNLOCK();
        goto joined_r0x0023c0b5;
      }
    }
    else {
LAB_0023bee4:
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      uVar9 = *(uint *)(plVar2 + 2);
      bVar4 = 0 < (int)uVar9;
      if ((int)uVar9 < 1) goto LAB_0023c07e;
LAB_0023befb:
      do {
        uVar9 = uVar9 - 1;
        pcVar6 = *(code **)*param_1;
        plVar10 = (long *)(*(long *)(*plVar2 + (ulong)uVar9 * 8) + ((ulong *)*param_1)[1]);
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar6 = *(code **)(pcVar6 + *plVar10 + -1);
        }
        puVar3 = (undefined8 *)param_1[1];
        if (*(long *)*puVar3 == 0) {
          local_60 = 0;
        }
        else {
          local_60 = *(undefined8 *)(*(long *)*puVar3 + 0x10);
        }
        local_40 = puVar3[0xe];
        local_90 = *(float *)(puVar3 + 4);
        fStack_8c = *(float *)((long)puVar3 + 0x24);
        local_80 = *(undefined4 *)(puVar3 + 6);
        local_7c = *(undefined4 *)((long)puVar3 + 0x34);
        uStack_78 = *(undefined4 *)(puVar3 + 7);
        uStack_74 = *(undefined4 *)((long)puVar3 + 0x3c);
        uStack_70 = *(undefined4 *)(puVar3 + 8);
        local_6c = *(undefined4 *)((long)puVar3 + 0x44);
        local_68 = puVar3[9];
        local_50 = *(undefined4 *)(puVar3 + 0xc);
        uStack_4c = *(undefined4 *)((long)puVar3 + 100);
        uStack_48 = *(undefined4 *)(puVar3 + 0xd);
        uStack_44 = *(undefined4 *)((long)puVar3 + 0x6c);
        local_37 = *(char *)((long)puVar3 + 0x79) != '\0';
        local_38 = *(undefined1 *)(puVar3 + 0xf);
        uStack_88 = SUB84((double)local_90 + _DAT_005d9a90,0);
        uStack_84 = SUB84((double)fStack_8c + _UNK_005d9a98,0);
        local_58 = local_60;
                    /* try { // try from 0023bfc8 to 0023bfcc has its CatchHandler @ 0023c0dd */
        (*pcVar6)((double)local_90 + _DAT_005d9a90,plVar10,&local_90);
                    /* try { // try from 0023bfd1 to 0023bfd5 has its CatchHandler @ 0023c0db */
        uVar7 = HierarchyChecker::shouldBailOut((HierarchyChecker *)param_1[1]);
        if ((char)uVar7 != '\0') {
          bVar5 = true;
          bVar11 = bVar4;
          goto joined_r0x0023c083;
        }
        if (plVar8 == (long *)0x0) {
          bVar5 = true;
          goto LAB_0023c0c7;
        }
        bVar11 = plVar8[2] == 0;
        if (bVar11) {
          bVar5 = true;
          goto LAB_0023c0ac;
        }
        if ((int)*(uint *)(plVar2 + 2) < (int)uVar9) {
          uVar9 = *(uint *)(plVar2 + 2);
        }
      } while (0 < (int)uVar9);
      bVar5 = false;
LAB_0023c0ac:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      iVar1 = (int)*plVar2;
      UNLOCK();
joined_r0x0023c0b5:
      if (iVar1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    if (bVar11) goto LAB_0023c0c7;
  }
  bVar5 = false;
LAB_0023c0c7:
  return !bVar5;
}


