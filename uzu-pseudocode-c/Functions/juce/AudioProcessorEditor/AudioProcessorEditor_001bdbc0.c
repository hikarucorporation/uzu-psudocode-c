// Function : AudioProcessorEditor
// Namespace: juce:AudioProcessorEditor
// Entry    : 001bdbc0
// Prototype: undefined AudioProcessorEditor(AudioProcessorEditor * this, undefined8 param_1)
// Body     : 001bdbc0 - 001bdd86


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessorEditor::AudioProcessorEditor(juce::AudioProcessor*) */

void __thiscall
juce::AudioProcessorEditor::AudioProcessorEditor(AudioProcessorEditor *this,undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  *(undefined1 **)(this + 8) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe5) = 0;
  *(undefined ***)this = &PTR__AudioProcessorEditor_00706848;
  *(undefined8 *)(this + 0xf0) = param_1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  this[0x108] = (AudioProcessorEditor)0x0;
  *(undefined ***)(this + 0x110) = &PTR__ComponentBoundsConstrainer_00708960;
  uVar2 = _UNK_005dca88;
  *(undefined8 *)(this + 0x118) = _DAT_005dca80;
  *(undefined8 *)(this + 0x120) = uVar2;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined1 (*) [16])(this + 0x150) = ZEXT416(DAT_005d9038);
  *(undefined8 *)(this + 0x160) = 0x3f800000;
  *(AudioProcessorEditor **)(this + 0x140) = this + 0x110;
                    /* try { // try from 001bdcc2 to 001bdccb has its CatchHandler @ 001bdd87 */
  puVar3 = operator_new(0x10);
  *puVar3 = &PTR__ComponentListener_00706cd8;
  puVar3[1] = this;
  *(undefined8 **)(this + 0x100) = puVar3;
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(this + 0xa0));
  puVar1 = *(undefined8 **)(this + 0xa0);
  __ptr = (void *)*puVar1;
  iVar5 = *(int *)((long)puVar1 + 0xc);
  lVar4 = (long)iVar5;
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (*(undefined8 **)((long)__ptr + lVar6) == puVar3) {
        return;
      }
      lVar6 = lVar6 + 8;
    } while (lVar4 * 8 != lVar6);
  }
  if ((int)*(uint *)(puVar1 + 1) <= iVar5) {
    uVar7 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar1 + 1) != uVar7) {
      if ((int)uVar7 < 1) {
        free(__ptr);
        *puVar1 = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar7 << 3);
        *puVar1 = __ptr;
      }
    }
    *(uint *)(puVar1 + 1) = uVar7;
    iVar5 = *(int *)((long)puVar1 + 0xc);
    lVar4 = (long)iVar5;
  }
  *(int *)((long)puVar1 + 0xc) = iVar5 + 1;
  *(undefined8 **)((long)__ptr + lVar4 * 8) = puVar3;
  return;
}


