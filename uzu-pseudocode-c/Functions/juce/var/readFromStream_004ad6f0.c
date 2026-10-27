// Function : readFromStream
// Namespace: juce:var
// Entry    : 004ad6f0
// Prototype: undefined readFromStream(var * this, long * param_1)
// Body     : 004ad6f0 - 004adba4


/* juce::var::readFromStream(juce::InputStream&) */

void __thiscall juce::var::readFromStream(var *this,long *param_1)

{
  char *__src;
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ArrayBase<juce::var,juce::DummyCriticalSection> *this_00;
  undefined4 *puVar7;
  undefined8 *puVar8;
  void *__dest;
  size_t __size;
  undefined4 *__dest_00;
  ulong uVar9;
  int *piVar10;
  size_t __size_00;
  undefined **local_98;
  size_t sStack_90;
  long *local_88;
  void *local_80;
  long local_70 [2];
  ulong local_60;
  var *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if ((int)uVar2 < 1) {
LAB_004ad95d:
    *(undefined1 **)this = &Instance::attributesVoid;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    switch(uVar1) {
    case 1:
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      *(undefined1 **)this = &Instance::attributesInt;
      *(undefined4 *)(this + 8) = uVar3;
      break;
    case 2:
      *(undefined1 **)this = &Instance::attributesBool;
      this[8] = (var)0x1;
      break;
    case 3:
      *(undefined1 **)this = &Instance::attributesBool;
      this[8] = (var)0x0;
      break;
    case 4:
      uVar6 = (**(code **)(*param_1 + 0x78))(param_1);
      *(undefined1 **)this = &Instance::attributesDouble;
      *(undefined8 *)(this + 8) = uVar6;
      break;
    case 5:
      MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_98,0x100);
                    /* try { // try from 004ad773 to 004ad780 has its CatchHandler @ 004adc5a */
      MemoryOutputStream::writeFromInputStream
                ((MemoryOutputStream *)&local_98,param_1,(ulong)(uVar2 - 1));
      if (local_88 == (long *)0x0) {
        local_88 = local_70;
      }
      else if (local_60 < (ulong)local_88[1]) {
        *(undefined1 *)(*local_88 + local_60) = 0;
      }
      __src = (char *)*local_88;
      __dest_00 = (undefined4 *)&DAT_0061ac58;
      if ((__src != (char *)0x0) && (*__src != '\0')) {
        uVar9 = local_60 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ad9fa to 004ad9fe has its CatchHandler @ 004adc16 */
        puVar7 = operator_new__(uVar9 + 0x17);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(ulong *)(puVar7 + 2) = uVar9;
        __dest_00 = puVar7 + 4;
        memcpy(__dest_00,__src,local_60);
        *(undefined1 *)((long)puVar7 + local_60 + 0x10) = 0;
      }
      *(undefined1 **)this = &Instance::attributesString;
      *(undefined4 **)(this + 8) = __dest_00;
      local_98 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004ada41 to 004ada48 has its CatchHandler @ 004adc29 */
      MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_98);
      free(local_80);
      local_98 = &PTR__OutputStream_00713440;
      piVar10 = (int *)(sStack_90 - 0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar4 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar10);
        }
      }
      break;
    case 6:
      uVar6 = (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined1 **)this = Instance::attributesInt64;
      *(undefined8 *)(this + 8) = uVar6;
      break;
    case 7:
      *(undefined1 **)this = &Instance::attributesVoid;
      local_50 = this + 8;
      this_00 = (ArrayBase<juce::var,juce::DummyCriticalSection> *)VariantType::defaultToArray();
      if (this_00 == (ArrayBase<juce::var,juce::DummyCriticalSection> *)0x0) {
        local_48 = 0;
        uStack_40 = 0;
        local_98 = (undefined **)&Instance::attributesArray;
                    /* try { // try from 004ad888 to 004ad891 has its CatchHandler @ 004adc07 */
        puVar8 = operator_new(0x20);
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &PTR__RefCountedArray_00713d88;
        puVar8[2] = 0;
        puVar8[3] = 0;
                    /* try { // try from 004ad8b7 to 004ad8c2 has its CatchHandler @ 004adbb5 */
        ArrayBase<juce::var,juce::DummyCriticalSection>::addArray<juce::var>
                  ((ArrayBase<juce::var,juce::DummyCriticalSection> *)(puVar8 + 2),0,0);
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
        ppuVar5 = *(undefined ***)this;
        *(undefined ***)this = local_98;
        sStack_90 = *(size_t *)(this + 8);
        *(undefined8 **)(this + 8) = puVar8;
                    /* try { // try from 004ad8ea to 004ad8ec has its CatchHandler @ 004adbad */
        local_98 = ppuVar5;
        (*(code *)ppuVar5[0xb])(&sStack_90);
                    /* try { // try from 004ad8f0 to 004ad8f7 has its CatchHandler @ 004adba5 */
        this_00 = (ArrayBase<juce::var,juce::DummyCriticalSection> *)
                  (**(code **)(*(long *)this + 0x40))(local_50);
      }
                    /* try { // try from 004ad8fe to 004ad906 has its CatchHandler @ 004adc27 */
      iVar4 = (**(code **)(*param_1 + 0x88))(param_1);
      if (0 < iVar4) {
        uVar2 = iVar4 + 1;
        do {
                    /* try { // try from 004ad920 to 004ad92a has its CatchHandler @ 004adc6d */
          readFromStream((var *)&local_98,param_1);
          ArrayBase<juce::var,juce::DummyCriticalSection>::addImpl<juce::var>(this_00,&local_98);
                    /* try { // try from 004ad93a to 004ad93f has its CatchHandler @ 004adc8b */
          (*(code *)local_98[0xb])(&sStack_90);
          uVar2 = uVar2 - 1;
        } while (1 < uVar2);
      }
      break;
    case 8:
      local_98 = (undefined **)0x0;
      sStack_90 = 0;
      __size_00 = (ulong)uVar2 - 1;
      ppuVar5 = local_98;
      if ((__size_00 != 0) &&
         (sStack_90 = __size_00, ppuVar5 = malloc(__size_00), ppuVar5 == (undefined **)0x0)) {
        puVar8 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar8 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
      }
      local_98 = ppuVar5;
      if (1 < uVar2) {
                    /* try { // try from 004ad98a to 004ad995 has its CatchHandler @ 004adc25 */
        iVar4 = (**(code **)(*param_1 + 0x20))(param_1,ppuVar5,uVar2 - 1);
        __size = (size_t)iVar4;
        if (__size_00 != __size) {
          if (iVar4 == 0) {
            free(ppuVar5);
            local_98 = (undefined **)0x0;
            sStack_90 = 0;
            __size_00 = 0;
          }
          else {
            if (ppuVar5 == (undefined **)0x0) {
                    /* try { // try from 004adaa6 to 004adab2 has its CatchHandler @ 004adc25 */
              HeapBlock<char,true>::allocate<unsigned_long>
                        ((HeapBlock<char,true> *)&local_98,__size,0);
            }
            else {
              ppuVar5 = realloc(ppuVar5,__size);
              if (ppuVar5 == (undefined **)0x0) {
                puVar8 = (undefined8 *)__cxa_allocate_exception(8);
                *puVar8 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 004adb8f to 004adba4 has its CatchHandler @ 004adc25 */
                    /* WARNING: Subroutine does not return */
                __cxa_throw(puVar8,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
              }
              local_98 = ppuVar5;
            }
            __size_00 = __size;
            sStack_90 = __size;
          }
        }
      }
      *(undefined1 **)this = Instance::attributesBinary;
                    /* try { // try from 004adac5 to 004adace has its CatchHandler @ 004adc46 */
      puVar8 = operator_new(0x10);
      *puVar8 = 0;
      puVar8[1] = __size_00;
      if (__size_00 == 0) {
        ppuVar5 = local_98;
      }
      else {
        __dest = malloc(__size_00);
        ppuVar5 = local_98;
        if (__dest == (void *)0x0) {
          puVar8 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar8 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 004adb61 to 004adb76 has its CatchHandler @ 004adc18 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar8,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
        }
        *puVar8 = __dest;
        memcpy(__dest,local_98,__size_00);
      }
      *(undefined8 **)(this + 8) = puVar8;
      free(ppuVar5);
      break;
    default:
      (**(code **)(*param_1 + 0xc0))(param_1,uVar2 - 1);
      goto LAB_004ad95d;
    }
  }
  return;
}


