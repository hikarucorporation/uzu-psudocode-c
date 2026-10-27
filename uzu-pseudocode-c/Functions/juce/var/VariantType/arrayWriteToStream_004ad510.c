// Function : arrayWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 004ad510
// Prototype: undefined arrayWriteToStream(long * param_1, long * param_2)
// Body     : 004ad510 - 004ad6b1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::arrayWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::arrayWriteToStream(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  byte local_6d;
  undefined1 auStack_6c [4];
  undefined **local_68;
  long local_60;
  long *local_58;
  void *local_50;
  long local_40 [2];
  int local_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    lVar8 = 0;
    lVar5 = __dynamic_cast(*param_1,&ReferenceCountedObject::typeinfo,&RefCountedArray::typeinfo,0);
    if (lVar5 != 0) {
      MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_68,0x200);
      uVar2 = *(uint *)(lVar5 + 0x1c);
      uVar6 = -uVar2;
      if ((int)-uVar2 < 0) {
        uVar6 = uVar2;
      }
      if (uVar6 != 0) {
        lVar8 = 0;
        uVar7 = (ulong)uVar6;
        do {
          auStack_6c[lVar8] = (char)uVar6;
          lVar8 = lVar8 + 1;
          uVar4 = uVar7 >> 8;
          bVar3 = 0xff < uVar6;
          uVar7 = uVar7 >> 8;
          uVar6 = (uint)uVar4;
        } while (bVar3);
      }
      local_6d = (byte)lVar8 | 0x80;
      if (-1 < (int)uVar2) {
        local_6d = (byte)lVar8;
      }
                    /* try { // try from 004ad5ae to 004ad5bd has its CatchHandler @ 004ad6d1 */
      (*(code *)local_68[5])(&local_68,&local_6d,(int)lVar8 + 1);
      if ((long)*(int *)(lVar5 + 0x1c) != 0) {
        plVar9 = *(long **)(lVar5 + 0x10);
        plVar11 = plVar9 + (long)*(int *)(lVar5 + 0x1c) * 2;
        do {
                    /* try { // try from 004ad5e7 to 004ad5ef has its CatchHandler @ 004ad6d3 */
          (**(code **)(*plVar9 + 0x70))(plVar9 + 1,&local_68);
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar11);
      }
                    /* try { // try from 004ad603 to 004ad652 has its CatchHandler @ 004ad6d1 */
      (**(code **)(*param_2 + 0x98))(param_2,local_30 + 1);
      (**(code **)(*param_2 + 0x30))(param_2,7);
      uVar7 = CONCAT44(uStack_2c,local_30);
      if (uVar7 != 0) {
        if (local_58 == (long *)0x0) {
          local_58 = local_40;
        }
        else if (uVar7 < (ulong)local_58[1]) {
          *(undefined1 *)(*local_58 + uVar7) = 0;
        }
        (**(code **)(*param_2 + 0x28))(param_2,*local_58);
      }
      local_68 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004ad65f to 004ad668 has its CatchHandler @ 004ad6b2 */
      MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_68);
      free(local_50);
      local_68 = &PTR__OutputStream_00713440;
      piVar10 = (int *)(local_60 + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar1 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar10);
        }
      }
    }
  }
  return;
}


