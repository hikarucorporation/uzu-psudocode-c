// Function : Helmholtz
// Namespace: Helmholtz
// Entry    : 00572c50
// Prototype: undefined Helmholtz(float param_1, Helmholtz * this, uint param_3, int param_4)
// Body     : 00572c50 - 00572d27


/* Helmholtz::Helmholtz(int, int, float) */

void __thiscall Helmholtz::Helmholtz(float param_1,Helmholtz *this,uint param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0x400;
  if ((param_3 - 0x80 & 0xffffff7f) == 0) {
    uVar3 = param_3;
  }
  if (param_3 == 0x200) {
    uVar3 = param_3;
  }
  if ((param_3 - 0x400 & 0xfffffbff) == 0) {
    uVar3 = param_3;
  }
  iVar1 = 1;
  if (param_4 - 1U < 2) {
    iVar1 = param_4;
  }
  if ((param_4 - 4U & 0xfffffffb) == 0) {
    iVar1 = param_4;
  }
  *(uint *)(this + 0x1c) = uVar3;
  *(int *)(this + 0x20) = iVar1;
  fVar4 = DAT_005d9038;
  if (param_1 <= DAT_005d9038) {
    fVar4 = param_1;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(uint *)(this + 0x30) =
       ~-(uint)(param_1 != 0.0) & DAT_005d9070 | (uint)fVar4 & -(uint)(param_1 != 0.0);
  pvVar2 = calloc((ulong)uVar3,4);
  *(void **)this = pvVar2;
  pvVar2 = calloc((ulong)uVar3,4);
  *(void **)(this + 8) = pvVar2;
  pvVar2 = calloc((ulong)(uVar3 * 2),4);
  *(void **)(this + 0x10) = pvVar2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0x3b449ba6;
  return;
}


