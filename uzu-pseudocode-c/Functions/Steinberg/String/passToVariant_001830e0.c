// Function : passToVariant
// Namespace: Steinberg:String
// Entry    : 001830e0
// Prototype: undefined passToVariant(String * this, ushort * param_1)
// Body     : 001830e0 - 0018325c


/* Steinberg::String::passToVariant(Steinberg::FVariant&) */

void __thiscall Steinberg::String::passToVariant(String *this,ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  void *pvVar5;
  
  lVar3 = *(long *)(this + 8);
  uVar2 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x10) = uVar2 & 0xc0000000;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *param_1;
  if ((uVar2 & 0x40000000) == 0) {
    if (lVar3 == 0) {
      if ((uVar1 & 0x10) != 0) {
        if ((((uVar1 & 4) == 0) || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)) &&
           (((uVar1 & 0x20) == 0 || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)))) {
          if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
            (**(code **)(**(long **)(param_1 + 4) + 0x10))();
          }
        }
        else {
          free(pvVar5);
        }
      }
      param_1[0] = 4;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      puVar4 = (undefined2 *)&DAT_005dae18;
LAB_00183251:
      *(undefined2 **)(param_1 + 4) = puVar4;
      return;
    }
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) == 0) || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)) &&
         (((uVar1 & 0x20) == 0 || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)))) {
        if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
          (**(code **)(**(long **)(param_1 + 4) + 0x10))();
        }
      }
      else {
        free(pvVar5);
      }
    }
    param_1[0] = 0x14;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    if (lVar3 == 0) {
      if ((uVar1 & 0x10) != 0) {
        if ((((uVar1 & 4) == 0) || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)) &&
           (((uVar1 & 0x20) == 0 || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)))) {
          if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
            (**(code **)(**(long **)(param_1 + 4) + 0x10))();
          }
        }
        else {
          free(pvVar5);
        }
      }
      param_1[0] = 0x20;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      puVar4 = &kEmptyString16;
      goto LAB_00183251;
    }
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) == 0) || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)) &&
         (((uVar1 & 0x20) == 0 || (pvVar5 = *(void **)(param_1 + 4), pvVar5 == (void *)0x0)))) {
        if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
          (**(code **)(**(long **)(param_1 + 4) + 0x10))();
        }
      }
      else {
        free(pvVar5);
      }
    }
    param_1[0] = 0x30;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(long *)(param_1 + 4) = lVar3;
  return;
}


