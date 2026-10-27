// Function : ClassInfo
// Namespace: Steinberg:ModuleInfo:ClassInfo
// Entry    : 001a3810
// Prototype: undefined ClassInfo(ClassInfo * this, long * param_1)
// Body     : 001a3810 - 001a3a89


/* Steinberg::ModuleInfo::ClassInfo::ClassInfo(Steinberg::ModuleInfo::ClassInfo&&) */

void __thiscall Steinberg::ModuleInfo::ClassInfo::ClassInfo(ClassInfo *this,long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *(ClassInfo **)this = this + 0x10;
  plVar1 = (long *)*param_1;
  if (plVar1 == param_1 + 2) {
    memcpy(this + 0x10,plVar1,param_1[1] + 1);
  }
  else {
    *(long **)this = plVar1;
    *(long *)(this + 0x10) = param_1[2];
  }
  *(long *)(this + 8) = param_1[1];
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(ClassInfo **)(this + 0x20) = this + 0x30;
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 6) {
    memcpy(this + 0x30,plVar1,param_1[5] + 1);
  }
  else {
    *(long **)(this + 0x20) = plVar1;
    *(long *)(this + 0x30) = param_1[6];
  }
  *(long *)(this + 0x28) = param_1[5];
  param_1[4] = (long)(param_1 + 6);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(ClassInfo **)(this + 0x40) = this + 0x50;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 10) {
    memcpy(this + 0x50,plVar1,param_1[9] + 1);
  }
  else {
    *(long **)(this + 0x40) = plVar1;
    *(long *)(this + 0x50) = param_1[10];
  }
  *(long *)(this + 0x48) = param_1[9];
  param_1[8] = (long)(param_1 + 10);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(ClassInfo **)(this + 0x60) = this + 0x70;
  plVar1 = (long *)param_1[0xc];
  if (plVar1 == param_1 + 0xe) {
    memcpy(this + 0x70,plVar1,param_1[0xd] + 1);
  }
  else {
    *(long **)(this + 0x60) = plVar1;
    *(long *)(this + 0x70) = param_1[0xe];
  }
  *(long *)(this + 0x68) = param_1[0xd];
  param_1[0xc] = (long)(param_1 + 0xe);
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ClassInfo **)(this + 0x80) = this + 0x90;
  plVar1 = (long *)param_1[0x10];
  if (plVar1 == param_1 + 0x12) {
    memcpy(this + 0x90,plVar1,param_1[0x11] + 1);
  }
  else {
    *(long **)(this + 0x80) = plVar1;
    *(long *)(this + 0x90) = param_1[0x12];
  }
  *(long *)(this + 0x88) = param_1[0x11];
  param_1[0x10] = (long)(param_1 + 0x12);
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(ClassInfo **)(this + 0xa0) = this + 0xb0;
  plVar1 = (long *)param_1[0x14];
  if (plVar1 == param_1 + 0x16) {
    memcpy(this + 0xb0,plVar1,param_1[0x15] + 1);
  }
  else {
    *(long **)(this + 0xa0) = plVar1;
    *(long *)(this + 0xb0) = param_1[0x16];
  }
  *(long *)(this + 0xa8) = param_1[0x15];
  param_1[0x14] = (long)(param_1 + 0x16);
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  lVar2 = param_1[0x19];
  *(long *)(this + 0xc0) = param_1[0x18];
  *(long *)(this + 200) = lVar2;
  *(long *)(this + 0xd0) = param_1[0x1a];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar2 = param_1[0x1c];
  *(long *)(this + 0xd8) = param_1[0x1b];
  *(long *)(this + 0xe0) = lVar2;
  *(long *)(this + 0xe8) = param_1[0x1d];
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(long *)(this + 0xf0) = param_1[0x1e];
  return;
}


