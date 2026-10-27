// Function : getXmlFromBinary
// Namespace: juce:AudioProcessor
// Entry    : 004cd000
// Prototype: AudioProcessor * getXmlFromBinary(AudioProcessor * this, int * param_1, int param_2)
// Body     : 004cd000 - 004cd127


/* juce::AudioProcessor::getXmlFromBinary(void const*, int) */

AudioProcessor * __thiscall
juce::AudioProcessor::getXmlFromBinary(AudioProcessor *this,int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong __n;
  undefined4 *__dest;
  ulong uVar5;
  int *piVar6;
  undefined4 *local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined8 local_30;
  
  if (((param_2 < 9) || (*param_1 != 0x21324356)) || (uVar2 = param_1[1], (int)uVar2 < 1)) {
    *(undefined8 *)this = 0;
  }
  else {
    uVar4 = param_2 - 8U;
    if (uVar2 < param_2 - 8U) {
      uVar4 = uVar2;
    }
    __dest = (undefined4 *)&DAT_0061ac58;
    if ((uVar4 != 0) && ((char)param_1[2] != '\0')) {
      __n = (ulong)uVar4;
      uVar5 = __n + 4 & 0xfffffffffffffffc;
      puVar3 = operator_new__(uVar5 + 0x17);
      LOCK();
      *puVar3 = 0;
      UNLOCK();
      *(ulong *)(puVar3 + 2) = uVar5;
      __dest = puVar3 + 4;
      memcpy(__dest,param_1 + 2,__n);
      *(undefined1 *)((long)puVar3 + __n + 0x10) = 0;
    }
    piVar6 = __dest + -4;
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = &DAT_0061ac58;
    local_50 = &DAT_0061ac58;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0x100;
    local_30 = 0;
                    /* try { // try from 004cd0dc to 004cd0e8 has its CatchHandler @ 004cd128 */
    local_70 = __dest;
    XmlDocument::getDocumentElement((XmlDocument *)this,(XmlDocument *)&local_70);
    XmlDocument::~XmlDocument((XmlDocument *)&local_70);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
  return this;
}


