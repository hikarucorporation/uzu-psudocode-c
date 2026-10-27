// Function : ~ClassInfo
// Namespace: Steinberg:ModuleInfo:ClassInfo
// Entry    : 001a2ea0
// Prototype: undefined ~ClassInfo(ClassInfo * this)
// Body     : 001a2ea0 - 001a2fdb


/* Steinberg::ModuleInfo::ClassInfo::~ClassInfo() */

void __thiscall Steinberg::ModuleInfo::ClassInfo::~ClassInfo(ClassInfo *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = *(void **)(this + 0xd8);
  pvVar1 = *(void **)(this + 0xe0);
  if (pvVar3 != pvVar1) {
    do {
      if ((void *)((long)pvVar3 + 0x18) != *(void **)((long)pvVar3 + 8)) {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      pvVar3 = (void *)((long)pvVar3 + 0x28);
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)(this + 0xd8);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar4 = *(undefined8 **)(this + 0xc0);
  puVar2 = *(undefined8 **)(this + 200);
  if (puVar4 != puVar2) {
    do {
      if ((undefined8 *)*puVar4 != puVar4 + 2) {
        operator_delete((undefined8 *)*puVar4);
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar2);
    puVar4 = *(undefined8 **)(this + 0xc0);
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4);
  }
  if (*(ClassInfo **)(this + 0xa0) != this + 0xb0) {
    operator_delete(*(ClassInfo **)(this + 0xa0));
  }
  if (*(ClassInfo **)(this + 0x80) != this + 0x90) {
    operator_delete(*(ClassInfo **)(this + 0x80));
  }
  if (*(ClassInfo **)(this + 0x60) != this + 0x70) {
    operator_delete(*(ClassInfo **)(this + 0x60));
  }
  if (*(ClassInfo **)(this + 0x40) != this + 0x50) {
    operator_delete(*(ClassInfo **)(this + 0x40));
  }
  if (*(ClassInfo **)(this + 0x20) != this + 0x30) {
    operator_delete(*(ClassInfo **)(this + 0x20));
  }
  if (*(ClassInfo **)this == this + 0x10) {
    return;
  }
  operator_delete(*(ClassInfo **)this);
  return;
}


