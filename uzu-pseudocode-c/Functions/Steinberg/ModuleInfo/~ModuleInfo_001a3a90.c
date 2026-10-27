// Function : ~ModuleInfo
// Namespace: Steinberg:ModuleInfo
// Entry    : 001a3a90
// Prototype: undefined ~ModuleInfo(ModuleInfo * this)
// Body     : 001a3a90 - 001a3c09


/* Steinberg::ModuleInfo::~ModuleInfo() */

void __thiscall Steinberg::ModuleInfo::~ModuleInfo(ModuleInfo *this)

{
  undefined8 *puVar1;
  ClassInfo *pCVar2;
  undefined8 *puVar3;
  ClassInfo *this_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0xc0);
  puVar1 = *(undefined8 **)(this + 200);
  if (puVar5 != puVar1) {
    do {
      puVar4 = (undefined8 *)puVar5[4];
      puVar3 = (undefined8 *)puVar5[5];
      if (puVar4 != puVar3) {
        do {
          if ((undefined8 *)*puVar4 != puVar4 + 2) {
            operator_delete((undefined8 *)*puVar4);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar3);
        puVar4 = (undefined8 *)puVar5[4];
      }
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete(puVar4);
      }
      if ((undefined8 *)*puVar5 != puVar5 + 2) {
        operator_delete((undefined8 *)*puVar5);
      }
      puVar5 = puVar5 + 7;
    } while (puVar5 != puVar1);
    puVar5 = *(undefined8 **)(this + 0xc0);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  this_00 = *(ClassInfo **)(this + 0xa8);
  pCVar2 = *(ClassInfo **)(this + 0xb0);
  if (this_00 != pCVar2) {
    do {
      ClassInfo::~ClassInfo(this_00);
      this_00 = this_00 + 0xf8;
    } while (this_00 != pCVar2);
    this_00 = *(ClassInfo **)(this + 0xa8);
  }
  if (this_00 != (ClassInfo *)0x0) {
    operator_delete(this_00);
  }
  if (*(ModuleInfo **)(this + 0x80) != this + 0x90) {
    operator_delete(*(ModuleInfo **)(this + 0x80));
  }
  if (*(ModuleInfo **)(this + 0x60) != this + 0x70) {
    operator_delete(*(ModuleInfo **)(this + 0x60));
  }
  if (*(ModuleInfo **)(this + 0x40) != this + 0x50) {
    operator_delete(*(ModuleInfo **)(this + 0x40));
  }
  if (*(ModuleInfo **)(this + 0x20) != this + 0x30) {
    operator_delete(*(ModuleInfo **)(this + 0x20));
  }
  if (*(ModuleInfo **)this == this + 0x10) {
    return;
  }
  operator_delete(*(ModuleInfo **)this);
  return;
}


