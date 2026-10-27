// Function : ComboBox
// Namespace: juce:ComboBox
// Entry    : 002da800
// Prototype: undefined ComboBox(ComboBox * this, long * param_1)
// Body     : 002da800 - 002dab01


/* juce::ComboBox::ComboBox(juce::String const&) */

void __thiscall juce::ComboBox::ComboBox(ComboBox *this,long *param_1)

{
  long lVar1;
  void *pvVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
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
  *(undefined ***)(this + 0xf0) = &PTR__SettableTooltipClient_0070ded0;
  *(undefined1 **)(this + 0xf8) = &DAT_0061ac58;
  *(undefined ***)(this + 0x100) = &PTR__Listener_0070ff98;
  *(undefined ***)(this + 0x108) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 0x110) = 0;
                    /* try { // try from 002da8e8 to 002da8f1 has its CatchHandler @ 002dabe0 */
  puVar4 = operator_new(0x20);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar4[2] = this + 0x108;
  *(undefined4 *)(puVar4 + 3) = 0;
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  pvVar2 = *(void **)(this + 0x110);
  *(undefined8 **)(this + 0x110) = puVar4;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar3 = (int *)((long)pvVar2 + 8);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(pvVar2);
    }
  }
  *(undefined ***)this = &PTR__ComboBox_0070bf00;
  *(undefined ***)(this + 0xf0) = &PTR__ComboBox_0070c0d0;
  *(undefined ***)(this + 0x100) = &PTR__ComboBox_0070c100;
  *(undefined ***)(this + 0x108) = &PTR__ComboBox_0070c128;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
                    /* try { // try from 002da994 to 002da99d has its CatchHandler @ 002dab9b */
  puVar4 = operator_new(0x40);
  *puVar4 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = &PTR__AsyncUpdater_00712b58;
  puVar4[3] = 0;
                    /* try { // try from 002da9be to 002da9c7 has its CatchHandler @ 002dab8e */
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
  *(undefined8 **)(this + 0x150) = puVar4;
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x183) = 0;
  *(undefined1 **)(this + 0x1c0) = &DAT_0061ac58;
                    /* try { // try from 002daab3 to 002daac1 has its CatchHandler @ 002dab2c */
  translate((juce *)(this + 0x1c8),(byte *)"(no choices)");
  *(undefined4 *)(this + 0x1d0) = 0;
  this[0xe9] = (ComboBox)((byte)this[0xe9] | 0x40);
                    /* try { // try from 002daad9 to 002daae1 has its CatchHandler @ 002dab02 */
  (**(code **)(*(long *)this + 200))(this);
  Value::addListener((Value *)(this + 0x150),(long)(this + 0x100));
  return;
}


