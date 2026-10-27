// Function : Font
// Namespace: juce:Font
// Entry    : 003c1080
// Prototype: undefined Font(Font * this, long * param_1)
// Body     : 003c1080 - 003c11f1


/* juce::Font::Font(juce::FontOptions) */

void __thiscall juce::Font::Font(Font *this,long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  SharedFontInternal *this_00;
  int *piVar5;
  long local_88;
  long lStack_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  long local_60;
  void *local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined6 uStack_38;
  undefined2 local_32;
  undefined6 uStack_30;
  undefined8 uStack_2a;
  
  this_00 = operator_new(0xa8);
  local_88 = *param_1;
  lStack_80 = param_1[1];
  *param_1 = (long)&DAT_0061ac58;
  param_1[1] = (long)&DAT_0061ac58;
  local_78 = (long *)param_1[2];
  param_1[2] = 0;
  local_70 = (long *)param_1[3];
  plStack_68 = (long *)param_1[4];
  local_60 = param_1[5];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_58 = (void *)param_1[6];
  lStack_50 = param_1[7];
  local_48 = param_1[8];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lStack_40 = param_1[9];
  uStack_2a = *(undefined8 *)((long)param_1 + 0x5e);
  uStack_30 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x56) >> 0x10);
  uStack_38 = (undefined6)param_1[10];
  local_32 = (undefined2)((ulong)param_1[10] >> 0x30);
                    /* try { // try from 003c1113 to 003c111d has its CatchHandler @ 003c11f2 */
  SharedFontInternal::SharedFontInternal(this_00,&local_88);
  *(SharedFontInternal **)this = this_00;
  LOCK();
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  UNLOCK();
  plVar1 = local_70;
  plVar3 = plStack_68;
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
    plVar1 = local_70;
    plVar3 = plStack_68;
  }
  for (; plVar4 = plStack_68, plVar1 != plStack_68; plVar1 = plVar1 + 1) {
    piVar5 = (int *)(*plVar1 + -0x10);
    plStack_68 = plVar3;
    if (piVar5 != &emptyString) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar5);
      }
    }
    plVar3 = plStack_68;
    plStack_68 = plVar4;
  }
  plStack_68 = plVar3;
  if (local_70 != (long *)0x0) {
    operator_delete(local_70);
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_78 + 8))();
    }
  }
  piVar5 = (int *)(lStack_80 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_88 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  return;
}


