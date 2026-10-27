// Function : operator=
// Namespace: juce:FillType
// Entry    : 002ec690
// Prototype: FillType * operator=(FillType * this, FillType * param_1)
// Body     : 002ec690 - 002ec7d6


/* juce::FillType::TEMPNAMEPLACEHOLDERVALUE(juce::FillType const&) */

FillType * __thiscall juce::FillType::operator=(FillType *this,FillType *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__dest;
  uint uVar8;
  
  if (this == param_1) {
    return this;
  }
  *(undefined4 *)this = *(undefined4 *)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    pvVar3 = *(void **)(this + 8);
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    puVar7 = operator_new(0x28);
    *puVar7 = *puVar2;
    puVar7[1] = puVar2[1];
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar2 + 2);
    puVar7[3] = 0;
    puVar7[4] = 0;
    uVar1 = *(uint *)((long)puVar2 + 0x24);
    if (0 < (int)uVar1) {
      pvVar3 = (void *)puVar2[3];
      uVar8 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
      if ((int)uVar8 < 1) {
        __dest = (void *)0x0;
      }
      else {
        __dest = malloc((ulong)uVar8 << 4);
        puVar7[3] = __dest;
      }
      *(uint *)(puVar7 + 4) = uVar8;
      memcpy(__dest,pvVar3,(ulong)uVar1 << 4);
    }
    *(uint *)((long)puVar7 + 0x24) = uVar1;
    pvVar3 = *(void **)(this + 8);
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = *(long **)(this + 0x10);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    if (plVar5 == plVar4) goto LAB_002ec7b3;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar5 = *(long **)(this + 0x10);
    *(long **)(this + 0x10) = plVar4;
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
LAB_002ec7b3:
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar6;
  return this;
}


