// Function : ~Vst2xState
// Namespace: VST3:Vst2xState
// Entry    : 0019f1f0
// Prototype: undefined ~Vst2xState(Vst2xState * this)
// Body     : 0019f1f0 - 0019f275


/* VST3::Vst2xState::~Vst2xState() */

void __thiscall VST3::Vst2xState::~Vst2xState(Vst2xState *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      if (puVar2 + 9 != (undefined8 *)puVar2[7]) {
        operator_delete((undefined8 *)puVar2[7]);
      }
      if ((void *)puVar2[3] != (void *)0x0) {
        operator_delete((void *)puVar2[3]);
      }
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
      }
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)this;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}


