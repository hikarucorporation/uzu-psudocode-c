// Function : Button
// Namespace: juce:Button
// Entry    : 0021e780
// Prototype: undefined Button(Button * this, long * param_1)
// Body     : 0021e780 - 0021ea63


/* juce::Button::Button(juce::String const&) */

void __thiscall juce::Button::Button(Button *this,long *param_1)

{
  long lVar1;
  void *pvVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Timer *this_00;
  Timer *pTVar6;
  
  *(undefined ***)this = &PTR__Component_00707878;
  lVar1 = *param_1;
  *(long *)(this + 8) = lVar1;
  piVar3 = (int *)(lVar1 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
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
  *(undefined1 **)(this + 0xf8) = &DAT_0061ac58;
  *(undefined ***)this = &PTR__Button_00707008;
  *(undefined ***)(this + 0xf0) = &PTR__Button_007071e8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  lVar1 = *param_1;
  *(long *)(this + 0x158) = lVar1;
  piVar3 = (int *)(lVar1 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
                    /* try { // try from 0021e8f5 to 0021e8fe has its CatchHandler @ 0021ea7e */
  puVar4 = operator_new(0x40);
  *puVar4 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = &PTR__AsyncUpdater_00712b58;
  puVar4[3] = 0;
                    /* try { // try from 0021e926 to 0021e92f has its CatchHandler @ 0021ea71 */
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar5[2] = puVar4 + 2;
  *(undefined4 *)(puVar5 + 3) = 0;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  pvVar2 = (void *)puVar4[3];
  puVar4[3] = puVar5;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar3 = (int *)((long)pvVar2 + 8);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(pvVar2);
    }
  }
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = &PTR__SimpleValueSource_00713f78;
  puVar4[2] = &PTR__SimpleValueSource_00713fb0;
  puVar4[6] = &var::Instance::attributesVoid;
  *(undefined8 **)(this + 0x1c0) = puVar4;
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
                    /* try { // try from 0021e9d1 to 0021e9da has its CatchHandler @ 0021ea64 */
  this_00 = operator_new(0x48);
  Timer::Timer(this_00);
  *(undefined ***)this_00 = &PTR__CallbackHelper_0070df00;
  *(undefined ***)(this_00 + 0x28) = &PTR__CallbackHelper_0070df50;
  *(undefined ***)(this_00 + 0x30) = &PTR__CallbackHelper_0070df80;
  *(undefined ***)(this_00 + 0x38) = &PTR__CallbackHelper_0070dfa8;
  *(Button **)(this_00 + 0x40) = this;
  pTVar6 = *(Timer **)(this + 0x188);
  *(Timer **)(this + 0x188) = this_00;
  if (pTVar6 != (Timer *)0x0) {
    Timer::~Timer(pTVar6);
    operator_delete(pTVar6);
    this_00 = *(Timer **)(this + 0x188);
  }
  this[0xe8] = (Button)((byte)this[0xe8] | 0x20);
  pTVar6 = this_00 + 0x30;
  if (this_00 == (Timer *)0x0) {
    pTVar6 = (Timer *)0x0;
  }
  Value::addListener((Value *)(this + 0x1c0),(long)pTVar6);
  return;
}


