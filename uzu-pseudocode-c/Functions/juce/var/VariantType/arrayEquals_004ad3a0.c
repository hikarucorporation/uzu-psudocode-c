// Function : arrayEquals
// Namespace: juce:var:VariantType
// Entry    : 004ad3a0
// Prototype: ulong arrayEquals(long * param_1, ulong param_2, long param_3)
// Body     : 004ad3a0 - 004ad4c9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::arrayEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

ulong __cdecl juce::var::VariantType::arrayEquals(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 local_48 [8];
  long local_40;
  undefined1 local_38 [8];
  
  if (*param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = __dynamic_cast(*param_1,&ReferenceCountedObject::typeinfo,&RefCountedArray::typeinfo,0);
  }
  plVar9 = (long *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    plVar9 = (long *)0x0;
  }
                    /* try { // try from 004ad3e3 to 004ad3e9 has its CatchHandler @ 004ad4ca */
  plVar7 = (long *)(**(code **)(param_3 + 0x40))(param_2);
  if (plVar9 != plVar7) {
    param_2 = 0;
    if ((lVar6 == 0) || (plVar7 == (long *)0x0)) goto LAB_004ad4b9;
    iVar2 = *(int *)((long)plVar7 + 0xc);
    if (iVar2 != *(int *)((long)plVar9 + 0xc)) {
      param_2 = 0;
      goto LAB_004ad4b9;
    }
    if (iVar2 != 0) {
      lVar6 = *plVar9;
      lVar3 = *plVar7;
      lVar8 = 0;
      do {
        lVar4 = *(long *)(lVar3 + lVar8);
                    /* try { // try from 004ad444 to 004ad44b has its CatchHandler @ 004ad504 */
        (**(code **)(lVar4 + 0x60))(local_48,lVar3 + lVar8 + 8);
        local_40 = *(long *)(lVar6 + lVar8);
        lVar1 = lVar8 + lVar6;
                    /* try { // try from 004ad45e to 004ad46b has its CatchHandler @ 004ad4ea */
        (**(code **)(local_40 + 0x60))(local_38,lVar1 + 8);
                    /* try { // try from 004ad476 to 004ad480 has its CatchHandler @ 004ad4e2 */
        uVar5 = (**(code **)(lVar4 + 0x68))(local_48,local_38,local_40);
        param_2 = (ulong)uVar5;
                    /* try { // try from 004ad48b to 004ad48d has its CatchHandler @ 004ad4da */
        (**(code **)(local_40 + 0x58))(local_38);
                    /* try { // try from 004ad493 to 004ad49a has its CatchHandler @ 004ad4d2 */
        (**(code **)(lVar4 + 0x58))(local_48);
        if ((char)uVar5 == '\0') break;
        lVar8 = lVar8 + 0x10;
      } while (lVar1 + 0x10 != (long)iVar2 * 0x10 + lVar6);
      goto LAB_004ad4b9;
    }
  }
  param_2 = CONCAT71((int7)(param_2 >> 8),1);
LAB_004ad4b9:
  return param_2 & 0xffffffff;
}


