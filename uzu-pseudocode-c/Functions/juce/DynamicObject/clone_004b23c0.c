// Function : clone
// Namespace: juce:DynamicObject
// Entry    : 004b23c0
// Prototype: undefined8 * clone(undefined8 * param_1, long param_2)
// Body     : 004b23c0 - 004b2496


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DynamicObject::clone() const */

undefined8 * __cdecl juce::DynamicObject::clone(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = &PTR__DynamicObject_00713988;
                    /* try { // try from 004b23fb to 004b2402 has its CatchHandler @ 004b2497 */
  Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0>::Array
            ((Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> *)(puVar5 + 2),
             (long *)(param_2 + 0x10));
  *param_1 = puVar5;
  uVar6 = (ulong)*(uint *)((long)puVar5 + 0x1c);
  local_38 = param_1;
  if (0 < (int)*(uint *)((long)puVar5 + 0x1c)) {
    uVar8 = uVar6;
    while( true ) {
      uVar1 = uVar8 - 1;
      lVar2 = puVar5[2] + (uVar1 & 0xffffffff) * 0x18;
      plVar7 = (long *)(lVar2 + 8);
      if ((uint)uVar1 < (uint)uVar6) {
                    /* try { // try from 004b2443 to 004b244b has its CatchHandler @ 004b24bd */
        (**(code **)(*plVar7 + 0x50))(&local_48,plVar7);
        lVar3 = *plVar7;
        *plVar7 = local_48;
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x10) = local_40;
                    /* try { // try from 004b246c to 004b2473 has its CatchHandler @ 004b24b5 */
        local_48 = lVar3;
        local_40 = uVar4;
        (**(code **)(lVar3 + 0x58))(&local_40);
      }
      if (uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)((long)puVar5 + 0x1c);
      uVar8 = uVar1;
    }
  }
  return local_38;
}


