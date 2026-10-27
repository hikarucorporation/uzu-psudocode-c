// Function : setTemporaryUnderlining
// Namespace: juce:TextEditor
// Entry    : 0026ab90
// Prototype: undefined setTemporaryUnderlining(TextEditor * this, TextEditor * param_1)
// Body     : 0026ab90 - 0026ac3a


/* juce::TextEditor::setTemporaryUnderlining(juce::Array<juce::Range<int>,
   juce::DummyCriticalSection, 0> const&) */

void __thiscall juce::TextEditor::setTemporaryUnderlining(TextEditor *this,TextEditor *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *__dest;
  uint uVar3;
  
  if (this + 800 != param_1) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < 1) {
      __dest = (void *)0x0;
      uVar3 = 0;
    }
    else {
      pvVar2 = *(void **)param_1;
      uVar3 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
      if ((int)uVar3 < 1) {
        __dest = (void *)0x0;
      }
      else {
        __dest = malloc((ulong)uVar3 << 3);
      }
      memcpy(__dest,pvVar2,(ulong)uVar1 * 8);
    }
    pvVar2 = *(void **)(this + 800);
    *(void **)(this + 800) = __dest;
    *(uint *)(this + 0x328) = uVar3;
    *(uint *)(this + 0x32c) = uVar1;
    free(pvVar2);
  }
  Component::internalRepaintUnchecked((long)(this + 8),0,*(ulong *)(this + 0x48),'\x01');
  return;
}


