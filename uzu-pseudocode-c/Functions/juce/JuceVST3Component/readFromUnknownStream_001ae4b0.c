// Function : readFromUnknownStream
// Namespace: juce:JuceVST3Component
// Entry    : 001ae4b0
// Prototype: ulong readFromUnknownStream(JuceVST3Component * this, long * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001ae4b0 - 001ae5ce


/* juce::JuceVST3Component::readFromUnknownStream(Steinberg::IBStream*) */

ulong __thiscall
juce::JuceVST3Component::readFromUnknownStream
          (JuceVST3Component *this,long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4
          ,undefined8 param_5)

{
  int iVar1;
  void *__ptr;
  long lVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  void *pvVar4;
  undefined1 *puVar5;
  uint local_7c;
  MemoryOutputStream local_78 [56];
  long local_40;
  
  MemoryOutputStream::MemoryOutputStream(local_78,0x100);
  __ptr = malloc(0x1000);
  while( true ) {
    local_7c = 0;
    pvVar4 = __ptr;
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,__ptr,0x1000,&local_7c);
    uVar3 = (ulong)local_7c;
    if ((int)local_7c < 1) break;
    if (iVar1 != 0) {
      if (detail::PluginUtilities::getHostType()::hostType == '\0') {
        puVar5 = &detail::PluginUtilities::getHostType()::hostType;
        iVar1 = __cxa_guard_acquire();
        if (iVar1 != 0) {
                    /* try { // try from 001ae561 to 001ae565 has its CatchHandler @ 001ae5cf */
          detail::PluginUtilities::getHostType()::hostType =
               PluginHostType::getHostType(puVar5,pvVar4,extraout_RDX,uVar3,param_4,param_5);
          __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
        }
      }
      if (4 < detail::PluginUtilities::getHostType()::hostType - 0x35U) break;
    }
                    /* try { // try from 001ae503 to 001ae529 has its CatchHandler @ 001ae5e5 */
    MemoryOutputStream::write(local_78,__ptr,(long)(int)local_7c);
  }
  free(__ptr);
  if (0xffffffff80000001 < local_40 - 0x7fffffffU) {
    lVar2 = MemoryOutputStream::getData(local_78);
                    /* try { // try from 001ae59d to 001ae5a9 has its CatchHandler @ 001ae5e0 */
    setStateInformation(this,lVar2,(uint)local_40);
  }
  MemoryOutputStream::~MemoryOutputStream(local_78);
  return CONCAT71((int7)((ulong)local_40 >> 8),0xffffffff80000001 < local_40 - 0x7fffffffU) &
         0xffffffff;
}


