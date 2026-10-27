// Function : ensureSize
// Namespace: juce:MidiBuffer
// Entry    : 004d3740
// Prototype: undefined ensureSize(MidiBuffer * this, int param_1)
// Body     : 004d3740 - 004d3789


/* juce::MidiBuffer::ensureSize(unsigned long) */

void __thiscall juce::MidiBuffer::ensureSize(MidiBuffer *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if ((int)*(uint *)(this + 8) < param_1) {
    uVar2 = param_1 + param_1 / 2 + 8U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar2) {
      if ((int)uVar2 < 1) {
        free(*(void **)this);
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = realloc(*(void **)this,(ulong)uVar2);
      }
      *(void **)this = pvVar1;
    }
    *(uint *)(this + 8) = uVar2;
  }
  return;
}


