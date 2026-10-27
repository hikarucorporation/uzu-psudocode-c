// Function : add
// Namespace: juce:Array_char__juce__DummyCriticalSection_0_
// Entry    : 004a5a40
// Prototype: undefined add(Array<char*,juce::DummyCriticalSection,0> * this, undefined8 * param_1)
// Body     : 004a5a40 - 004a5ab2


/* juce::Array<char*, juce::DummyCriticalSection, 0>::add(char*&&) */

void __thiscall
juce::Array<char*,juce::DummyCriticalSection,0>::add
          (Array<char*,juce::DummyCriticalSection,0> *this,undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0xc);
  if ((int)*(uint *)(this + 8) <= iVar1) {
    uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar3) {
      if ((int)uVar3 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        pvVar2 = realloc(*(void **)this,(ulong)uVar3 << 3);
        *(void **)this = pvVar2;
      }
    }
    *(uint *)(this + 8) = uVar3;
    iVar1 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar1 + 1;
  *(undefined8 *)(*(long *)this + (long)iVar1 * 8) = *param_1;
  return;
}


