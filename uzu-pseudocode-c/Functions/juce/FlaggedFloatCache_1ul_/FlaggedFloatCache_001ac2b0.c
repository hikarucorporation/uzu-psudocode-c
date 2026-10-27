// Function : FlaggedFloatCache
// Namespace: juce:FlaggedFloatCache_1ul_
// Entry    : 001ac2b0
// Prototype: undefined FlaggedFloatCache(FlaggedFloatCache<1ul> * this, ulong param_1)
// Body     : 001ac2b0 - 001ac407


/* juce::FlaggedFloatCache<1ul>::FlaggedFloatCache(unsigned long) */

void __thiscall
juce::FlaggedFloatCache<1ul>::FlaggedFloatCache(FlaggedFloatCache<1ul> *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *__s;
  void *__s_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    __s = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    __s = operator_new(param_1 * 4);
    *(undefined4 **)this = __s;
    puVar5 = __s + param_1;
    *(undefined4 **)(this + 0x10) = puVar5;
    memset(__s,0,param_1 * 4);
  }
  *(undefined4 **)(this + 8) = puVar5;
  uVar4 = (ulong)((param_1 & 0x1f) != 0);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  lVar2 = (param_1 >> 5) + uVar4;
  if (lVar2 == 0) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
                    /* try { // try from 001ac35d to 001ac365 has its CatchHandler @ 001ac408 */
    __s_00 = operator_new(lVar2 * 4);
    *(void **)(this + 0x18) = __s_00;
    pvVar1 = (void *)((long)__s_00 + lVar2 * 4);
    *(void **)(this + 0x28) = pvVar1;
    lVar3 = 0;
    memset(__s_00,0,lVar2 * 4);
    *(void **)(this + 0x20) = pvVar1;
    if (lVar2 != 0) {
      do {
        LOCK();
        *(undefined4 *)((long)__s_00 + lVar3) = 0;
        UNLOCK();
        lVar3 = lVar3 + 4;
      } while (uVar4 * 4 + (param_1 >> 5) * 4 != lVar3);
      __s = *(undefined4 **)this;
      puVar5 = *(undefined4 **)(this + 8);
    }
  }
  for (; __s != puVar5; __s = __s + 1) {
    LOCK();
    *__s = 0;
    UNLOCK();
  }
  return;
}


