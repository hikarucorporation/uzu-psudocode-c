// Function : toString
// Namespace: juce:JuceVST3EditController:Param
// Entry    : 001afeb0
// Prototype: undefined toString(double param_1, Param * this, long param_3)
// Body     : 001afeb0 - 001aff86


/* juce::JuceVST3EditController::Param::toString(double, char16_t*) const */

void __thiscall
juce::JuceVST3EditController::Param::toString(double param_1,Param *this,long param_3)

{
  long *plVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  bool bVar5;
  String aSStack_28 [8];
  double local_20;
  
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 != (long *)0x0) {
    local_20 = param_1;
    lVar2 = __dynamic_cast(plVar1,&AudioProcessorParameter::typeinfo,&LegacyAudioParameter::typeinfo
                          );
    param_1 = local_20;
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x80))(aSStack_28,plVar1);
                    /* try { // try from 001aff03 to 001aff0a has its CatchHandler @ 001aff87 */
      puVar3 = juce::String::toUTF16(aSStack_28);
      uVar4 = 0;
      do {
        *(ushort *)(param_3 + uVar4 * 2) = puVar3[uVar4];
        if (puVar3[uVar4] == 0) break;
        bVar5 = uVar4 < 0x7f;
        uVar4 = uVar4 + 1;
      } while (bVar5);
      goto LAB_001aff6c;
    }
  }
  (**(code **)(*plVar1 + 0x50))((float)param_1,aSStack_28,plVar1,0x80);
                    /* try { // try from 001aff46 to 001aff4d has its CatchHandler @ 001aff8f */
  puVar3 = juce::String::toUTF16(aSStack_28);
  uVar4 = 0;
  do {
    *(ushort *)(param_3 + uVar4 * 2) = puVar3[uVar4];
    if (puVar3[uVar4] == 0) break;
    bVar5 = uVar4 < 0x7f;
    uVar4 = uVar4 + 1;
  } while (bVar5);
LAB_001aff6c:
  *(undefined2 *)(param_3 + 0xfe) = 0;
  juce::String::~String(aSStack_28);
  return;
}


