// Function : addImpl<juce::var>
// Namespace: juce:ArrayBase_juce__var_juce__DummyCriticalSection_
// Entry    : 004adca0
// Prototype: void addImpl<juce::var>(ArrayBase<juce::var,juce::DummyCriticalSection> * this, undefined8 * param_1)
// Body     : 004adca0 - 004addd9


/* void juce::ArrayBase<juce::var, juce::DummyCriticalSection>::addImpl<juce::var>(juce::var&&) */

void __thiscall
juce::ArrayBase<juce::var,juce::DummyCriticalSection>::addImpl<juce::var>
          (ArrayBase<juce::var,juce::DummyCriticalSection> *this,undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(this + 0xc);
  if ((int)*(uint *)(this + 8) <= (int)uVar5) {
    uVar6 = ((int)((uVar5 - ((int)(uVar5 + 1) >> 0x1f)) + 1) >> 1) + uVar5 + 9 & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar6) {
      if ((int)uVar6 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        pvVar2 = malloc((ulong)uVar6 << 4);
        if (0 < (int)uVar5) {
          lVar1 = *(long *)this;
          if (uVar5 == 1) {
            uVar3 = 0;
          }
          else {
            lVar4 = 0;
            uVar3 = 0;
            do {
              *(undefined8 *)((long)pvVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
              *(undefined8 *)((long)pvVar2 + lVar4 + 8) = *(undefined8 *)(lVar1 + 8 + lVar4);
              *(undefined1 **)(lVar1 + lVar4) = &var::Instance::attributesVoid;
              *(undefined8 *)((long)pvVar2 + lVar4 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar4);
              *(undefined8 *)((long)pvVar2 + lVar4 + 0x18) = *(undefined8 *)(lVar1 + 0x18 + lVar4);
              *(undefined1 **)(lVar1 + 0x10 + lVar4) = &var::Instance::attributesVoid;
              uVar3 = uVar3 + 2;
              lVar4 = lVar4 + 0x20;
            } while ((uVar5 & 0xfffffffe) != uVar3);
          }
          if ((uVar5 & 1) != 0) {
            lVar4 = uVar3 * 0x10;
            *(undefined8 *)((long)pvVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
            *(undefined8 *)((long)pvVar2 + lVar4 + 8) = *(undefined8 *)(lVar1 + 8 + lVar4);
            *(undefined1 **)(lVar1 + lVar4) = &var::Instance::attributesVoid;
          }
        }
        __ptr = *(void **)this;
        *(void **)this = pvVar2;
        free(__ptr);
      }
    }
    *(uint *)(this + 8) = uVar6;
    uVar5 = *(uint *)(this + 0xc);
  }
  *(uint *)(this + 0xc) = uVar5 + 1;
  lVar1 = *(long *)this;
  *(undefined8 *)(lVar1 + (long)(int)uVar5 * 0x10) = *param_1;
  *(undefined8 *)(lVar1 + 8 + (long)(int)uVar5 * 0x10) = param_1[1];
  *param_1 = &var::Instance::attributesVoid;
  return;
}


