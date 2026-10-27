// Function : getParameter
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 001943e0
// Prototype: StringListParameter * getParameter(ProgramList * this)
// Body     : 001943e0 - 0019450b


/* Steinberg::Vst::ProgramList::getParameter() */

StringListParameter * __thiscall Steinberg::Vst::ProgramList::getParameter(ProgramList *this)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  StringListParameter *this_00;
  ulong uVar6;
  bool bVar7;
  
  this_00 = *(StringListParameter **)(this + 0x148);
  if (this_00 == (StringListParameter *)0x0) {
    this_00 = operator_new(0x350);
    uVar2 = *(undefined4 *)(this + 0xc);
    uVar3 = *(undefined4 *)(this + 0x114);
    *(undefined4 *)(this_00 + 8) = 1;
    memset(this_00 + 0x10,0,800);
    *(undefined4 *)(this_00 + 0x330) = 4;
    *(undefined ***)this_00 = &PTR_queryInterface_00704170;
    *(undefined8 *)(this_00 + 0x338) = 0;
    *(undefined8 *)(this_00 + 0x340) = 0;
    *(undefined8 *)(this_00 + 0x348) = 0;
    uVar6 = 0;
    do {
      sVar1 = *(short *)(this + uVar6 * 2 + 0x10);
      *(short *)(this_00 + uVar6 * 2 + 0x14) = sVar1;
      if (sVar1 == 0) break;
      bVar7 = uVar6 < 0x7f;
      uVar6 = uVar6 + 1;
    } while (bVar7);
    *(undefined2 *)(this_00 + 0x112) = 0;
    *(undefined4 *)(this_00 + 0x314) = 0xffffffff;
    *(undefined8 *)(this_00 + 0x318) = 0;
    *(undefined4 *)(this_00 + 0x324) = 0x8009;
    *(undefined4 *)(this_00 + 0x10) = uVar2;
    *(undefined4 *)(this_00 + 800) = uVar3;
    puVar4 = *(undefined8 **)(this + 0x118);
    puVar5 = *(undefined8 **)(this + 0x120);
    if (puVar4 != puVar5) {
      StringListParameter::appendString(this_00,(short *)*puVar4);
      while (puVar4 = puVar4 + 4, puVar4 != puVar5) {
        (**(code **)(*(long *)this_00 + 0xd0))(this_00,*puVar4);
      }
    }
    *(StringListParameter **)(this + 0x148) = this_00;
  }
  return this_00;
}


