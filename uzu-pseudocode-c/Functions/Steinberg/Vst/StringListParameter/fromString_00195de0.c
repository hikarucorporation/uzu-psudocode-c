// Function : fromString
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195de0
// Prototype: undefined8 fromString(StringListParameter * this, short * param_1, undefined8 * param_2)
// Body     : 00195de0 - 00195ec7


/* Steinberg::Vst::StringListParameter::fromString(char16_t const*, double&) const */

undefined8 __thiscall
Steinberg::Vst::StringListParameter::fromString
          (StringListParameter *this,short *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 extraout_XMM0_Qa;
  
  puVar8 = *(undefined8 **)(this + 0x338);
  puVar4 = *(undefined8 **)(this + 0x340);
  if (puVar8 != puVar4) {
    sVar1 = *param_1;
    iVar7 = 0;
    if (sVar1 == 0) {
      do {
        if (*(short *)*puVar8 == 0) {
LAB_00195ea5:
          uVar5 = (**(code **)(*(long *)this + 0xb8))((double)iVar7);
          *param_2 = extraout_XMM0_Qa;
          return CONCAT71((int7)((ulong)uVar5 >> 8),1);
        }
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + 1;
      } while (puVar8 != puVar4);
    }
    else {
      do {
        sVar2 = *(short *)*puVar8;
        if (sVar2 == sVar1) {
          lVar6 = 2;
          do {
            sVar2 = *(short *)((long)*puVar8 + lVar6);
            sVar3 = *(short *)((long)param_1 + lVar6);
            bVar9 = sVar3 == 0;
            if (sVar2 != sVar3) break;
            lVar6 = lVar6 + 2;
          } while (sVar3 != 0);
          if (sVar2 == 0) {
LAB_00195e9b:
            if (bVar9) goto LAB_00195ea5;
          }
          else if (sVar3 != 0) goto LAB_00195e38;
        }
        else {
          sVar3 = sVar1;
          if (sVar2 == 0) {
            bVar9 = false;
            goto LAB_00195e9b;
          }
LAB_00195e38:
          if (sVar2 == sVar3) goto LAB_00195ea5;
        }
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + 1;
      } while (puVar8 != puVar4);
    }
  }
  return 0;
}


