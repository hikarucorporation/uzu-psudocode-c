// Function : copyXmlToBinary
// Namespace: juce:AudioProcessor
// Entry    : 004ccda0
// Prototype: undefined copyXmlToBinary(XmlElement * param_1, long * param_2)
// Body     : 004ccda0 - 004ccfae


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::copyXmlToBinary(juce::XmlElement const&, juce::MemoryBlock&) */

void __cdecl juce::AudioProcessor::copyXmlToBinary(XmlElement *param_1,long *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined **local_c0;
  undefined4 *local_b8;
  long *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined *local_30;
  
  local_c0 = &PTR__OutputStream_00713440;
  puVar2 = operator_new__(0x1b);
  LOCK();
  *puVar2 = 0;
  UNLOCK();
  *(undefined8 *)(puVar2 + 2) = 4;
  local_b8 = puVar2 + 4;
  *(undefined2 *)(puVar2 + 4) = 0xa0d;
  *(undefined1 *)((long)puVar2 + 0x12) = 0;
  local_c0 = &PTR__MemoryOutputStream_00713378;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_78._0_4_ = 0x21324356;
                    /* try { // try from 004cce16 to 004cce48 has its CatchHandler @ 004ccfcc */
  local_b0 = param_2;
  MemoryOutputStream::write((MemoryOutputStream *)&local_c0,&local_78,4);
  local_78 = (undefined1 *)((ulong)local_78._4_4_ << 0x20);
  (*(code *)local_c0[5])(&local_c0,&local_78,4);
  local_50 = &DAT_0061ac58;
  local_48 = &DAT_0061ac58;
  local_40 = &DAT_0061ac58;
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0x3c;
  local_30 = &DAT_005e50db;
  local_78 = &DAT_0061ac58;
  local_70 = &DAT_0061ac58;
  local_68 = &DAT_0061ac58;
  local_60 = CONCAT44(0x3c,local_38);
  local_58 = 0;
                    /* try { // try from 004cceb5 to 004ccf27 has its CatchHandler @ 004ccfd1 */
  (*(code *)local_c0[5])(&local_c0,"<?xml version=\"1.0\" encoding=\"",0x1e);
  (*(code *)local_c0[5])(&local_c0,"UTF-8",5);
  (*(code *)local_c0[5])(&local_c0,&DAT_005e5fac,3);
  (*(code *)local_c0[6])(&local_c0,0x20);
  XmlElement::writeElementAsText(param_1,(long *)&local_c0,0xffffffff,0x3c,(char *)0x0);
  local_78 = (undefined1 *)((ulong)local_78 & 0xffffffffffffff00);
                    /* try { // try from 004ccf36 to 004ccf46 has its CatchHandler @ 004ccfcc */
  (*(code *)local_c0[5])(&local_c0,&local_78,1);
  local_c0 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004ccf51 to 004ccf5a has its CatchHandler @ 004ccfaf */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_c0);
  free(local_a8);
  local_c0 = &PTR__OutputStream_00713440;
  piVar3 = local_b8 + -4;
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  *(int *)(*param_2 + 4) = (int)param_2[1] + -9;
  return;
}


