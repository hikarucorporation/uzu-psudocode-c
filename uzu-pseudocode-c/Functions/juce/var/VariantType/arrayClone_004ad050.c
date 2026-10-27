// Function : arrayClone
// Namespace: juce:var:VariantType
// Entry    : 004ad050
// Prototype: VariantType * arrayClone(VariantType * this, long param_1)
// Body     : 004ad050 - 004ad323


/* juce::var::VariantType::arrayClone(juce::var const&) */

VariantType * __thiscall juce::var::VariantType::arrayClone(VariantType *this,long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  void *local_78;
  uint uStack_6c;
  undefined8 local_40;
  undefined8 local_38;
  
  local_78 = (void *)0x0;
  uStack_6c = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = __dynamic_cast(*(long *)(param_1 + 8),&ReferenceCountedObject::typeinfo,
                           &RefCountedArray::typeinfo,0);
    if (lVar1 != 0) {
      uVar10 = *(uint *)(lVar1 + 0x1c);
      if ((int)uVar10 < 1) {
        if ((ulong)uVar10 == 0) goto LAB_004ad28f;
        plVar11 = *(long **)(lVar1 + 0x10);
        plVar8 = plVar11 + (long)(int)uVar10 * 2;
        uVar5 = 0;
      }
      else {
        uVar9 = uVar10 + (uVar10 >> 1) + 8 & 0xfffffff8;
        uVar5 = (ulong)uVar9;
        if (0 < (int)uVar9) {
          local_78 = malloc(uVar5 << 4);
        }
        plVar11 = *(long **)(lVar1 + 0x10);
        plVar8 = plVar11 + (ulong)uVar10 * 2;
      }
      pvVar4 = local_78;
      uVar6 = 0;
      do {
                    /* try { // try from 004ad17b to 004ad185 has its CatchHandler @ 004ad34c */
        (**(code **)(*plVar11 + 0x50))(&local_40,plVar11);
        uVar7 = uVar6 + 1;
        uStack_6c = (uint)uVar7;
        uVar10 = (uint)uVar6;
        pvVar2 = pvVar4;
        if ((int)(uint)uVar5 <= (int)uVar10) {
          uVar9 = ((uint)(uVar7 >> 1) & 0x7fffffff) + uVar10 + 9 & 0xfffffff8;
          if ((uint)uVar5 == uVar9) {
            uVar5 = (ulong)uVar9;
          }
          else {
            pvVar2 = malloc((ulong)uVar9 << 4);
            if (uVar10 != 0) {
              if (uVar10 == 1) {
                uVar5 = 0;
              }
              else {
                lVar1 = 0;
                uVar5 = 0;
                do {
                  *(undefined8 *)((long)pvVar2 + lVar1) = *(undefined8 *)((long)pvVar4 + lVar1);
                  *(undefined8 *)((long)pvVar2 + lVar1 + 8) =
                       *(undefined8 *)((long)pvVar4 + lVar1 + 8);
                  *(undefined1 **)((long)pvVar4 + lVar1) = &Instance::attributesVoid;
                  *(undefined8 *)((long)pvVar2 + lVar1 + 0x10) =
                       *(undefined8 *)((long)pvVar4 + lVar1 + 0x10);
                  *(undefined8 *)((long)pvVar2 + lVar1 + 0x18) =
                       *(undefined8 *)((long)pvVar4 + lVar1 + 0x18);
                  *(undefined1 **)((long)pvVar4 + lVar1 + 0x10) = &Instance::attributesVoid;
                  uVar5 = uVar5 + 2;
                  lVar1 = lVar1 + 0x20;
                } while ((uVar10 & 0x7ffffffe) != uVar5);
              }
              if ((uVar6 & 1) != 0) {
                lVar1 = uVar5 * 0x10;
                *(undefined8 *)((long)pvVar2 + lVar1) = *(undefined8 *)((long)pvVar4 + lVar1);
                *(undefined8 *)((long)pvVar2 + lVar1 + 8) =
                     *(undefined8 *)((long)pvVar4 + lVar1 + 8);
                *(undefined1 **)((long)pvVar4 + lVar1) = &Instance::attributesVoid;
              }
            }
            free(local_78);
            uVar5 = (ulong)uVar9;
            local_78 = pvVar2;
          }
        }
        lVar1 = (uVar6 & 0xffffffff) * 0x10;
        *(undefined8 *)((long)pvVar2 + lVar1) = local_40;
        *(undefined8 *)((long)pvVar2 + lVar1 + 8) = local_38;
        plVar11 = plVar11 + 2;
        pvVar4 = pvVar2;
        uVar6 = uVar7;
      } while (plVar11 != plVar8);
    }
  }
LAB_004ad28f:
  *(undefined1 **)this = &Instance::attributesArray;
                    /* try { // try from 004ad299 to 004ad2a2 has its CatchHandler @ 004ad339 */
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR__RefCountedArray_00713d88;
  puVar3[2] = 0;
  puVar3[3] = 0;
                    /* try { // try from 004ad2c9 to 004ad2d3 has its CatchHandler @ 004ad324 */
  ArrayBase<juce::var,juce::DummyCriticalSection>::addArray<juce::var>
            ((ArrayBase<juce::var,juce::DummyCriticalSection> *)(puVar3 + 2),(long)local_78,
             uStack_6c);
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  *(undefined8 **)(this + 8) = puVar3;
  uVar5 = (ulong)uStack_6c;
  if (0 < (int)uStack_6c) {
    lVar1 = (long)local_78 + 8;
    do {
                    /* try { // try from 004ad2f4 to 004ad2f9 has its CatchHandler @ 004ad354 */
      (**(code **)(*(long *)(lVar1 + -8) + 0x58))(lVar1);
      lVar1 = lVar1 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  free(local_78);
  return this;
}


